#include <iostream>
#include "shapeDrawer.h"

int main()
{
    using std::cout, std::cin, std::endl;

    char geo;
    cout << "r = Rectangle" << endl << "t = Triangle" << endl;
    cout << "d = Diamond" << endl << "x = Xmas-Tree" << endl;
    cout << "p = Parallelogram" << endl << "z = Trapezoid" << endl;

    cout << "Please enter shape: ";
    cin >> geo;

    drawShape(geo);

    cout << endl << endl << "Press Enter to end the application.";
    cin.ignore();
    cin.get();
    return 0;
}