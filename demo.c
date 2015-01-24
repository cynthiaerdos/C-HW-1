#include <stdio.h>
#include "MyLIB.h"

int main(void) {
int i;

	printf("\n5 darab veletlen szam generalasa:");
	for (i=0; i<5; i++) {
		printf("\n- %d. szam: %.3f", i+1, veletlen(10.0, 20.0));
	}
	return (0);
}
