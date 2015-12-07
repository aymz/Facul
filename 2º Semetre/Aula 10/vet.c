#include <stdio.h>
#include <stdlib.h>
// constante simbolica que representa o tamanho do vetor
#define TAM 10

// definição da função inicializaVetor
void inicializaVetor(int v[]) {
        int i;
        srand((unsigned)time(NULL));
        for (i = 0; i < TAM; i++) {

             v[i] = rand()%100;
        }
}
// definição da função imprimeVetor
void imprimeVetor(int v[]) {
        int i;
        for (i = 0; i < TAM; i++) {
             printf ("%d ", v[i]);
        }
}

int retornaVetor(int v[]){ //declarando uma função inteira que retorna valor
        int i,va=0;
        for (i = 0; i < TAM; i++){
        if (v[i]>va) //se o valor da posição do vetor for maior que o valor auxiliar
        va=v[i]; // valor auxiliar recebe valor da posiçao do vetor
        }
    return va;
}
main () {
       int vetor[TAM];
       // chama a funcao inicializaVetor
       inicializaVetor(vetor);
       // chama a função imprimeVetor
       imprimeVetor(vetor);
       printf ("\n\n");
       printf("Maior valor : %d\n",retornaVetor(vetor));
       return 0;
}
