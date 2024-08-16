var drawCharts = drawCompareCharts;

function constructTable(scenario, models, data1, data2, isPower, results1, results2) {
    let html = `<table class="tablesorter" id="results_${scenario}">`;
    html += `<thead><tr>`;
    let tableHeader = `
        <th>Model</th>
        <th>${data1}</th>
        <th>${data2}</th>
        <th>Performance Delta</th>`;

    if (isPower) {
        tableHeader += `
        <th>Power 1</th>
        <th>Power 2</th>
        <th>Power Delta</th>
        <th>Power Efficiency 1</th>
        <th>Power Efficiency 2</th>
        <th>Power Efficiency Delta</th>`;
    }
    tableHeader += `</tr>`;
    html += tableHeader + "</thead>";
    html += `<tfoot><tr>${tableHeader}</tr></tfoot>`;

    models.forEach((row) => {
        html += "<tr>";
        html += `<td class='model'>${row}</td>`;
        const perf1 = results1[row].performance_result;
        const perf2 = results2[row].performance_result;
        let perfdelta = 0;
        if (perf2) {
            perfdelta = Math.round((1 - perf1 / perf2) * 10000) / 100;
        }
        html += `<td>${perf1}</td>`;
        html += `<td>${perf2}</td>`;
        html += `<td>${perfdelta}</td>`;

        if (isPower) {
            const pow1 = results1[row].power_result;
            const pow2 = results2[row].power_result;
            let powdelta = 0;
            let peff1 = "";
            let peff2 = "";
            let peffdelta = "";

            if (pow2) {
                powdelta = Math.round((1 - pow1 / pow2) * 10000) / 100;
            }
            if (pow1) {
                peff1 = Math.round((perf1 / pow1) * 100000) / 100000;
            }
            if (pow2) {
                peff2 = Math.round((perf2 / pow2) * 100000) / 100000;
            }
            if (peff2) {
                peffdelta = Math.round((1 - peff1 / peff2) * 10000) / 100;
            }
            html += `<td>${pow1}</td>`;
            html += `<td>${pow2}</td>`;
            html += `<td>${powdelta}</td>`;
            html += `<td>${peff1}</td>`;
            html += `<td>${peff2}</td>`;
            html += `<td>${peffdelta}</td>`;
        }
        html += "</tr>";
    });

    html += "</table>";
    return html;
}






var scenarios = [ "Offline", "Server", "SingleStream", "MultiStream" ];
var charts1 = {};
var charts2 = {};
var charts3 = {};
function drawCompareCharts() {
	drawCompareCharts_("Offline");
	drawCompareCharts_("Server");
	drawCompareCharts_("SingleStream");
	drawCompareCharts_("MultiStream");
}
function drawCompareCharts_(scenario) {
	var chartdata1a = [], chartdata2a = [];	
	var chartdata1b = [], chartdata2b = [];	
	var chartdata1c = [], chartdata2c = [];	
	var models = [], val1a=[], val2a=[], val1b=[], val2b=[], val1c=[], val2c=[];

	var tableid = "#results_"+scenario;
	if(! ($(tableid).length)) return;

	$(tableid +" tbody tr td:nth-child(1)").each( function(){
		if (!($(this).is(":hidden")) ) {
			models.push( $(this).text() );
		}
	});

	$(tableid + " tbody tr td:nth-child(2)").each( function(){
		if (!($(this).is(":hidden")))
			val1a.push( $(this).text() );       
	});
	$(tableid + " tbody tr td:nth-child(3)").each( function(){
		if (!($(this).is(":hidden")))
			val2a.push( $(this).text() );       
	});
	$(tableid + " tbody tr td:nth-child(5)").each( function(){
		if (!($(this).is(":hidden")))
			val1b.push( $(this).text() );       
	});
	$(tableid + " tbody tr td:nth-child(6)").each( function(){
		if (!($(this).is(":hidden")))
			val2b.push( $(this).text() );       
	});
	$(tableid + " tbody tr td:nth-child(8)").each( function(){
		if (!($(this).is(":hidden")))
			val1c.push( $(this).text() );       
	});
	$(tableid + " tbody tr td:nth-child(9)").each( function(){
		if (!($(this).is(":hidden")))
			val2c.push( $(this).text() );       
	});
	var count=0;
	for(var i = 0; i < models.length; i++) {
		chartdata1a.push({
			x: count,
			y: parseFloat(val1a[i]),
			label: models[i]
		});
		chartdata2a.push({
			x: count,
			y: parseFloat(val2a[i]),
			label: models[i]
		});

		chartdata1b.push({
			x: count,
			y: parseFloat(val1b[i]),
			label: models[i]
		});
		chartdata2b.push({
			x: count,
			y: parseFloat(val2b[i]),
			label: models[i]
		});
		chartdata1c.push({
			x: count,
			y: parseFloat(val1c[i]),
			label: models[i]
		});
		chartdata2c.push({
			x: count,
			y: parseFloat(val2c[i]),
			label: models[i]
		});
		count++;
	}
	charts1[scenario] = new CanvasJS.Chart("chartContainer"+scenario+"1", {
		title: {
			text: "Performance Comparison"
		},
		subtitles: [{
			text: "",
			fontSize: 40,
			verticalAlign: "center",
			dockInsidePlotArea: true,
			fontColor: "rgba(0,0,0,0.1)"
		}],

		legend: {
			cursor: "pointer",
			//itemclick: toggleDataSeries,
		},
		axisX:{
			intervalType: String,
			valueFormatString: " ",
			labelAngle: 0,
			labelTextAlign: "center",
			labelMaxWidth: 60,
			labelFormatter: function(e) {
				return (""+e.label).substring(0,75);
			},
		},
		axisY: {
			crosshair: {
				enabled: true
			},
			minimum: 0,
			title: ytitle[scenario],
		},
		data: [
			{
				showInLegend: true,
				type: "column",
				name: data1[scenario],
				dataPoints: chartdata1a
			},
			{
				showInLegend: true,
				type: "column",
				name: data2[scenario],
				dataPoints: chartdata2a
			},

		]
	});
	charts1[scenario].render();

	if(draw_power[scenario]) {	
		charts2[scenario] = new CanvasJS.Chart("chartContainer"+scenario+"2", {

			title: {
				text: "Power Comparison"
			},
			subtitles: [{
				text: "",
				fontSize: 40,
				verticalAlign: "center",
				dockInsidePlotArea: true,
				fontColor: "rgba(0,0,0,0.1)"
			}],

			legend: {
				cursor: "pointer",
				//itemclick: toggleDataSeries,
			},
			axisX:{
				intervalType: String,
				valueFormatString: " ",
				labelAngle: 0,
				labelTextAlign: "center",
				labelMaxWidth: 60,
				labelFormatter: function(e) {
					return (""+e.label).substring(0,75);
				},
			},
			axisY: {
				crosshair: {
					enabled: true
				},
				title: "Average Power (Watts)",
			},
			data: [
				{
					showInLegend: true,
					type: "column",
					name: data1[scenario],
					dataPoints: chartdata1b
				},
				{
					showInLegend: true,
					type: "column",
					name: data2[scenario],
					dataPoints: chartdata2b
				},

			]
		});
		charts2[scenario].render();
	}

	if(draw_power_efficiency[scenario]) {

		charts3[scenario] = new CanvasJS.Chart("chartContainer"+scenario+"3", {

			title: {
				text: "Power Efficiency"
			},
			subtitles: [{
				text: "",
				fontSize: 40,
				verticalAlign: "center",
				dockInsidePlotArea: true,
				fontColor: "rgba(0,0,0,0.1)"
			}],

			legend: {
				cursor: "pointer",
				//itemclick: toggleDataSeries,
			},
			axisX:{
				intervalType: String,
				valueFormatString: " ",
				labelAngle: 0,
				labelTextAlign: "center",
				labelMaxWidth: 60,
				labelFormatter: function(e) {
					return (""+e.label).substring(0,75);
				},
			},
			axisY: {
				crosshair: {
					enabled: true
				},
				title: "Samples per Joule",
			},
			data: [
				{
					showInLegend: true,
					type: "column",
					name: data1[scenario],
					dataPoints: chartdata1c
				},
				{
					showInLegend: true,
					type: "column",
					name: data2[scenario],
					dataPoints: chartdata2c
				},

			]
		});
		charts3[scenario].render();
	}
}


if($("#printChartOffline1").length)
	document.getElementById("printChartOffline1").addEventListener("click",function(){
		charts1["Offline"].exportChart({format: "png"});
	}); 

if($("#printChartServer1").length)
	document.getElementById("printChartServer1").addEventListener("click",function(){
		charts1["Server"].exportChart({format: "png"});
	}); 
if($("#printChartSingleStream1").length)
	document.getElementById("printChartSingleStream1").addEventListener("click",function(){
		charts1["SingleStream"].exportChart({format: "png"});
	}); 
if($("#printChartMultiStream1").length)
	document.getElementById("printChartMultiStream1").addEventListener("click",function(){
		charts1["MultiStream"].exportChart({format: "png"});
	}); 

if(draw_power["Offline"]) {
	if( $("#printChartOffline2").length)
		document.getElementById("printChartOffline2").addEventListener("click",function(){
			charts2["Offline"].exportChart({format: "png"});
		}); 
}
if(draw_power["Server"]) {
	if( $("#printChartServer2").length)
		document.getElementById("printChartServer2").addEventListener("click",function(){
			charts2["Server"].exportChart({format: "png"});
		}); 
}
if(draw_power["SingleStream"]) {
	if( $("#printChartSingleStream2").length)
		document.getElementById("printChartSingleStream2").addEventListener("click",function(){
			charts2["SingleStream"].exportChart({format: "png"});
		}); 
}
if(draw_power["MultiStream"]) {
	if( $("#printChartMultiStream2").length)
		document.getElementById("printChartMultiStream2").addEventListener("click",function(){
			charts2["MultiStream"].exportChart({format: "png"});
		}); 
}

if(draw_power_efficiency["Offline"]) {
	if( $("#printChartOffline3").length)
		document.getElementById("printChartOffline3").addEventListener("click",function(){
			charts3["Offline"].exportChart({format: "png"});
		});
}
if(draw_power_efficiency["Server"]) {
	if( $("#printChartServer3").length)
		document.getElementById("printChartServer3").addEventListener("click",function(){
			charts3["Server"].exportChart({format: "png"});
		});
}
if(draw_power_efficiency["SingleStream"]) {
	if( $("#printChartSingleStream3").length)
		document.getElementById("printChartSingleStream3").addEventListener("click",function(){
			charts3["SingleStream"].exportChart({format: "png"});
		});
}
if(draw_power_efficiency["MultiStream"]) {
	if( $("#printChartMultiStream3").length)
		document.getElementById("printChartMultiStream3").addEventListener("click",function(){
			charts3["MultiStream"].exportChart({format: "png"});
		});
}

$( document ).on( "click", "#results_Offline thead th", function() {
	drawCompareCharts_("Offline");
});
$( document ).on( "click", "#results_Server thead th", function() {
	drawCompareCharts_("Server");
});
$( document ).on( "click", "#results_SingleStream thead th", function() {
	drawCompareCharts_("SingleStream");
});
$( document ).on( "click", "#results_MultiStream thead th", function() {
	drawCompareCharts_("MultiStream");
});


$(document).ready(function() {
    $('#compareform').submit(function(event) {
        event.preventDefault(); // This will cancel the form submission

        // Your custom logic here
        console.log('Form submission canceled.');
    var system1 = $('#system1 option:selected').text();
    var system2 = $('#system2 option:selected').text();
    var models = $('#models option:selected').map(function() {
    return $(this).text();
}).get();

	console.log(system1);
	console.log(system2);
	console.log(models);
    scenario = "Offline";
 /*   constructTable(scenario, models, system1, system2, False, results1, results2) {

        // Optionally, you can handle the form data yourself
    */}
    );
});
