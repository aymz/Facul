#include<stdio.h>
main(){
int a,b;
printf("digite dois numero inteiros\n");
scanf ("%d%d",&a,&b);
b= a % 2;
if(a== 1)
printf("impar\n");
else if (a== 0)
printf("voce digitou zero");
else
printf("par\n");
system("pause");
}
