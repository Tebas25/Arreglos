#include <stdio.h>
#include <math.h>
#include "funciones.h"

float calcularDistancia(float x1, float y1, float x2, float y2){
    float d=sqrt(pow(x1+x2,2)+pow(y1+y2,2));
    return d;
}

float calcularPerimetro(float puntos[3][2]){
    float d1=calcularDistancia(puntos[0][0],puntos[0][1],puntos[1][0],puntos[1][1]);
    float d2=calcularDistancia(puntos[0][0],puntos[0][1],puntos[2][0],puntos[2][1]);
    float d3=calcularDistancia(puntos[1][0],puntos[1][1],puntos[2][0],puntos[2][1]);
    return d1+d2+d3;
}

float calcularArea(float puntos[3][2]){
    float d1=calcularDistancia(puntos[0][0],puntos[0][1],puntos[1][0],puntos[1][1]);
    float d2=calcularDistancia(puntos[0][0],puntos[0][1],puntos[2][0],puntos[2][1]);
    float d3=calcularDistancia(puntos[1][0],puntos[1][1],puntos[2][0],puntos[2][1]);
    float s=(d1+d2+d3)/2;
    float area= sqrt(s*(s-d1)*(s-d2)*(s-d3));
    return area;
}