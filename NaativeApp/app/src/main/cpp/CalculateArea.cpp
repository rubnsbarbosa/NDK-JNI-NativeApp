//
// Created by rubens on 10/02/18.
//

#include "CalculateArea.h"

CalculateArea::CalculateArea(int n) {
    CalculateArea::number = n;
}

int CalculateArea::squareArea() {
    return number * number;
}

int CalculateArea::rectangleArea() {
    return 2 * number;
}
