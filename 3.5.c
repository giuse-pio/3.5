#include <stdio.h>

int main(void) {
    int nprod;
    float przunitario, sconto;

    printf(" inserisci il numero di prodotti che hai acquistato: ");
    scanf("%d",&nprod);

    printf("inserisci l'importo totale dei prodotti: ");
    scanf("%f",&przunitario);
    przunitario=nprod*przunitario;

    if (przunitario > 50) {
        printf("la tua spesa e' di: $%.2f", przunitario);
        printf("hai ricevuto uno sconto del: 20%% \n");
        sconto = przunitario*20/100;
        printf(" lo sconto e' di: $%.2f \n", sconto );
        przunitario = przunitario-sconto;
        printf(" il prezzo totale e' di: $%.2f \n", przunitario);
    }

    else if (przunitario > 10) {
        printf("la tua spesa e' di: $%.2f", przunitario);
        printf(" hai ricevuto uno sconto del: 10%% \n");
        sconto = przunitario*10/100;
        printf(" lo sconto e' di: $%.2f \n", sconto );
        przunitario = przunitario-sconto;
        printf(" il prezzo totale e' di: $%.2f \n", przunitario);
    }
}

