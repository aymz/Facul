#include <stdio.h>
#include <stdlib.h>
// especificação da constante simbolica para o valor de Pi
#define PI 3.1415
main () {
    // le o raio da circunferencia
    float raio;
    printf ("Raio: ");
    scanf ("%f", &raio);
    // calcula a area. Aqui usamos a constante simbolica especificada
    float area = PI * (raio * raio);
    // apresenta o valor da area
    printf ("Area = %.2f\n\n", area);
    system ("PAUSE");
}
