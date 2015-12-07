#include<stdio.h>
#include<locale.h>
main()
{
    setlocale(LC_ALL,"portuguese");
    float n1,n2,n3,m;
    printf("Informe três notas:\n");
    scanf("%f%f%f",&n1,&n2,&n3);
    m=(n1+n2+n3)/3;
    printf("Sua média é: %.1f\n",m);
    if (m>=7)
        printf("Você está APROVADO\n");
//           else if (4<=m&&m<=7)
//                printf("Será necessário fazer exame\n");
    else
        printf("Você está REPROVADO\n");
    system("pause");


}

