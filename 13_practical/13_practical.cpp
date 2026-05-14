#include <iostream>
#include "Circle.h"
#include "Square.h"
#include "CircleInSquare.h"

using namespace std;

int main() {

    CircleInSquare tmp;
    tmp.CircleINSquare(12);
    cout << tmp.generalLength() << endl;
    cout << tmp.areaFigure() << endl;
}
