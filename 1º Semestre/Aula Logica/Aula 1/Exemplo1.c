#include <stdio.h>
main ()  //fun��o principal
{
        float a,b,c; // valorreal v�riaveis
        printf("Informe dois numeros\n"); //escreva o valor
        scanf("%f%f",&a,&b); //os dois "%f%f" � para especificar a v�riavel que ele est� lendo, no caso float // "&" quer dizer endere�o fisico de mem�ria //
        c=a+b; //soma das v�riaveis 
        printf("Resultado : %f\n",c); // ..%f\n",c) especifica o resultado da v�riavel C //
		system("pause"); // dididi
}

