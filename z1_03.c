#include <stdio.h>
/*Napisati program koji unosi realne brojeve sve dok se dva puta zaredom ne unesu brojevi
sa istim cijelim dijelom (npr. 3.76 i 3.421). Program ispisuje prosjek negativnih unesenih
brojeva, a ako nije unesen niti jedan negativan broj ispisuje poruku o tome.
Ilva Peric, 2219/RR */
int main() {
    float brojevi[16];
    int i = -1, j, brneg = 0, provjera = 1, SviPozitivni=1;
    float ars = 0, suma = 0;
    

    printf("Unesite realne brojeve:\n");

    do {
        i++;
        scanf("%f", &brojevi[i]);
    } while ((int)brojevi[i - 1] != (int)brojevi[i]);

     for (j = 0; j < i; j++) {
        if (brojevi[j] < 0) {
            brneg++;
            suma += brojevi[j];
            ars = suma / brneg;
            provjera = 1;
            SviPozitivni = 0; 
        }
    }

    if (provjera == 1) {
        printf("Aritmeticka sredina negativnih brojeva: %.2f\n", ars);
    } else {
        printf("Nije unesen niti jedan negativan broj.\n");
    }

    if (SviPozitivni) {
        printf("Svi uneseni brojevi su pozitivni.\n");
    } else {
        printf("Nisu svi uneseni brojevi pozitivni.\n");
    }

    return 0;
}

