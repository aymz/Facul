#include <stdio.h>
main ()
{
    int a,c1,c2,c3,c4,c5;
    printf("informe o ano de seu nascimento : \n");
    scanf("%d",&a);
    c1=1958-a;
    c2=1962-a;
    c3=1970-a;
    c4=1994-a;
    c5=2002-a;
    printf("voce tinha %d anos na copa do mundo de 1958 \n",c1);
    printf("voce tinha %d anos na copa do mundo de 1962 \n",c2);
    printf("voce tinha %d anos na copa do mundo de 1970 \n",c3);
    printf("voce tinha %d anos na copa do mundo de 1994 \n",c4);
    printf("voce tinha %d anos na copa do mundo de 2002 \n",c5);
system ("pause");
}
