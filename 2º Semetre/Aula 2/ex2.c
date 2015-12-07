#include <stdio.h>
main()
{
    float u,c,l;
    printf("digite um numero\n");
    scanf ("%f",&u);
    for (l=1;l<=u;l++)
        {
            for (c=1;c<=u;c++)
                {
                    printf ("*");
                }
        printf("\n");
        }

system("pause");
}
