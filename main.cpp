#include <iostream>
#include "shapeDrawer.h"



int main()
{
    using std::cout, std::cin, std::endl;

    char geo;
    cout << "r = Rectangle" << endl << "t = Triangle" << endl;
    cout << "d = Diamond" << endl << "x = Xmas-Tree" << endl;
    cout << "p = Parallelogram" << endl << "z = Trapez" << endl;

    cout << "Please enter shape: ";
    cin >> geo;

    drawShape(geo);

    return 0;
}