#include<stdio.h>
#include<locale.h>
main()
{
    setlocale(LC_ALL,"portuguese");
    float n1,n2,n3,m;
    printf("Informe tr�s notas:\n");
    scanf("%f%f%f",&n1,&n2,&n3);
    m=(n1+n2+n3)/3;
    printf("Sua m�dia �: %.1f\n",m);
    if (m>=7)
        printf("Voc� est� APROVADO\n");
//           else if (4<=m&&m<=7)
//                printf("Ser� necess�rio fazer exame\n");
    else
        printf("Voc� est� REPROVADO\n");
    system("pause");


}

