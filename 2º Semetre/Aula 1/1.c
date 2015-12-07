#include<stdio.h>
main(){
       float a,b,c;
       printf("digite tres numero\n");
       scanf("%f%f%f",&a,&b,&c);
       if (a<b && a<c)
       printf ("mostre a:%f\n",a);
       else  if (b<a && b<c)
       printf ("mostre b:%f\n",b);
        else if (c<a && c<b)
        printf("mostre c:%f\n",c);
        system("pause");
        }
       
       
