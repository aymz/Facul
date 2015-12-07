#include <stdio.h>
#include <stdlib.h>

int main (){

    int idade, peso, altura, cont, qtd, somaidade, somaaltura, qtdpeso, mediaidade, mediaaltura, porcentagem;

    cont=1;

    while (cont <=11){

    printf ("Qual sua idade?\n");
    scanf ("%d", &idade);

    printf ("Qual seu peso? \n");
    scanf ("%d", &peso);

    printf ("Qual sua altura? \n");
    scanf ("%d", &altura);

    if (idade < 18){
              qtd=qtd+1;
              }

         somaidade=somaidade+idade;
         somaaltura=somaaltura+altura;

         if (peso>80){
         qtdpeso=qtdpeso+1;
         }

         cont++;

         }

         mediaidade=somaidade/11;
         mediaaltura=mediaaltura/11;
         porcentagem=qtdpeso*100/11;

         printf ("Qtd");
         scanf ("%d", &qtd);

         printf ("Media idade:\n");
         scanf ("%d", &mediaidade);

         printf ("Media altura:\n");
         scanf ("%d", &mediaaltura);

         printf ("Porcentagem\n");
         scanf ("%d", &porcentagem);

         system("pause");
         }
