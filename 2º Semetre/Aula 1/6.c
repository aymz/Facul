#include <stdio.h>
main()
{
    int a,b,c,d,e,f,g;
    printf("insira o primeiro numero: \n");
    scanf("%i",&a);
    printf("insira o segundo numero: \n");
    scanf("%i",&b);
    printf("insira o terceiro numero: \n");
    scanf("%i",&c);
    printf("insira o quarto numero: \n");
    scanf("%i",&d);
    printf("insira o quinto numero: \n");
    scanf("%i",&e);
    printf("insira o sexto numero: \n");
    scanf("%i",&f);
    scanf("%i",&g);
      g= a%2 && b%2 && c%2 && d%2 && e%2 && f%2;
      if(a==1 && b==1 && c==1 && d==1 && e==1 && f==1)
      printf ("nao calcule o numero\n");
    system("pause");

}

