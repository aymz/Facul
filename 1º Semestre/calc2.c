#include<stdio.h>
#include<locale.h>
main()
{
  setlocale(LC_ALL,"portuguese");
  system("title Calculadora");
  float a,b,c;
  char opt;
  printf("\t ===== Calculadora =====\n");
  printf("Escolha a opera��o\n");
  printf("[+] - Adi��o\n");
  printf("[-] - Subtra��o\n");
  printf("[*] - Multiplica��o\n");
  printf("[/] - Divis�o\n");
  printf("<<\n");
  scanf("%c",&opt);
  switch(opt){
   case +:
   					printf(" === Adi��o === \n");
   					printf("Digite dois n�meros\n");
                    printf("Resultado: %.0f\n",c);
                    break;

   case -:   printf("\t === Subtra��o === \n");
				   printf("Digite dois n�meros\n");
                   scanf("%f%f",&a,&b);
                   c=a-b;


                   printf("Resultado: %.0f\n",c);
                   break;

   case *: 	 printf("\t === Multiplica��o === \n");
   				   printf("Digite dois n�meros\n");
                   scanf("%f%f",&a,&b);
                   c=a*b;
                   printf("Resultado: %.0f\n",c);
                   break;

   case /:   printf("\t === Divis�o === \n");
   				   printf("Digite dois n�meros\n");
                   scanf("%f%f",&a,&b);
                   c=a/b;
                   if(b==0)
                    printf("Divis�o por zero!\n");
                 else{

                     printf("Resultado: %.2f\n",c);
                    }
                   break;

   default: printf("Esta opera��o n�o existe!");
  }
system("pause");
}

