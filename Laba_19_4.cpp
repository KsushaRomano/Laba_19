using namespace std;

#include <iostream>
#include <stdio.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int M, N, i, j, k, c;
	cout << "Введите количество строк:  ";
	cin >> M;
	cout << "Введите количество столбцов: ";
	cin >> N;
	float** A = new float* [M];
	for (c = 0; c < M; c++)
		A[c] = new float[N];
	cout << "Введите элементы массива: " << endl;
	for (i = 0; i < M; i++) {
		for (j = 0; j < N; j++) {
			cin >> A[i][j];
		};
	};
	for (i = 0; i < N; i++) {
		for (j = 1; j < N; j++) {
			if (A[j - 1][0] > A[j][0]) {
				for (k = 0; k < M; k++) {
					c = A[j - 1][k];
					A[j - 1][k] = A[j][k];
					A[j][k] = c;
				};
			};
		};
	};
	cout << "Измененный массив: " << endl;
	for (i = 0; i < M; i++) {
		for (j = 0; j < N; j++) {
			cout << A[i][j] << "\t";
		};
		cout << endl;
	};
}