// src.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <assert.h>
#include "../include/omp_test.h"


int main()
{
	const int NUM_X = 1000;
	const int NUM_Y = 1000;
	int* a[NUM_Y];
	for (int y = 0; y < NUM_Y; y++) {
		a[y] = (int*)malloc(NUM_X * sizeof(int));
		for (int x = 0; x < NUM_X; x++) {
			a[y][x] = rand();// 乱数で初期化
		}
	}

	// ライブラリで処理
	long long sum[NUM_Y];
	add_array(sum, a, NUM_X, NUM_Y);

	// 手元で計算して比較
	for (int y = 0; y < NUM_Y; y++) {
		long long s = 0;
		for (int x = 0; x < NUM_X; x++) {
			s += a[y][x];
		}

		assert(s==sum[y]);
	}

	// メモリ解放
	for (int y = 0; y < NUM_Y; y++) {
		free(a[y]);
	}
}
