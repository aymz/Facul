#include <stdio.h>
main()
{
    int tm,c,l;
    puts("--- Soma de Matriz Quadrada --- \n");
    printf("insira o tamanho da matriz : ");
    scanf("%d",&tm);
    int m[tm][tm];
    for(c=0;c<tm;c++)
    {
        for(l=0;l<tm;l++)
        {
            printf("Digite um numero para a Linha %d / Coluna %d =",c,l);
            scanf("%d",&m[c][l]);
        }
    }
    puts("");
    puts("--- Matriz Digitada --- \n");
    for(c=0;c<tm;c++)
    {
        for(l=0;l<tm;l++)
        {
          printf(" %d",m[c][l]);
        }
    puts("\n");
    }
    printf("o tamanho da matriz e : %d X %d \n\n",tm,tm);


system("pause");

}
