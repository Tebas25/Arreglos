#include <stdio.h>
#include "funciones.h"

int main (int argc, char *argv[]) {
    float puntos[3][2]={{0,0},{0,3},{3,0}};

    float perimetro=calcularPerimetro(puntos);
    float area=calcularArea(puntos);
    printf("El perímetro del triángulo es: %.2f\n",perimetro);
    printf("El Área del triangulo es: %.2f\n",area);

    return 0;
}