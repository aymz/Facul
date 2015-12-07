#include <stdio.h>
main()
{
    float a,b,c,d,e;
    printf("digite o comprimento do terreno \n");
    scanf ("%f",&a);
    printf("digite a largura do terreno \n");
    scanf ("%f",&b);
    printf("digite o preco do metro quadrado \n");
    scanf ("%f",&c);
    d=a*b;
    e=d*c;
    printf("O tamanho do terreno e: %2.f m2 e ",d);
    printf("O valor do terreno e: R$ %f \n",e);
system("pause");
}


