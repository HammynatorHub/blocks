#include <iostream>
#include <math.h>
#include "shapes/rectangle.h"
#include "shapes/triangle.h"
#include "shapes/diamond.h"
#include "shapes/tree.h"
#include "shapes/parallelogram.h"
#include "shapes/trapezoid.h"

void drawShape(char geo) {
    int x;
    int y;

    std::cout << std::endl;

    switch(geo) {
        case 'r':
            std::cout << "width: ";
            std::cin >> x;
            std::cout << std::endl << "height: ";
            std::cin >> y;
            drawRectangle(x, y);
            break;

        case 't':
            std::cout << std::endl << "height: ";
            std::cin >> y;
            drawTriangle(y);
            break;

        case 'd':
            std::cout << std::endl << "size: ";
            std::cin >> x;
            drawDiamond(x);
            break;

        case 'x':
            std::cout << std::endl << "size: ";
            std::cin >> x;
            drawTree(x);
            break;

        case 'p':
            std::cout << "width: ";
            std::cin >> x;
            std::cout << std::endl << "height: ";
            std::cin >> y;
            drawParallelogram(x, y);
            break;

        case 'z':
            std::cout << std::endl << "size: ";
            std::cin >> x;
            drawTrapezoid(x);
            break;

        default:
            std::cout << "Please only enter one of the displayed options!";
        }
}