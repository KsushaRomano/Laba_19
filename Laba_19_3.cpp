using namespace std;

#include <iostream>
#include <stdio.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int M, N, i, j, c;
	cout << "Введите количество строк:  ";
	cin >> M;
	cout << "Введите количество столбцов: ";
	cin >> N;
	if (((M % 10 == 2) || (M % 10 == 4) || (M % 10 == 6) || (M % 10 == 8) || (M % 10 == 0)) & ((N % 10 == 2) || (N % 10 == 4) || (N % 10 == 6) || (N % 10 == 8) || (N % 10 == 0))) {
		float** A = new float* [M];
			for (c = 0; c < M; c++)
				A[c] = new float[N];
			cout << "Введите элементы массива: " << endl;
			for (i = 0; i < M; i++) {
				for (j = 0; j < N; j++) {
					cin >> A[i][j];
				};
			};
		for (i = 0; i < (N / 2); i++)
		{
			for (j = 0; j < (M / 2); j++)
			{
				c = A[i][j];
				A[i][j] = A[(N / 2) + i][(M / 2) + j];
				A[(N / 2) + i][(M / 2) + j] = c;
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
	else {
		cout << "M и N должны быть четными";
	};
}