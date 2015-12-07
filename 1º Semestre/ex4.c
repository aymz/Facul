#include <stdio.h>
main ()
{
 float a,b,c;
 printf("Semana de descontos em compras na loja\n");
 printf("insira o valor da compra em R$\n");
 scanf("%f",&a);
 if (a<=50)
     {
     b=a*0.05;
     c=a-b;
     }
 else if(a>=50 && a<=100)
     {
     b=a*0.10;
     c=a-b;
     }
 else if(a>=100)
     {
     b=a*0.20;
     c=a-b;
     }
     printf("o valor com desconto e de R$: %.2f\n",c);
system ("pause");
}
