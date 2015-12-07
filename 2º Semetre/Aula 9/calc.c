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
  printf("Escolha a operação\n");
  printf("[+] - Adição\n");
  printf("[-] - Subtração\n");
  printf("[*] - Multiplicação\n");
  printf("[/] - Divisão\n");
  printf("<<\n");
  scanf("%c",&opt);
  switch(opt){
   case '+':
   					printf(" === Adição === \n");
   					printf("Digite dois números\n");
   					scanf("%f%f",&a,&b);
   					total=soma(a,b);
                    printf("Resultado: %.0f\n",total);
                    break;

   case '-':   printf("\t === Subtração === \n");
				   printf("Digite dois números\n");
                   scanf("%f%f",&a,&b);
                   total=subtracao(a,b);
                   printf("Resultado: %.0f\n",total);
                   break;
   case '*': 	 printf("\t === Multiplicação === \n");
   				   printf("Digite dois números\n");
                   scanf("%f%f",&a,&b);
                   total=multiplicacao(a,b);
                   printf("Resultado: %.0f\n",total);
                   break;
   case '/':   printf("\t === Divisão === \n");
   				   printf("Digite dois números\n");
                   scanf("%f%f",&a,&b);
                   total=divisao(a,b);
                   printf("Resultado: %.0f\n",total);
                   break;
   case '0':   printf("\t === Obrigado === \n");
                   break;
   default: printf("Esta operação não existe!\n");
  }
system("pause");
}
