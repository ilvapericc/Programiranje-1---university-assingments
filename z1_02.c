#include <stdio.h>
/*Napisati program koji unosi znakove sve dok se ne unese znak * i ispisuje koliko je od unesenih znakova samoglasnika, ne vodeci raèuna
 radi li se o malim ili velikim slovima.
 Ilva Peric, 2219/RR */


int main() {
	char znak[32];
	int i=-1, j;
	int brojac=0;
	printf("Unesi znakove, za kraj * ");
	do {
		i++;
		scanf("%c", znak[i]);
	}while(znak[i] != '*');
	for(j=0; j<=znak[i]; j++) {
     if(znak[j] == 'A' || znak[j] == 'E' || znak[j] == 'I' || znak[j] == 'O' || znak[j] == 'U' || 
      znak[j] == 'a' || znak[j] == 'e' || znak[j] == 'i' || znak[j] == 'o' || znak[j] == 'u') 
	  {
		  brojac++;
		}
	}
	printf("Samoglasnika je %d", brojac);

	return 0;
}
