#include <stdio.h>
#include "MyLIB.h"

#define MAXDOBAS 50.0
#define MINDOBAS 3.0
#define MAXTANSZAM 50

int main(void) {
int i, tanszam;
float dobas, dobasok[MAXTANSZAM];

	tanszam = getint("Resztvevo tanulok szama", 1, MAXTANSZAM);
	
	for(i = 0; i < tanszam; i++){
		printf("\nAdja meg az %d. dobas eredmenyet ", i+1);
		dobas = getfloat("", MINDOBAS, MAXDOBAS);
		dobasok[i] = dobas;
	}
	return (0);
}
