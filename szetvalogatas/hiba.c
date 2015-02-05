#include <stdio.h>

int main(void) {
int a, b;
	do {
	a = b = 0;
	a = scanf("%d", &b);
	printf("a: %d, b: %d", a, b);
	if (a==0) {
		fflush(stdin);
	}
	}while (a==0);
return 0;
}