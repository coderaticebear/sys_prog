/*Arrays*/
#include<stdio.h>

void testFunc(int x[12]) {
	printf("size of x inside func is %zu.\n", sizeof x);
	printf("size of int is %zu.\n", sizeof(int));
	printf("length of array x is %zu.\n", sizeof x / sizeof(int));
	/*This is because when passing the array the pointer to the array is actually passed to athe func arg*/
}

void main() {
	
	int i;
	float f[4];

	f[0] = 0.11;
	f[1] = 0.21;
	f[2] = 0.31;
	f[3] = 0.41;

	for(i = 0; i<4;i++) {
		printf("Values in array f are %f.\n",f[i]);
	}

	printf("sizeof float f is %zu.\n", sizeof(f));	
	int x[12];


	printf("size of x is %zu.\n", sizeof x);
	printf("Length of array is %zu.\n", sizeof x / sizeof(int));
	
	//testFunc(x);
	

	int a[10] = {0,11, [4] = 3,4,5,6,7,8};

	int j;
	for(j = 0; j<10; j++) {
		printf("Value of a in each index is %d.\n", a[j]);
	}
	
	/*Multi dimensional array*/


	int m[2][5] = {
		{0,1,2,3,4},
		{5,6,7,8,9}
	};

	int row, col;

	for(row = 0;row<2;row++) {
		for(col = 0;col < 5; col++) {
			printf("Values in MDArray m is %d. location in matrix - row = %d, col = %d,\n", m[row][col], row, col);
		}
	}

	/*create an identity matrix*/
	
	int im[3][3] = {[0][0] = 1, [1][1] = 1, [2][2] = 1};

	for(row = 0; row <3;row++) {
		for(col = 0;col<3;col++) {
			printf("%d", im[row][col]);
		}
		printf("\n");
	}
}
