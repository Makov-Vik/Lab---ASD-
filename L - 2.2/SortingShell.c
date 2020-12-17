#include <stdio.h>
#include <time.h>
#include <conio.h>

int main(){
	
	int n = 8;
	float mat [8][8];

	for (int i = 0; i < n; i++) { // Рандомное заполнение
		for (int j = 0; j < n; j++) {
			mat[i][j] = (100 +(rand()%1000))*0.01;
			printf_s("%.2f ", mat[i][j]);
		}
		printf_s("\n");
	}
	
	for (int i = 0; i < n; i++) { // Алгоритм Шелла
		int step = n / 2;
		for (int j = 0; j < n + 1; j++) {
			for (int count = 0; count < j ; count++) {
				int index = count;
				float value = mat[i][count];
				while ((index >= step) && (mat[i][index - step] > value)){
					mat[i][index] = mat[i][index - step];
					index -= step;
				}
				mat[i][index] = value;
			}
			if (step > 1)
				step /= 2;
		}
	}

	printf_s("\n");

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf_s("%.2f ", mat[i][j]);
		}
		printf_s("\n");
	}
}
