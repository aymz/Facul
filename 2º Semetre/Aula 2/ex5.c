#include <stdio.h>
main()
{
    float u,c,l;
    printf("digite um numero\n");
    scanf ("%f",&u);
    for (l=1;l<=u;l++)
    {

        if ((u-1)>=l)
    {
        for (c=u;c<=u;c++)
        {
        printf(" ");
        }
    }
                for (c=1;c<=l;c++)
                {
                    printf ("*");
                }
        printf("\n");
        }
system("pause");
}
