#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#define APOSTA 5
#define NUMEROS 60
#define JOGOS 10

main (){
    int i, j, x, numSorteio, numAposta;
    int sorteio[JOGOS][APOSTA];
    int num[NUMEROS];
    int vet[APOSTA];
    srand((unsigned)time(NULL)); //gerar num aleatorios
    printf("DIGITE 6 NUMEROS ENTRE 1 E 60:\n");
    for (x = 0 ; x < APOSTA ; x++)
        {
        scanf("%d",&vet[x]);
        // se os numeros forem diferentes entre 1 e 60
        if (vet[x] > 60 || vet[x] < 1)
            {
            printf("\nNumero Invalido!\n Somente de 1 a 60\n");
            scanf("%d",& vet[x]);
            numAposta = vet[x];
            }
        }

    // LAÇO QUE GERA O SORTEIO DOS NÚMEROS DA MEGA SENA
    printf("\nResultado: \n");
    for (x = 0 ; x <= APOSTA ; x++)
    {
        num[x] = rand() % NUMEROS;
        if (num[x] == 0)
            {
            num[x] = rand() % NUMEROS;
            }
        else
            {
            printf("%d ", num[x]);
            numSorteio = num[x];
            }
    }
    printf("\n");
    if ( numSorteio == numAposta){ printf("\nPARABENS!!! VOCE E O NOVO MILIONARIO\n"); }
    else { printf("\nINFELIZMENTE VOCE NAO FOI O GANHADOR DA MEGA SENA!\n"); }
    //fim do programa
    system ("pause");
}

//william dy ayman r.a 3015106786
//gregory clemente r.a 3015107046
//felipe fozzatti r.a 3015108531
//lucas longui r.a 3015107251
//leandro sousa r.a 3015101133
//jhonatas angelo r.a 3015105859
