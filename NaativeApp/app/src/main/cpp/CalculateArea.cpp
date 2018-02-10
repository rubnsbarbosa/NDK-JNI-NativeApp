//
// Created by rubens on 10/02/18.
//

#include "CalculateArea.h"
#include "math.h"

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