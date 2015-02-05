#include <stdio.h>
#include "MyLIB.h"

#define MAXDARAB 20
#define MINVALUE 30
#define MAXVALUE 80


int main(void) {
int n, a[MAXDARAB];
int m, b[MAXDARAB];
int o, c[MAXDARAB];
int i, d, szamlalo;

	n = rndint(1, MAXDARAB);
	rndintarrunq(MINVALUE, MAXVALUE, a, n);

	printf("\nAz 'a' tomb darabszama: %d", n);
	printf("\nAz 'a' tomb elemei: ");
	for(i = 0; i < n; i++) {
		printf("%s%d",((i) ? (", "):("")), a[i]);
	}

	m = rndint(1, MAXDARAB);
	rndintarrunq(MINVALUE, MAXVALUE, b, m);

	printf("\n\nA 'b' tomb darabszama: %d", m);
	printf("\nA 'b' tomb elemei: ");
	for(i = 0; i < m; i++) {
		printf("%s%d",((i) ? (", "):("")), b[i]);
	}
	
	o = 0;
	
	for (i = 0; i < n; i++){
		for(d = 0; d < m; d++){
			if(a[i]==b[d]){
				c[o++] = a[i];
			}
		}
	}
	
	if(o!=0){
		printf("\n\nEredmenytomb elemeinek szama: %d", o);
		printf("\nEredmenytomb elemei: ");
		for(i = 0; i < o; i++) {
			printf("%s%d",((i) ? (", "):("")), c[i]);
		}
	} else {
		printf("\n\nA ket tombnek nincs metszete!");
	}
	return 0;
}