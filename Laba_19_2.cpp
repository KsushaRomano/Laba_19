using namespace std;

#include <iostream>
#include <stdio.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int M, N, i, j, c, max, min, l, k;
	l = 0;
	k = 0;
	cout << "Введите количество строк:  ";
	cin >> M;
	cout << "Введите количество столбцов: ";
	cin >> N;
	float** A = new float* [M];
	for (c = 0; c < M; c++)
		A[c] = new float[N];
	float** B = new float* [M];
	for (c = 0; c < M; c++)
		B[c] = new float[N];
	cout << "Введите элементы массива: " << endl;
	for (i = 0; i < M; i++) {
		for (j = 0; j < N; j++) {
			cin >> A[i][j];
		};
	};
	min = A[0][0];
	max = A[0][0];
	l = 0;
	k = 0;
	for (i = 0; i < M; i++) {
		for (j = 0; j < N; j++) {
			if (A[i][j] > max) {
				max = A[i][j];
				l = i;
			}
			else if (A[i][j] < min) {
				min = A[i][j];
				k = i;
			};
		};
	};
	if (l < k) {
		for (i = 0; i < l; i++) {
			for (j = 0; j < N; j++) {
				B[i][j] = A[i][j];
			};
		};
		for (i = l; i <= l; i++) {
			for (j = 0; j < N; j++) {
				B[i][j] = A[k][j];
			};
		};
		for (i = l + 1; i < k; i++) {
			for (j = 0; j < N; j++) {
				B[i][j] = A[i][j];
			};
		};
		for (i = k; i <= k; i++) {
			for (j = 0; j < N; j++) {
				B[i][j] = A[l][j];
			};
		};
		for (i = k + 1; i < M; i++) {
			for (j = 0; j < N; j++) {
				B[i][j] = A[i][j];
			};
		};
	}
	else if (k < l) {
		for (i = 0; i < k; i++) {
			for (j = 0; j < N; j++) {
				B[i][j] = A[i][j];
			};
		};
		for (i = k; i <= k; i++) {
			for (j = 0; j < N; j++) {
				B[i][j] = A[l][j];
			};
		};
		for (i = k + 1; i < l; i++) {
			for (j = 0; j < N; j++) {
				B[i][j] = A[i][j];
			};
		};
		for (i = l; i <= l; i++) {
			for (j = 0; j < N; j++) {
				B[i][j] = A[k][j];
			};
		};
		for (i = l + 1; i < M; i++) {
			for (j = 0; j < N; j++) {
				B[i][j] = A[i][j];
			};
		};
	};
	cout << "Измененный массив: " << endl;
	for (i = 0; i < M; i++) {
		for (j = 0; j < N; j++) {
			cout << B[i][j] << "\t";
		};
		cout << endl;
	};
}
