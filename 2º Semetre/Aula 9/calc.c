#include<stdio.h>
#include<locale.h>
#include<E:\Executaveis Liberados\calc.h>
main()
{
  char opt;
  setlocale(LC_ALL,"portuguese");
  system("title Calculadora");
  float a,b,total;
  printf("\t ===== Calculadora =====\n");
  printf("Escolha a opera��o\n");
  printf("[+] - Adi��o\n");
  printf("[-] - Subtra��o\n");
  printf("[*] - Multiplica��o\n");
  printf("[/] - Divis�o\n");
  printf("<<\n");
  scanf("%c",&opt);
  switch(opt){
   case '+':
   					printf(" === Adi��o === \n");
   					printf("Digite dois n�meros\n");
   					scanf("%f%f",&a,&b);
   					total=soma(a,b);
                    printf("Resultado: %.0f\n",total);
                    break;

   case '-':   printf("\t === Subtra��o === \n");
				   printf("Digite dois n�meros\n");
                   scanf("%f%f",&a,&b);
                   total=subtracao(a,b);
                   printf("Resultado: %.0f\n",total);
                   break;
   case '*': 	 printf("\t === Multiplica��o === \n");
   				   printf("Digite dois n�meros\n");
                   scanf("%f%f",&a,&b);
                   total=multiplicacao(a,b);
                   printf("Resultado: %.0f\n",total);
                   break;
   case '/':   printf("\t === Divis�o === \n");
   				   printf("Digite dois n�meros\n");
                   scanf("%f%f",&a,&b);
                   total=divisao(a,b);
                   printf("Resultado: %.0f\n",total);
                   break;
   case '0':   printf("\t === Obrigado === \n");
                   break;
   default: printf("Esta opera��o n�o existe!\n");
  }
system("pause");
}
