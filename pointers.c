/*Pointers*/
#include<stdio.h>
void increment(int *a) {
	*a = *a + 1;
}
int main() {
	printf("size of int is %zu.\n", sizeof(int));
	int i =10;
	int *p;
	p = &i;
	increment(p);
	printf("derefernceing i is %d.\n",*p);
	printf("Address to new int i of value %d is %p.\n", *p,p);
	printf("Actual location of i is %p.\n", &i);

	/*Null Poiner*/

	printf("Sizeof pointer P is %zu.\n", sizeof(p));
	printf("Sizeof pointer *P is %zu.\n which is deferencing the poiner to the original value.\n", sizeof(*p));
}
