#include "stdafx.h"

#define n 10

int main() {


	int a[n];
	int i, j;
	int buf;
	int min;


	printf("Enter elements \n");
	for (i = 0; i<n; i++) {
		scanf("%d", &a[i]);
	}

	for (i = 0; i < n - 1; i++) {

		min = i;
		for (j = i + 1; j < n; j++)
			if (a[j] < a[min])
				min = j;


		buf = a[i];
		a[i] = a[min];
		a[min] = buf;
	}


	for (i = 0; i<n; i++)
		printf("%d ", a[i]);

	printf("\n");

	return 0;
}