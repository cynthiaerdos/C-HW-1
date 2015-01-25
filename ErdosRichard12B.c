#include <stdio.h>
#include "MyLIB.h"

#define MAXDOBAS 50.0
#define MINDOBAS 3.0
#define MAXTANSZAM 50

int main(void) {
int i, tanszam, darab, negyven, huszonot;
float dobas, atlag, osszdobas, dobasok[MAXTANSZAM];

	tanszam = getint("\nResztvevo tanulok szama", 1, MAXTANSZAM);
	
	for(i = 0; i < tanszam; i++){
		printf("\nAdja meg a(z) %d. dobas eredmenyet ", i+1);
		dobas = getfloat("", MINDOBAS, MAXDOBAS);
		dobasok[i] = dobas;
	}
	
	osszdobas = darab = osszdobas = negyven = huszonot = 0;
	for(i = 0; i < tanszam; i++){
		if(dobasok[i] > 25){
			osszdobas = osszdobas + dobasok[i];
			darab++;
			huszonot = 1;
		}
		
		if(dobasok[i] > 40){
			negyven = 1;
		}
	}
	
	if(huszonot == 1){
		atlag = osszdobas / darab;
		printf("\nA 25m feletti dobasok atlaga %fm!", atlag);
	}
	
	if(negyven == 1){
		printf("\n40m feletti dobas(ok):");
	}
	
	for(i = 0; i < tanszam; i++){
		if(dobasok[i] > 40){
			printf("\n - A(z) %d dobas: %fm", i+1, dobasok[i]);
		}
	}
	
	return (0);
}
