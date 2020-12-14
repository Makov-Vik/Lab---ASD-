#include <stdio.h>
#include <time.h>
#include <conio.h>

int main(){
	
	int n = 8;
	float mat [8][8];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			mat[i][j] = (100 +(rand()%1000))*0.01;
			printf_s("%.2f ", mat[i][j]);
		}
		printf_s("\n");
	}
}
