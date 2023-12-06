#include <stdio.h>
/* Napisati program koji unosi 20 slova engleskog alfabeta (velikih ili malih, zanemarujuci ostale unesene znakove).
 Program ispisuje broj samoglasnika i broj suglasnika.
 Ilva Peric, 2219/RR
*/

int main() {
	char slova[100], suma=0;
	int i, j, brsam=0, brsug=0;
	printf("Unesi 20 slova engleskog alfabeta\n");
	for(i=0; i<40; i++) {
		scanf("%c", &slova[i]);
	}
	for(j=0; j<40; j++) {
		if((slova[j] >= 65 && slova[j] <= 90) || slova[j] >= 97 && slova[j] <= 122) {
			 if (slova[j] == 'A' ||  slova[j] == 'E' || slova[j] == 'I' || slova[j] == 'O' || slova[j] == 'U' ||
            slova[j] == 'a' || slova[j] == 'e' || slova[j] == 'i' || slova[j] == 'o' || slova[j] == 'u') {
            	brsam++;
            }
            else {
            	brsug++;
			}
		}
	} 
	printf("Broj samoglasnika je:\n %d\n", brsam);
	printf("Broj suglasnika je \n %d", brsug);
	printf("Zbroj 14. i 15. clana niza su: %d", slova[13] + slova[14] );
	
	return 0;
}
