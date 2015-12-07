#include <stdio.h>
main()
{
    float a,v,r;
    printf("digite um numero\n");
    scanf ("%f",&a);
        for (v=0;v<=10;v++)
            {
                r=a*v;
                printf ("%.0f x %.0f = %.0f \n",a,v,r);
            }
system("pause");
}
