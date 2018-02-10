//
// Created by rubens on 10/02/18.
//

#include <stdio.h>
#include "CalculateArea.h"
#include "math.h"
#define EPSILON 0.000000001

CalculateArea::CalculateArea(int n) {
    CalculateArea::number = n;
}

int CalculateArea::squareArea() {
    return number * number;
}

int CalculateArea::rectangleArea() {
    return 2 * number;
}

float CalculateArea::trianguloArea(float base, float altura) {
    return base * altura / 2;
}

float CalculateArea::trapezioArea(float base, float altura, float baseMenorDoTrapezio) {
    return (base + baseMenorDoTrapezio) * altura / 2;
}

int factorial( int n )
{
    if( n == 0 )
        return 1;
    return n * factorial( n - 1 );
}

void foo () {
    // process any thing
}

double CalculateArea::contrast(double **P, int Ng) {
    int i, j, n;
    double sum = 0, bigsum = 0;

    for (n = 0; n < Ng; ++n) {
        for (i = 0; i < Ng; ++i)
            for (j = 0; j < Ng; ++j) {
                if ((i - j) == n || (j - i) == n)
                    sum += P[i][j];
            }
        bigsum += n * n * sum;
        sum = 0;
    }

    return bigsum;
}

double CalculateArea::entropy (double **P, int Ng) {
    int i, j;
    double entropy = 0;

    for (i = 0; i < Ng; ++i)
        for (j = 0; j < Ng; ++j)
            /*      entropy += P[i][j] * log10 (P[i][j] + EPSILON); */
            entropy += P[i][j] * log10 (P[i][j] + EPSILON)/log10(2.0) ;

    return -entropy;
}

