#include <stdio.h>

void main() {
	int mat[5][5] = { {7, 3, 6, 8, 4},{6, 2, 5, 7, 3},{5, 1, 4, 6, 2}, {4, 0, 3, 5, 1}, {3, -1, 2, 4, 0} };
	
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf_s("%d ", mat[i][j]);
		}
		printf_s("\n");
	}
	printf_s("\n");
	printf_s("Search 4 \n");
	printf_s("\n");
	for (int j = 0; j < 5; j++) {
		int search = 4;  //поиск этого элемента
		int average = 0; //cредний элемент  
		int first = 0;
		int last = 4;
		while (first < last) {
			average = first + (last - first) / 2;
			if (search >= mat[average][j]) {
				last = average;
			}
			else
				first = average + 1;
		}
		if (search == mat[last][j]) {
			printf_s("Value is found in %d %d \n", last+1, j+1);
		}
		else
			printf_s("value is not found in column  %d \n", j+1);

	}
}
