#include <stdio.h>
main ()
{
    int a;
    printf ("Descubra o seu status eleitoral\n");
    printf ("Digite sua idade para descobrir:\n");
    scanf ("&d",&a);
        if (a<=18)
        printf ("Seu voto e opcional\n");
            else if (a>=18)
                printf ("O seu voto e obrigatorio ate os 69 anos\n");
        else
            printf ("Sua situacao e regular, nao e obrigatorio votar\n");
system("pause");
}

