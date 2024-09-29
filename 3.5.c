#include <stdio.h>

int main(void) {
    int nprod;
    float przunitario, sconto;

    printf(" inserisci il numero di prodotti che hai acquistato: ");
    scanf("%d",&nprod);

    printf("inserisci il prezzo unitario dei prodotti: ");
    scanf("%f",&przunitario);
    przunitario=nprod*przunitario;
    printf("la tua spesa e' di: $%.2f", przunitario);

    if (przunitario > 50) {
        sconto = przunitario*20/100;
        przunitario = przunitario-sconto;
    }

    else if (przunitario > 10 ) {
        sconto = przunitario*10/100;
        przunitario = przunitario-sconto;
    }

    printf(" lo sconto e' di: $%.2f \n", sconto);
    printf(" il prezzo totale e' di: $%.2f \n", przunitario);
}

