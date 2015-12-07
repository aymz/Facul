//Exercício 1
#include <stdio.h>
main (){
    int a;
    printf("Para descobrir se vc precisa votar\n");
    printf("insira a sua idade\n");
    scanf("%d",&a);
    if (a>=18&&a<=69)
        printf("voce e obrigado a votar ate os 69 anos\n");
    else
        printf("voce nao e obrigado a votar\n");
system("pause");
}
