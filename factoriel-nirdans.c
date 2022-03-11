#include <stdio.h>
int main() {
    int nbr;
    unsigned long long resultat = 1;
    printf("Veuillez Svp, entrer un nombre positif: ");
    scanf("%d", &nbr);

    if (nbr < 0)
        {printf("Veuillez entrer un nombre positif !!");}
    else {
        for (int i = 1; i <= nbr; ++i) {
            resultat*= i;
        }
        printf("%d factoriel = %llu", nbr, resultat);
    }

    return 0;
}