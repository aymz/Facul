#include<stdio.h>
main(){
  int prod;
  printf("Digite o codigo produto\n");
  scanf("%d",&prod);
  switch(prod){
     case 110 : printf("Borracha\n");

     case 123 : printf("Caneta\n");

     case 23 :  printf("Caderno\n");

     case 455 : printf("Lapis\n");

     case 576 : printf("Regua\n");

     default: printf("Produto nao cadastrado!\n");
  }
  system("pause");
}
