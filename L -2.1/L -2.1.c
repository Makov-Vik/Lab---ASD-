#include <stdio.h>

void main() {
	int mat[6][6] = { {6,  3,  5,  7,  4,  5},
			  {4,  2,  4,  6,  3,  4},
			  {4,  1,  4,  5,  2,  3}, 
		          {4,  0,  3,  4,  1,  3}, 
		          {3,  -1, 2,  4,  0,  1},
			  {2,  -2, 1,  3,  -1,  0} };
	
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			printf_s("%d  ", mat[i][j]);
		}
		printf_s("\n");
	}
	printf_s("\n");
	printf_s("Search 4 \n \n");
	printf_s("Program 1 \n");

	for (int j = 0; j < 6; j++) {
		int search = 4;  //поиск этого элемента
		int average = 0; //cредний элемент  
		int first = 0;
		int last = 5;
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

	printf_s("\nProgram 2 \n");
	for (int j = 0; j < 6; j++) {
		int search = 4;  //поиск этого элемента
		int average = 0; //cредний элемент  
		int first = 0;
		int last = 5;
		int peremena = 0;
		while (first < last) {
			average = first + (last - first) / 2;
			if (search >= mat[average][j]) {
				if (search == mat[average][j]) {
					peremena = 1;
					goto breakAll;
				}
				else
					last = average;
			}
			else
				first = average + 1;
		}
		
	breakAll: {
		if ( peremena == 0)
			printf_s("value is not found in column  %d \n", j + 1);
		else 
			printf_s("Value is found in %d %d \n", average +1 , j + 1);
		}		
	}
}
