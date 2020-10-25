#pragma once

// C++ でCのライブラリを使うときのおまじない
#ifdef __cplusplus
extern "C" {
#endif

	// a[y_max][x_max]の行列について、x成分の和を求めてsumに入れる
	void add_array(long long* sum, int **a, int x_max, int y_max);



// C++ でCのライブラリを使うときのおまじない
#ifdef __cplusplus
} // extern "C"
#endif