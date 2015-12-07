#include<stdio.h>
main(){
  int prod;
  while(1){
        system("cls");
        printf("Digite o codigo produto\n");
  scanf("%d",&prod);
  switch(prod){
     case 110:
        printf("Borracha\n");
        break;
     case 123:
        printf("Caneta\n");
        break;
     case 23:
        printf("Caderno\n");
        break;
     case 455:
        printf("Lapis\n");
        break;
     case 576:
        printf("Regua\n");
        break;
     case -1: exit(0);
     default: printf("Produto nao cadastrado!\n");
  }
  system("pause");
  }

}
