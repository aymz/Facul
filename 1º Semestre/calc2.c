#include<stdio.h>
#include<locale.h>
main()
{
  setlocale(LC_ALL,"portuguese");
  system("title Calculadora");
  float a,b,c;
  char opt;
  printf("\t ===== Calculadora =====\n");
  printf("Escolha a operação\n");
  printf("[+] - Adição\n");
  printf("[-] - Subtração\n");
  printf("[*] - Multiplicação\n");
  printf("[/] - Divisão\n");
  printf("<<\n");
  scanf("%c",&opt);
  switch(opt){
   case +:
   					printf(" === Adição === \n");
   					printf("Digite dois números\n");
                    printf("Resultado: %.0f\n",c);
                    break;

   case -:   printf("\t === Subtração === \n");
				   printf("Digite dois números\n");
                   scanf("%f%f",&a,&b);
                   c=a-b;


                   printf("Resultado: %.0f\n",c);
                   break;

   case *: 	 printf("\t === Multiplicação === \n");
   				   printf("Digite dois números\n");
                   scanf("%f%f",&a,&b);
                   c=a*b;
                   printf("Resultado: %.0f\n",c);
                   break;

   case /:   printf("\t === Divisão === \n");
   				   printf("Digite dois números\n");
                   scanf("%f%f",&a,&b);
                   c=a/b;
                   if(b==0)
                    printf("Divisão por zero!\n");
                 else{

                     printf("Resultado: %.2f\n",c);
                    }
                   break;

   default: printf("Esta operação não existe!");
  }
system("pause");
}

