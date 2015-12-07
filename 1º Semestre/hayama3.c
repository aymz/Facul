#include<stdio.h>
main(){
float a,b,c,d;
printf("Digite Primeiro quantos carros ha no estacionamento:\n");
scanf("%f",&b);
printf("Digite quantas Motos ha no estacionamento:\n");
scanf("%f",&d);
a=b*4;
c=d*4;
printf("Existem: %.f Pneus de CARRO\n",a);
printf("Existem: %.f Pneus de MOTO\n",c);
system("pause");
}
