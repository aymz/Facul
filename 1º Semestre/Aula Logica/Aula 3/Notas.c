#include <stdio.h>
#include <locale.h>
main()
{
    setlocale(LC_ALL,"portuguese");
    float n1,n2,n3,m;
    printf("Digite tr�s notas\n");
    scanf("%f%f%f",&n1,&n2,&n3);
    m=(n1+n2+n3)/3;
        if(m>=6)
            printf("Voc� est� APROVADO, sua m�dia �: %.1f Parab�ns\n",m);
        else
            printf("Voc� est� REPROVADO, sua m�dia �: %.1f\n",m);
    system("pause");
}
