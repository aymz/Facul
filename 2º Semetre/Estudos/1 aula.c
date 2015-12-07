main ()
{
    float a,b,c;
    printf ("digite 3 numeros reais\n");
    scanf ("%f%f%f",&a,&b,&c);
    if (a<b && a<c)
        printf ("o menor numero e: %.0f \n",a);
    else if (b<a && b<c)
        printf ("o menor numero e: %.0f \n",b);
    if (c<a && c<b)
    {
        printf ("o menor numero e: %.0f \n",c);
    }
system("pause");
}
