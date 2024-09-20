#include<stdio.h>
int main() {
	int i = 10;
	int j = 5 + ++i + i++;
	printf("J = %d.\n", j);
}
