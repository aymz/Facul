#include <stdio.h>
#include <stdlib.h>
// constante simbolica que representa o tamanho do vetor
#define TAM 10

// defini��o da fun��o inicializaVetor
void inicializaVetor(int v[]) {
        int i;
        srand((unsigned)time(NULL));
        for (i = 0; i < TAM; i++) {

             v[i] = rand()%100;
        }
}
// defini��o da fun��o imprimeVetor
void imprimeVetor(int v[]) {
        int i;
        for (i = 0; i < TAM; i++) {
             printf ("%d ", v[i]);
        }
}

int retornaVetor(int v[]){ //declarando uma fun��o inteira que retorna valor
        int i,va=0;
        for (i = 0; i < TAM; i++){
        if (v[i]>va) //se o valor da posi��o do vetor for maior que o valor auxiliar
        va=v[i]; // valor auxiliar recebe valor da posi�ao do vetor
        }
    return va;
}
main () {
       int vetor[TAM];
       // chama a funcao inicializaVetor
       inicializaVetor(vetor);
       // chama a fun��o imprimeVetor
       imprimeVetor(vetor);
       printf ("\n\n");
       printf("Maior valor : %d\n",retornaVetor(vetor));
       return 0;
}
