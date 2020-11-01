#include "Windows.h"                    // Windows API �̋@�\��`
#include "../include/omp_test.h"


// a[y_max][x_max]�̍s��ɂ��āAx�����̘a�����߂�sum�ɓ����
void add_array(long long* sum, int** a, int x_max, int y_max)
{
	int y;
    #pragma omp parallel for
	for (y = 0; y < y_max; y++) {
		sum[y] = 0;
	}

    #pragma omp parallel for
	for (y = 0; y < y_max; y++) {
		for (int x = 0; x < x_max; x++) {
			sum[y] += a[y][x];
		}
	}
}