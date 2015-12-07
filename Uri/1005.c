
#include <stdio.h>
main ()
{
    double a,b,c,tri,cir,tra,qua,ret;
    scanf("%lf%lf%lf",&a,&b,&c);
    tri=a*c/2;
    cir=(c*c)*3.14159;
    tra=(a+b)*c/2;
    qua=b*b;
    ret=a*b;
    printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n",tri,cir,tra,qua,ret);
system("pause");
}
