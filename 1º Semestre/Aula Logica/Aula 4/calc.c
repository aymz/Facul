#include<stdio.h>
#include<locale.h>
main()
{
  setlocale(LC_ALL,"portuguese");
  system("title Calculadora");
  float a,b,c;
  int opt;
  printf("\t ===== Calculadora =====\n");
  printf("Escolha a opera��o\n");
  printf("[1] - Adi��o\n");
  printf("[2] - Subtra��o\n");
  printf("[3] - Multiplica��o\n");
  printf("[4] - Divis�o\n");
  printf("<<\n");  
  scanf("%d",&opt);
  switch(opt){
   case 1:   		
   					printf(" === Adi��o === \n");
   					printf("Digite dois n�meros\n");
                    scanf("%f%f",&a,&b);
                    c=a+b;
                    printf("Resultado: %.0f\n",c);
                    break;
   
   case 2:   printf("\t === Subtra��o === \n");
				   printf("Digite dois n�meros\n");
                   scanf("%f%f",&a,&b);
                   c=a-b;
                   printf("Resultado: %.0f\n",c);
                   break;

   case 3: 	 printf("\t === Multiplica��o === \n");
   				   printf("Digite dois n�meros\n");
                   scanf("%f%f",&a,&b);
                   c=a*b;
                   printf("Resultado: %.0f\n",c);
                   break;
                
   case 4:   printf("\t === Divis�o === \n");
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

