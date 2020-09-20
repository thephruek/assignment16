#include<stdio.h>
int main() {
	printf("Enter Number : ");
	int x;
	scanf_s("%d", &x);
	printf("\n");
	for (int i = 1; i <= x; i++) {
		for (int j = 2; j <= x; j++) {
			printf(" ");
		}
		for (int j = x; j >= i; j--) {
			printf(" ");
		}
		for (int j = 1; j <= x; j++) {
			printf("*");
		}
		for (int j = 1; j <= x; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}