#include "Windows.h"                    // Windows API の機能定義
#include "../include/omp_test.h"


// a[y_max][x_max]の行列について、x成分の和を求めてsumに入れる
void add_array(long long* sum, int** a, int x_max, int y_max)
{
	for (int y = 0; y < y_max; y++) {
		sum[y] = 0;
	}

	for (int x = 0; x < x_max; x++) {
		for (int y = 0; y < y_max; y++) {
			sum[y] += a[y][x];
		}
	}
}