#include <stdio.h>
/*Napisati program koji za uneseni prirodni broj ispisuje poruku radi li se o složenom broju, te ako se radi o složenom broju
 (broju koji nije prost) i koji je zbroj svih njegovih djelitelja (npr. djelitelji broja 18 su 1, 2, 3, 6, 9, i 18 pa je njihov zbroj 39)
Ilva Peric 2219/RR*/
int main() {
	int broj;
	int i;
	int prost = 1;
	int j;
	int suma = 0;
	printf("Unesi neki broj!");
	scanf("%d", &broj);
	for(i=1; i<=broj; i++) {
		if(broj % i == 0) {
			prost = 0;
	}
	else {
		prost = 1;
	}
	}
	if(prost) {
		printf("Broj je prost!\n");
	}
	else if(prost==0) {
		printf("Broj je slozen!\n");
	}
	for(j=1; j<=broj; j++) {
		if(broj % j == 0) {
			suma = suma + j;
			printf("%d\n", j);
		
	}
}
	printf("Suma broja je: %d", suma);
	
	
	return 0;
}
