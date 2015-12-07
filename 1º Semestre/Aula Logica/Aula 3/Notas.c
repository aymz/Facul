#include <stdio.h>
#include <locale.h>
main()
{
    setlocale(LC_ALL,"portuguese");
    float n1,n2,n3,m;
    printf("Digite três notas\n");
    scanf("%f%f%f",&n1,&n2,&n3);
    m=(n1+n2+n3)/3;
        if(m>=6)
            printf("Você está APROVADO, sua média é: %.1f Parabéns\n",m);
        else
            printf("Você está REPROVADO, sua média é: %.1f\n",m);
    system("pause");
}
