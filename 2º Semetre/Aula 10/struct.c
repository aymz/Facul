#include <stdio.h>
#include <stdlib.h>
// defini��o da estrutura Data
struct Data {
     int dia, mes, ano;
     char nome[100];
};

main () {
      // declaracao de uma variavel da estrutura
      struct Data umaData;
      // leitura do campo dia
      printf ("Dia: ");
      scanf ("%d", &umaData.dia);
      // leitura do campo mes
      printf ("M�s: ");
      scanf ("%d", &umaData.mes);
      // leitura do campo ano
      printf ("Ano: ");
      scanf ("%d", &umaData.ano);
      // impress�o da tada informada
      printf ("\n*** Data Informada ***\n");
      printf ("%d / %d / %d\n\n", umaData.dia, umaData.mes, umaData.ano);
      printf("Digite um nome: ");
      scanf("%s", umaData.nome);
      printf("\nNome Digitado: %s\n\n",umaData.nome);
      system ("PAUSE");
}
