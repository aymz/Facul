#include <stdio.h>
main()
{
    int n,r;
    printf("Insira um n�mero inteiro\n");
    scanf("%d",&n);
    r=n%2;
    if(n%2==1) //Mod � Divis�o
        printf("Impar\n");
    else if(n==0)
            printf("ZERO\n");
            else
                    printf("Par\n");
    system("pause");
}
