using namespace std;

#include <iostream>
#include <stdio.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int M, i, j, k, c, sum;
	cout << "Введите количество строк:  ";
	cin >> M;
	sum = 0;
	c = M;
	float** A = new float* [M];
	for (c = 0; c < M; c++)
		A[c] = new float[M];
	cout << "Введите элементы массива: " << endl;
	for (i = 0; i < M; i++) {
		for (j = 0; j < M; j++) {
			cin >> A[i][j];
		};
	};
	for (k = 1; k <= (M * 2) - 1; k++) {
		for (i = 0; i < M; i++) {
			for (j = 0; j < M; j++) {
				if (i == j + c - 1) {
					sum += A[i][j];
				};
			};
		};
		cout << "Сумма элементов " << k << " диагонали: " << sum << endl;
		sum = 0;
		c--;
	};
}