#include<stdio.h>
int main() {
	int x =5;
	printf("The number %d is %s.\n", x, x%2==0? "even" : "odd");
}
