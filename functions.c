
#include<stdio.h>
int plus_one(int n) {
	return n+1;
}
int main() {
	int i = 10, j;
	j = plus_one(i);
	printf("j = %d.\n", j);
}
