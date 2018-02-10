//
// Created by rubens on 10/02/18.
//

#ifndef NAATIVEAPP_CALCULATEAREA_H
#define NAATIVEAPP_CALCULATEAREA_H


class CalculateArea {
    int number;
public:
    CalculateArea(int x);
    int squareArea();
    int rectangleArea();
    float trianguloArea(float base, float altura);
    float trapezioArea(float base, float altura, float baseMenorDoTrapezio);
};


#endif //NAATIVEAPP_CALCULATEAREA_H
