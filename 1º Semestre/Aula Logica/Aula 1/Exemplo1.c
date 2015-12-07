#include <stdio.h>
main ()  //função principal
{
        float a,b,c; // valorreal váriaveis
        printf("Informe dois numeros\n"); //escreva o valor
        scanf("%f%f",&a,&b); //os dois "%f%f" é para especificar a váriavel que ele está lendo, no caso float // "&" quer dizer endereço fisico de memória //
        c=a+b; //soma das váriaveis 
        printf("Resultado : %f\n",c); // ..%f\n",c) especifica o resultado da váriavel C //
		system("pause"); // dididi
}

