using namespace std;

#include <iostream>
#include <stdio.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int M, N, i, j, c, max, min, l, k, p;
	l = 0;
	k = 0;
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
	for (i = 0; i < M; i++) {
		max = A[i][0];
		min = A[i][0];
		for (j = 0; j < N; j++) {
			if (A[i][j] < min) {
				min = A[i][j];
				l = j;
			}
			else if (A[i][j] > max) {
				max = A[i][j];
				k = j;
			};
		};
		A[i][l] = max;
		A[i][k] = min;
	};
	cout << "Измененный массив: " << endl;
	for (i = 0; i < M; i++) {
		for (j = 0; j < N; j++) {
			cout << A[i][j] << " ";
		};
		cout << endl;
	};
}