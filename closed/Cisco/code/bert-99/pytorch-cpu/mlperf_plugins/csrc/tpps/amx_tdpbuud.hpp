#include <immintrin.h>

template <int dst, int s0, int s1> inline void __tile_dpbuud();

template <> inline void __tile_dpbuud<0, 1, 2>() { _tile_dpbuud(0, 1, 2); }
template <> inline void __tile_dpbuud<0, 1, 3>() { _tile_dpbuud(0, 1, 3); }
template <> inline void __tile_dpbuud<0, 1, 4>() { _tile_dpbuud(0, 1, 4); }
template <> inline void __tile_dpbuud<0, 1, 5>() { _tile_dpbuud(0, 1, 5); }
template <> inline void __tile_dpbuud<0, 1, 6>() { _tile_dpbuud(0, 1, 6); }
template <> inline void __tile_dpbuud<0, 1, 7>() { _tile_dpbuud(0, 1, 7); }
template <> inline void __tile_dpbuud<0, 2, 1>() { _tile_dpbuud(0, 2, 1); }
template <> inline void __tile_dpbuud<0, 2, 3>() { _tile_dpbuud(0, 2, 3); }
template <> inline void __tile_dpbuud<0, 2, 4>() { _tile_dpbuud(0, 2, 4); }
template <> inline void __tile_dpbuud<0, 2, 5>() { _tile_dpbuud(0, 2, 5); }
template <> inline void __tile_dpbuud<0, 2, 6>() { _tile_dpbuud(0, 2, 6); }
template <> inline void __tile_dpbuud<0, 2, 7>() { _tile_dpbuud(0, 2, 7); }
template <> inline void __tile_dpbuud<0, 3, 1>() { _tile_dpbuud(0, 3, 1); }
template <> inline void __tile_dpbuud<0, 3, 2>() { _tile_dpbuud(0, 3, 2); }
template <> inline void __tile_dpbuud<0, 3, 4>() { _tile_dpbuud(0, 3, 4); }
template <> inline void __tile_dpbuud<0, 3, 5>() { _tile_dpbuud(0, 3, 5); }
template <> inline void __tile_dpbuud<0, 3, 6>() { _tile_dpbuud(0, 3, 6); }
template <> inline void __tile_dpbuud<0, 3, 7>() { _tile_dpbuud(0, 3, 7); }
template <> inline void __tile_dpbuud<0, 4, 1>() { _tile_dpbuud(0, 4, 1); }
template <> inline void __tile_dpbuud<0, 4, 2>() { _tile_dpbuud(0, 4, 2); }
template <> inline void __tile_dpbuud<0, 4, 3>() { _tile_dpbuud(0, 4, 3); }
template <> inline void __tile_dpbuud<0, 4, 5>() { _tile_dpbuud(0, 4, 5); }
template <> inline void __tile_dpbuud<0, 4, 6>() { _tile_dpbuud(0, 4, 6); }
template <> inline void __tile_dpbuud<0, 4, 7>() { _tile_dpbuud(0, 4, 7); }
template <> inline void __tile_dpbuud<0, 5, 1>() { _tile_dpbuud(0, 5, 1); }
template <> inline void __tile_dpbuud<0, 5, 2>() { _tile_dpbuud(0, 5, 2); }
template <> inline void __tile_dpbuud<0, 5, 3>() { _tile_dpbuud(0, 5, 3); }
template <> inline void __tile_dpbuud<0, 5, 4>() { _tile_dpbuud(0, 5, 4); }
template <> inline void __tile_dpbuud<0, 5, 6>() { _tile_dpbuud(0, 5, 6); }
template <> inline void __tile_dpbuud<0, 5, 7>() { _tile_dpbuud(0, 5, 7); }
template <> inline void __tile_dpbuud<0, 6, 1>() { _tile_dpbuud(0, 6, 1); }
template <> inline void __tile_dpbuud<0, 6, 2>() { _tile_dpbuud(0, 6, 2); }
template <> inline void __tile_dpbuud<0, 6, 3>() { _tile_dpbuud(0, 6, 3); }
template <> inline void __tile_dpbuud<0, 6, 4>() { _tile_dpbuud(0, 6, 4); }
template <> inline void __tile_dpbuud<0, 6, 5>() { _tile_dpbuud(0, 6, 5); }
template <> inline void __tile_dpbuud<0, 6, 7>() { _tile_dpbuud(0, 6, 7); }
template <> inline void __tile_dpbuud<0, 7, 1>() { _tile_dpbuud(0, 7, 1); }
template <> inline void __tile_dpbuud<0, 7, 2>() { _tile_dpbuud(0, 7, 2); }
template <> inline void __tile_dpbuud<0, 7, 3>() { _tile_dpbuud(0, 7, 3); }
template <> inline void __tile_dpbuud<0, 7, 4>() { _tile_dpbuud(0, 7, 4); }
template <> inline void __tile_dpbuud<0, 7, 5>() { _tile_dpbuud(0, 7, 5); }
template <> inline void __tile_dpbuud<0, 7, 6>() { _tile_dpbuud(0, 7, 6); }
template <> inline void __tile_dpbuud<1, 0, 2>() { _tile_dpbuud(1, 0, 2); }
template <> inline void __tile_dpbuud<1, 0, 3>() { _tile_dpbuud(1, 0, 3); }
template <> inline void __tile_dpbuud<1, 0, 4>() { _tile_dpbuud(1, 0, 4); }
template <> inline void __tile_dpbuud<1, 0, 5>() { _tile_dpbuud(1, 0, 5); }
template <> inline void __tile_dpbuud<1, 0, 6>() { _tile_dpbuud(1, 0, 6); }
template <> inline void __tile_dpbuud<1, 0, 7>() { _tile_dpbuud(1, 0, 7); }
template <> inline void __tile_dpbuud<1, 2, 0>() { _tile_dpbuud(1, 2, 0); }
template <> inline void __tile_dpbuud<1, 2, 3>() { _tile_dpbuud(1, 2, 3); }
template <> inline void __tile_dpbuud<1, 2, 4>() { _tile_dpbuud(1, 2, 4); }
template <> inline void __tile_dpbuud<1, 2, 5>() { _tile_dpbuud(1, 2, 5); }
template <> inline void __tile_dpbuud<1, 2, 6>() { _tile_dpbuud(1, 2, 6); }
template <> inline void __tile_dpbuud<1, 2, 7>() { _tile_dpbuud(1, 2, 7); }
template <> inline void __tile_dpbuud<1, 3, 0>() { _tile_dpbuud(1, 3, 0); }
template <> inline void __tile_dpbuud<1, 3, 2>() { _tile_dpbuud(1, 3, 2); }
template <> inline void __tile_dpbuud<1, 3, 4>() { _tile_dpbuud(1, 3, 4); }
template <> inline void __tile_dpbuud<1, 3, 5>() { _tile_dpbuud(1, 3, 5); }
template <> inline void __tile_dpbuud<1, 3, 6>() { _tile_dpbuud(1, 3, 6); }
template <> inline void __tile_dpbuud<1, 3, 7>() { _tile_dpbuud(1, 3, 7); }
template <> inline void __tile_dpbuud<1, 4, 0>() { _tile_dpbuud(1, 4, 0); }
template <> inline void __tile_dpbuud<1, 4, 2>() { _tile_dpbuud(1, 4, 2); }
template <> inline void __tile_dpbuud<1, 4, 3>() { _tile_dpbuud(1, 4, 3); }
template <> inline void __tile_dpbuud<1, 4, 5>() { _tile_dpbuud(1, 4, 5); }
template <> inline void __tile_dpbuud<1, 4, 6>() { _tile_dpbuud(1, 4, 6); }
template <> inline void __tile_dpbuud<1, 4, 7>() { _tile_dpbuud(1, 4, 7); }
template <> inline void __tile_dpbuud<1, 5, 0>() { _tile_dpbuud(1, 5, 0); }
template <> inline void __tile_dpbuud<1, 5, 2>() { _tile_dpbuud(1, 5, 2); }
template <> inline void __tile_dpbuud<1, 5, 3>() { _tile_dpbuud(1, 5, 3); }
template <> inline void __tile_dpbuud<1, 5, 4>() { _tile_dpbuud(1, 5, 4); }
template <> inline void __tile_dpbuud<1, 5, 6>() { _tile_dpbuud(1, 5, 6); }
template <> inline void __tile_dpbuud<1, 5, 7>() { _tile_dpbuud(1, 5, 7); }
template <> inline void __tile_dpbuud<1, 6, 0>() { _tile_dpbuud(1, 6, 0); }
template <> inline void __tile_dpbuud<1, 6, 2>() { _tile_dpbuud(1, 6, 2); }
template <> inline void __tile_dpbuud<1, 6, 3>() { _tile_dpbuud(1, 6, 3); }
template <> inline void __tile_dpbuud<1, 6, 4>() { _tile_dpbuud(1, 6, 4); }
template <> inline void __tile_dpbuud<1, 6, 5>() { _tile_dpbuud(1, 6, 5); }
template <> inline void __tile_dpbuud<1, 6, 7>() { _tile_dpbuud(1, 6, 7); }
template <> inline void __tile_dpbuud<1, 7, 0>() { _tile_dpbuud(1, 7, 0); }
template <> inline void __tile_dpbuud<1, 7, 2>() { _tile_dpbuud(1, 7, 2); }
template <> inline void __tile_dpbuud<1, 7, 3>() { _tile_dpbuud(1, 7, 3); }
template <> inline void __tile_dpbuud<1, 7, 4>() { _tile_dpbuud(1, 7, 4); }
template <> inline void __tile_dpbuud<1, 7, 5>() { _tile_dpbuud(1, 7, 5); }
template <> inline void __tile_dpbuud<1, 7, 6>() { _tile_dpbuud(1, 7, 6); }
template <> inline void __tile_dpbuud<2, 0, 1>() { _tile_dpbuud(2, 0, 1); }
template <> inline void __tile_dpbuud<2, 0, 3>() { _tile_dpbuud(2, 0, 3); }
template <> inline void __tile_dpbuud<2, 0, 4>() { _tile_dpbuud(2, 0, 4); }
template <> inline void __tile_dpbuud<2, 0, 5>() { _tile_dpbuud(2, 0, 5); }
template <> inline void __tile_dpbuud<2, 0, 6>() { _tile_dpbuud(2, 0, 6); }
template <> inline void __tile_dpbuud<2, 0, 7>() { _tile_dpbuud(2, 0, 7); }
template <> inline void __tile_dpbuud<2, 1, 0>() { _tile_dpbuud(2, 1, 0); }
template <> inline void __tile_dpbuud<2, 1, 3>() { _tile_dpbuud(2, 1, 3); }
template <> inline void __tile_dpbuud<2, 1, 4>() { _tile_dpbuud(2, 1, 4); }
template <> inline void __tile_dpbuud<2, 1, 5>() { _tile_dpbuud(2, 1, 5); }
template <> inline void __tile_dpbuud<2, 1, 6>() { _tile_dpbuud(2, 1, 6); }
template <> inline void __tile_dpbuud<2, 1, 7>() { _tile_dpbuud(2, 1, 7); }
template <> inline void __tile_dpbuud<2, 3, 0>() { _tile_dpbuud(2, 3, 0); }
template <> inline void __tile_dpbuud<2, 3, 1>() { _tile_dpbuud(2, 3, 1); }
template <> inline void __tile_dpbuud<2, 3, 4>() { _tile_dpbuud(2, 3, 4); }
template <> inline void __tile_dpbuud<2, 3, 5>() { _tile_dpbuud(2, 3, 5); }
template <> inline void __tile_dpbuud<2, 3, 6>() { _tile_dpbuud(2, 3, 6); }
template <> inline void __tile_dpbuud<2, 3, 7>() { _tile_dpbuud(2, 3, 7); }
template <> inline void __tile_dpbuud<2, 4, 0>() { _tile_dpbuud(2, 4, 0); }
template <> inline void __tile_dpbuud<2, 4, 1>() { _tile_dpbuud(2, 4, 1); }
template <> inline void __tile_dpbuud<2, 4, 3>() { _tile_dpbuud(2, 4, 3); }
template <> inline void __tile_dpbuud<2, 4, 5>() { _tile_dpbuud(2, 4, 5); }
template <> inline void __tile_dpbuud<2, 4, 6>() { _tile_dpbuud(2, 4, 6); }
template <> inline void __tile_dpbuud<2, 4, 7>() { _tile_dpbuud(2, 4, 7); }
template <> inline void __tile_dpbuud<2, 5, 0>() { _tile_dpbuud(2, 5, 0); }
template <> inline void __tile_dpbuud<2, 5, 1>() { _tile_dpbuud(2, 5, 1); }
template <> inline void __tile_dpbuud<2, 5, 3>() { _tile_dpbuud(2, 5, 3); }
template <> inline void __tile_dpbuud<2, 5, 4>() { _tile_dpbuud(2, 5, 4); }
template <> inline void __tile_dpbuud<2, 5, 6>() { _tile_dpbuud(2, 5, 6); }
template <> inline void __tile_dpbuud<2, 5, 7>() { _tile_dpbuud(2, 5, 7); }
template <> inline void __tile_dpbuud<2, 6, 0>() { _tile_dpbuud(2, 6, 0); }
template <> inline void __tile_dpbuud<2, 6, 1>() { _tile_dpbuud(2, 6, 1); }
template <> inline void __tile_dpbuud<2, 6, 3>() { _tile_dpbuud(2, 6, 3); }
template <> inline void __tile_dpbuud<2, 6, 4>() { _tile_dpbuud(2, 6, 4); }
template <> inline void __tile_dpbuud<2, 6, 5>() { _tile_dpbuud(2, 6, 5); }
template <> inline void __tile_dpbuud<2, 6, 7>() { _tile_dpbuud(2, 6, 7); }
template <> inline void __tile_dpbuud<2, 7, 0>() { _tile_dpbuud(2, 7, 0); }
template <> inline void __tile_dpbuud<2, 7, 1>() { _tile_dpbuud(2, 7, 1); }
template <> inline void __tile_dpbuud<2, 7, 3>() { _tile_dpbuud(2, 7, 3); }
template <> inline void __tile_dpbuud<2, 7, 4>() { _tile_dpbuud(2, 7, 4); }
template <> inline void __tile_dpbuud<2, 7, 5>() { _tile_dpbuud(2, 7, 5); }
template <> inline void __tile_dpbuud<2, 7, 6>() { _tile_dpbuud(2, 7, 6); }
template <> inline void __tile_dpbuud<3, 0, 1>() { _tile_dpbuud(3, 0, 1); }
template <> inline void __tile_dpbuud<3, 0, 2>() { _tile_dpbuud(3, 0, 2); }
template <> inline void __tile_dpbuud<3, 0, 4>() { _tile_dpbuud(3, 0, 4); }
template <> inline void __tile_dpbuud<3, 0, 5>() { _tile_dpbuud(3, 0, 5); }
template <> inline void __tile_dpbuud<3, 0, 6>() { _tile_dpbuud(3, 0, 6); }
template <> inline void __tile_dpbuud<3, 0, 7>() { _tile_dpbuud(3, 0, 7); }
template <> inline void __tile_dpbuud<3, 1, 0>() { _tile_dpbuud(3, 1, 0); }
template <> inline void __tile_dpbuud<3, 1, 2>() { _tile_dpbuud(3, 1, 2); }
template <> inline void __tile_dpbuud<3, 1, 4>() { _tile_dpbuud(3, 1, 4); }
template <> inline void __tile_dpbuud<3, 1, 5>() { _tile_dpbuud(3, 1, 5); }
template <> inline void __tile_dpbuud<3, 1, 6>() { _tile_dpbuud(3, 1, 6); }
template <> inline void __tile_dpbuud<3, 1, 7>() { _tile_dpbuud(3, 1, 7); }
template <> inline void __tile_dpbuud<3, 2, 0>() { _tile_dpbuud(3, 2, 0); }
template <> inline void __tile_dpbuud<3, 2, 1>() { _tile_dpbuud(3, 2, 1); }
template <> inline void __tile_dpbuud<3, 2, 4>() { _tile_dpbuud(3, 2, 4); }
template <> inline void __tile_dpbuud<3, 2, 5>() { _tile_dpbuud(3, 2, 5); }
template <> inline void __tile_dpbuud<3, 2, 6>() { _tile_dpbuud(3, 2, 6); }
template <> inline void __tile_dpbuud<3, 2, 7>() { _tile_dpbuud(3, 2, 7); }
template <> inline void __tile_dpbuud<3, 4, 0>() { _tile_dpbuud(3, 4, 0); }
template <> inline void __tile_dpbuud<3, 4, 1>() { _tile_dpbuud(3, 4, 1); }
template <> inline void __tile_dpbuud<3, 4, 2>() { _tile_dpbuud(3, 4, 2); }
template <> inline void __tile_dpbuud<3, 4, 5>() { _tile_dpbuud(3, 4, 5); }
template <> inline void __tile_dpbuud<3, 4, 6>() { _tile_dpbuud(3, 4, 6); }
template <> inline void __tile_dpbuud<3, 4, 7>() { _tile_dpbuud(3, 4, 7); }
template <> inline void __tile_dpbuud<3, 5, 0>() { _tile_dpbuud(3, 5, 0); }
template <> inline void __tile_dpbuud<3, 5, 1>() { _tile_dpbuud(3, 5, 1); }
template <> inline void __tile_dpbuud<3, 5, 2>() { _tile_dpbuud(3, 5, 2); }
template <> inline void __tile_dpbuud<3, 5, 4>() { _tile_dpbuud(3, 5, 4); }
template <> inline void __tile_dpbuud<3, 5, 6>() { _tile_dpbuud(3, 5, 6); }
template <> inline void __tile_dpbuud<3, 5, 7>() { _tile_dpbuud(3, 5, 7); }
template <> inline void __tile_dpbuud<3, 6, 0>() { _tile_dpbuud(3, 6, 0); }
template <> inline void __tile_dpbuud<3, 6, 1>() { _tile_dpbuud(3, 6, 1); }
template <> inline void __tile_dpbuud<3, 6, 2>() { _tile_dpbuud(3, 6, 2); }
template <> inline void __tile_dpbuud<3, 6, 4>() { _tile_dpbuud(3, 6, 4); }
template <> inline void __tile_dpbuud<3, 6, 5>() { _tile_dpbuud(3, 6, 5); }
template <> inline void __tile_dpbuud<3, 6, 7>() { _tile_dpbuud(3, 6, 7); }
template <> inline void __tile_dpbuud<3, 7, 0>() { _tile_dpbuud(3, 7, 0); }
template <> inline void __tile_dpbuud<3, 7, 1>() { _tile_dpbuud(3, 7, 1); }
template <> inline void __tile_dpbuud<3, 7, 2>() { _tile_dpbuud(3, 7, 2); }
template <> inline void __tile_dpbuud<3, 7, 4>() { _tile_dpbuud(3, 7, 4); }
template <> inline void __tile_dpbuud<3, 7, 5>() { _tile_dpbuud(3, 7, 5); }
template <> inline void __tile_dpbuud<3, 7, 6>() { _tile_dpbuud(3, 7, 6); }
template <> inline void __tile_dpbuud<4, 0, 1>() { _tile_dpbuud(4, 0, 1); }
template <> inline void __tile_dpbuud<4, 0, 2>() { _tile_dpbuud(4, 0, 2); }
template <> inline void __tile_dpbuud<4, 0, 3>() { _tile_dpbuud(4, 0, 3); }
template <> inline void __tile_dpbuud<4, 0, 5>() { _tile_dpbuud(4, 0, 5); }
template <> inline void __tile_dpbuud<4, 0, 6>() { _tile_dpbuud(4, 0, 6); }
template <> inline void __tile_dpbuud<4, 0, 7>() { _tile_dpbuud(4, 0, 7); }
template <> inline void __tile_dpbuud<4, 1, 0>() { _tile_dpbuud(4, 1, 0); }
template <> inline void __tile_dpbuud<4, 1, 2>() { _tile_dpbuud(4, 1, 2); }
template <> inline void __tile_dpbuud<4, 1, 3>() { _tile_dpbuud(4, 1, 3); }
template <> inline void __tile_dpbuud<4, 1, 5>() { _tile_dpbuud(4, 1, 5); }
template <> inline void __tile_dpbuud<4, 1, 6>() { _tile_dpbuud(4, 1, 6); }
template <> inline void __tile_dpbuud<4, 1, 7>() { _tile_dpbuud(4, 1, 7); }
template <> inline void __tile_dpbuud<4, 2, 0>() { _tile_dpbuud(4, 2, 0); }
template <> inline void __tile_dpbuud<4, 2, 1>() { _tile_dpbuud(4, 2, 1); }
template <> inline void __tile_dpbuud<4, 2, 3>() { _tile_dpbuud(4, 2, 3); }
template <> inline void __tile_dpbuud<4, 2, 5>() { _tile_dpbuud(4, 2, 5); }
template <> inline void __tile_dpbuud<4, 2, 6>() { _tile_dpbuud(4, 2, 6); }
template <> inline void __tile_dpbuud<4, 2, 7>() { _tile_dpbuud(4, 2, 7); }
template <> inline void __tile_dpbuud<4, 3, 0>() { _tile_dpbuud(4, 3, 0); }
template <> inline void __tile_dpbuud<4, 3, 1>() { _tile_dpbuud(4, 3, 1); }
template <> inline void __tile_dpbuud<4, 3, 2>() { _tile_dpbuud(4, 3, 2); }
template <> inline void __tile_dpbuud<4, 3, 5>() { _tile_dpbuud(4, 3, 5); }
template <> inline void __tile_dpbuud<4, 3, 6>() { _tile_dpbuud(4, 3, 6); }
template <> inline void __tile_dpbuud<4, 3, 7>() { _tile_dpbuud(4, 3, 7); }
template <> inline void __tile_dpbuud<4, 5, 0>() { _tile_dpbuud(4, 5, 0); }
template <> inline void __tile_dpbuud<4, 5, 1>() { _tile_dpbuud(4, 5, 1); }
template <> inline void __tile_dpbuud<4, 5, 2>() { _tile_dpbuud(4, 5, 2); }
template <> inline void __tile_dpbuud<4, 5, 3>() { _tile_dpbuud(4, 5, 3); }
template <> inline void __tile_dpbuud<4, 5, 6>() { _tile_dpbuud(4, 5, 6); }
template <> inline void __tile_dpbuud<4, 5, 7>() { _tile_dpbuud(4, 5, 7); }
template <> inline void __tile_dpbuud<4, 6, 0>() { _tile_dpbuud(4, 6, 0); }
template <> inline void __tile_dpbuud<4, 6, 1>() { _tile_dpbuud(4, 6, 1); }
template <> inline void __tile_dpbuud<4, 6, 2>() { _tile_dpbuud(4, 6, 2); }
template <> inline void __tile_dpbuud<4, 6, 3>() { _tile_dpbuud(4, 6, 3); }
template <> inline void __tile_dpbuud<4, 6, 5>() { _tile_dpbuud(4, 6, 5); }
template <> inline void __tile_dpbuud<4, 6, 7>() { _tile_dpbuud(4, 6, 7); }
template <> inline void __tile_dpbuud<4, 7, 0>() { _tile_dpbuud(4, 7, 0); }
template <> inline void __tile_dpbuud<4, 7, 1>() { _tile_dpbuud(4, 7, 1); }
template <> inline void __tile_dpbuud<4, 7, 2>() { _tile_dpbuud(4, 7, 2); }
template <> inline void __tile_dpbuud<4, 7, 3>() { _tile_dpbuud(4, 7, 3); }
template <> inline void __tile_dpbuud<4, 7, 5>() { _tile_dpbuud(4, 7, 5); }
template <> inline void __tile_dpbuud<4, 7, 6>() { _tile_dpbuud(4, 7, 6); }
template <> inline void __tile_dpbuud<5, 0, 1>() { _tile_dpbuud(5, 0, 1); }
template <> inline void __tile_dpbuud<5, 0, 2>() { _tile_dpbuud(5, 0, 2); }
template <> inline void __tile_dpbuud<5, 0, 3>() { _tile_dpbuud(5, 0, 3); }
template <> inline void __tile_dpbuud<5, 0, 4>() { _tile_dpbuud(5, 0, 4); }
template <> inline void __tile_dpbuud<5, 0, 6>() { _tile_dpbuud(5, 0, 6); }
template <> inline void __tile_dpbuud<5, 0, 7>() { _tile_dpbuud(5, 0, 7); }
template <> inline void __tile_dpbuud<5, 1, 0>() { _tile_dpbuud(5, 1, 0); }
template <> inline void __tile_dpbuud<5, 1, 2>() { _tile_dpbuud(5, 1, 2); }
template <> inline void __tile_dpbuud<5, 1, 3>() { _tile_dpbuud(5, 1, 3); }
template <> inline void __tile_dpbuud<5, 1, 4>() { _tile_dpbuud(5, 1, 4); }
template <> inline void __tile_dpbuud<5, 1, 6>() { _tile_dpbuud(5, 1, 6); }
template <> inline void __tile_dpbuud<5, 1, 7>() { _tile_dpbuud(5, 1, 7); }
template <> inline void __tile_dpbuud<5, 2, 0>() { _tile_dpbuud(5, 2, 0); }
template <> inline void __tile_dpbuud<5, 2, 1>() { _tile_dpbuud(5, 2, 1); }
template <> inline void __tile_dpbuud<5, 2, 3>() { _tile_dpbuud(5, 2, 3); }
template <> inline void __tile_dpbuud<5, 2, 4>() { _tile_dpbuud(5, 2, 4); }
template <> inline void __tile_dpbuud<5, 2, 6>() { _tile_dpbuud(5, 2, 6); }
template <> inline void __tile_dpbuud<5, 2, 7>() { _tile_dpbuud(5, 2, 7); }
template <> inline void __tile_dpbuud<5, 3, 0>() { _tile_dpbuud(5, 3, 0); }
template <> inline void __tile_dpbuud<5, 3, 1>() { _tile_dpbuud(5, 3, 1); }
template <> inline void __tile_dpbuud<5, 3, 2>() { _tile_dpbuud(5, 3, 2); }
template <> inline void __tile_dpbuud<5, 3, 4>() { _tile_dpbuud(5, 3, 4); }
template <> inline void __tile_dpbuud<5, 3, 6>() { _tile_dpbuud(5, 3, 6); }
template <> inline void __tile_dpbuud<5, 3, 7>() { _tile_dpbuud(5, 3, 7); }
template <> inline void __tile_dpbuud<5, 4, 0>() { _tile_dpbuud(5, 4, 0); }
template <> inline void __tile_dpbuud<5, 4, 1>() { _tile_dpbuud(5, 4, 1); }
template <> inline void __tile_dpbuud<5, 4, 2>() { _tile_dpbuud(5, 4, 2); }
template <> inline void __tile_dpbuud<5, 4, 3>() { _tile_dpbuud(5, 4, 3); }
template <> inline void __tile_dpbuud<5, 4, 6>() { _tile_dpbuud(5, 4, 6); }
template <> inline void __tile_dpbuud<5, 4, 7>() { _tile_dpbuud(5, 4, 7); }
template <> inline void __tile_dpbuud<5, 6, 0>() { _tile_dpbuud(5, 6, 0); }
template <> inline void __tile_dpbuud<5, 6, 1>() { _tile_dpbuud(5, 6, 1); }
template <> inline void __tile_dpbuud<5, 6, 2>() { _tile_dpbuud(5, 6, 2); }
template <> inline void __tile_dpbuud<5, 6, 3>() { _tile_dpbuud(5, 6, 3); }
template <> inline void __tile_dpbuud<5, 6, 4>() { _tile_dpbuud(5, 6, 4); }
template <> inline void __tile_dpbuud<5, 6, 7>() { _tile_dpbuud(5, 6, 7); }
template <> inline void __tile_dpbuud<5, 7, 0>() { _tile_dpbuud(5, 7, 0); }
template <> inline void __tile_dpbuud<5, 7, 1>() { _tile_dpbuud(5, 7, 1); }
template <> inline void __tile_dpbuud<5, 7, 2>() { _tile_dpbuud(5, 7, 2); }
template <> inline void __tile_dpbuud<5, 7, 3>() { _tile_dpbuud(5, 7, 3); }
template <> inline void __tile_dpbuud<5, 7, 4>() { _tile_dpbuud(5, 7, 4); }
template <> inline void __tile_dpbuud<5, 7, 6>() { _tile_dpbuud(5, 7, 6); }
template <> inline void __tile_dpbuud<6, 0, 1>() { _tile_dpbuud(6, 0, 1); }
template <> inline void __tile_dpbuud<6, 0, 2>() { _tile_dpbuud(6, 0, 2); }
template <> inline void __tile_dpbuud<6, 0, 3>() { _tile_dpbuud(6, 0, 3); }
template <> inline void __tile_dpbuud<6, 0, 4>() { _tile_dpbuud(6, 0, 4); }
template <> inline void __tile_dpbuud<6, 0, 5>() { _tile_dpbuud(6, 0, 5); }
template <> inline void __tile_dpbuud<6, 0, 7>() { _tile_dpbuud(6, 0, 7); }
template <> inline void __tile_dpbuud<6, 1, 0>() { _tile_dpbuud(6, 1, 0); }
template <> inline void __tile_dpbuud<6, 1, 2>() { _tile_dpbuud(6, 1, 2); }
template <> inline void __tile_dpbuud<6, 1, 3>() { _tile_dpbuud(6, 1, 3); }
template <> inline void __tile_dpbuud<6, 1, 4>() { _tile_dpbuud(6, 1, 4); }
template <> inline void __tile_dpbuud<6, 1, 5>() { _tile_dpbuud(6, 1, 5); }
template <> inline void __tile_dpbuud<6, 1, 7>() { _tile_dpbuud(6, 1, 7); }
template <> inline void __tile_dpbuud<6, 2, 0>() { _tile_dpbuud(6, 2, 0); }
template <> inline void __tile_dpbuud<6, 2, 1>() { _tile_dpbuud(6, 2, 1); }
template <> inline void __tile_dpbuud<6, 2, 3>() { _tile_dpbuud(6, 2, 3); }
template <> inline void __tile_dpbuud<6, 2, 4>() { _tile_dpbuud(6, 2, 4); }
template <> inline void __tile_dpbuud<6, 2, 5>() { _tile_dpbuud(6, 2, 5); }
template <> inline void __tile_dpbuud<6, 2, 7>() { _tile_dpbuud(6, 2, 7); }
template <> inline void __tile_dpbuud<6, 3, 0>() { _tile_dpbuud(6, 3, 0); }
template <> inline void __tile_dpbuud<6, 3, 1>() { _tile_dpbuud(6, 3, 1); }
template <> inline void __tile_dpbuud<6, 3, 2>() { _tile_dpbuud(6, 3, 2); }
template <> inline void __tile_dpbuud<6, 3, 4>() { _tile_dpbuud(6, 3, 4); }
template <> inline void __tile_dpbuud<6, 3, 5>() { _tile_dpbuud(6, 3, 5); }
template <> inline void __tile_dpbuud<6, 3, 7>() { _tile_dpbuud(6, 3, 7); }
template <> inline void __tile_dpbuud<6, 4, 0>() { _tile_dpbuud(6, 4, 0); }
template <> inline void __tile_dpbuud<6, 4, 1>() { _tile_dpbuud(6, 4, 1); }
template <> inline void __tile_dpbuud<6, 4, 2>() { _tile_dpbuud(6, 4, 2); }
template <> inline void __tile_dpbuud<6, 4, 3>() { _tile_dpbuud(6, 4, 3); }
template <> inline void __tile_dpbuud<6, 4, 5>() { _tile_dpbuud(6, 4, 5); }
template <> inline void __tile_dpbuud<6, 4, 7>() { _tile_dpbuud(6, 4, 7); }
template <> inline void __tile_dpbuud<6, 5, 0>() { _tile_dpbuud(6, 5, 0); }
template <> inline void __tile_dpbuud<6, 5, 1>() { _tile_dpbuud(6, 5, 1); }
template <> inline void __tile_dpbuud<6, 5, 2>() { _tile_dpbuud(6, 5, 2); }
template <> inline void __tile_dpbuud<6, 5, 3>() { _tile_dpbuud(6, 5, 3); }
template <> inline void __tile_dpbuud<6, 5, 4>() { _tile_dpbuud(6, 5, 4); }
template <> inline void __tile_dpbuud<6, 5, 7>() { _tile_dpbuud(6, 5, 7); }
template <> inline void __tile_dpbuud<6, 7, 0>() { _tile_dpbuud(6, 7, 0); }
template <> inline void __tile_dpbuud<6, 7, 1>() { _tile_dpbuud(6, 7, 1); }
template <> inline void __tile_dpbuud<6, 7, 2>() { _tile_dpbuud(6, 7, 2); }
template <> inline void __tile_dpbuud<6, 7, 3>() { _tile_dpbuud(6, 7, 3); }
template <> inline void __tile_dpbuud<6, 7, 4>() { _tile_dpbuud(6, 7, 4); }
template <> inline void __tile_dpbuud<6, 7, 5>() { _tile_dpbuud(6, 7, 5); }
template <> inline void __tile_dpbuud<7, 0, 1>() { _tile_dpbuud(7, 0, 1); }
template <> inline void __tile_dpbuud<7, 0, 2>() { _tile_dpbuud(7, 0, 2); }
template <> inline void __tile_dpbuud<7, 0, 3>() { _tile_dpbuud(7, 0, 3); }
template <> inline void __tile_dpbuud<7, 0, 4>() { _tile_dpbuud(7, 0, 4); }
template <> inline void __tile_dpbuud<7, 0, 5>() { _tile_dpbuud(7, 0, 5); }
template <> inline void __tile_dpbuud<7, 0, 6>() { _tile_dpbuud(7, 0, 6); }
template <> inline void __tile_dpbuud<7, 1, 0>() { _tile_dpbuud(7, 1, 0); }
template <> inline void __tile_dpbuud<7, 1, 2>() { _tile_dpbuud(7, 1, 2); }
template <> inline void __tile_dpbuud<7, 1, 3>() { _tile_dpbuud(7, 1, 3); }
template <> inline void __tile_dpbuud<7, 1, 4>() { _tile_dpbuud(7, 1, 4); }
template <> inline void __tile_dpbuud<7, 1, 5>() { _tile_dpbuud(7, 1, 5); }
template <> inline void __tile_dpbuud<7, 1, 6>() { _tile_dpbuud(7, 1, 6); }
template <> inline void __tile_dpbuud<7, 2, 0>() { _tile_dpbuud(7, 2, 0); }
template <> inline void __tile_dpbuud<7, 2, 1>() { _tile_dpbuud(7, 2, 1); }
template <> inline void __tile_dpbuud<7, 2, 3>() { _tile_dpbuud(7, 2, 3); }
template <> inline void __tile_dpbuud<7, 2, 4>() { _tile_dpbuud(7, 2, 4); }
template <> inline void __tile_dpbuud<7, 2, 5>() { _tile_dpbuud(7, 2, 5); }
template <> inline void __tile_dpbuud<7, 2, 6>() { _tile_dpbuud(7, 2, 6); }
template <> inline void __tile_dpbuud<7, 3, 0>() { _tile_dpbuud(7, 3, 0); }
template <> inline void __tile_dpbuud<7, 3, 1>() { _tile_dpbuud(7, 3, 1); }
template <> inline void __tile_dpbuud<7, 3, 2>() { _tile_dpbuud(7, 3, 2); }
template <> inline void __tile_dpbuud<7, 3, 4>() { _tile_dpbuud(7, 3, 4); }
template <> inline void __tile_dpbuud<7, 3, 5>() { _tile_dpbuud(7, 3, 5); }
template <> inline void __tile_dpbuud<7, 3, 6>() { _tile_dpbuud(7, 3, 6); }
template <> inline void __tile_dpbuud<7, 4, 0>() { _tile_dpbuud(7, 4, 0); }
template <> inline void __tile_dpbuud<7, 4, 1>() { _tile_dpbuud(7, 4, 1); }
template <> inline void __tile_dpbuud<7, 4, 2>() { _tile_dpbuud(7, 4, 2); }
template <> inline void __tile_dpbuud<7, 4, 3>() { _tile_dpbuud(7, 4, 3); }
template <> inline void __tile_dpbuud<7, 4, 5>() { _tile_dpbuud(7, 4, 5); }
template <> inline void __tile_dpbuud<7, 4, 6>() { _tile_dpbuud(7, 4, 6); }
template <> inline void __tile_dpbuud<7, 5, 0>() { _tile_dpbuud(7, 5, 0); }
template <> inline void __tile_dpbuud<7, 5, 1>() { _tile_dpbuud(7, 5, 1); }
template <> inline void __tile_dpbuud<7, 5, 2>() { _tile_dpbuud(7, 5, 2); }
template <> inline void __tile_dpbuud<7, 5, 3>() { _tile_dpbuud(7, 5, 3); }
template <> inline void __tile_dpbuud<7, 5, 4>() { _tile_dpbuud(7, 5, 4); }
template <> inline void __tile_dpbuud<7, 5, 6>() { _tile_dpbuud(7, 5, 6); }
template <> inline void __tile_dpbuud<7, 6, 0>() { _tile_dpbuud(7, 6, 0); }
template <> inline void __tile_dpbuud<7, 6, 1>() { _tile_dpbuud(7, 6, 1); }
template <> inline void __tile_dpbuud<7, 6, 2>() { _tile_dpbuud(7, 6, 2); }
template <> inline void __tile_dpbuud<7, 6, 3>() { _tile_dpbuud(7, 6, 3); }
template <> inline void __tile_dpbuud<7, 6, 4>() { _tile_dpbuud(7, 6, 4); }
template <> inline void __tile_dpbuud<7, 6, 5>() { _tile_dpbuud(7, 6, 5); }
