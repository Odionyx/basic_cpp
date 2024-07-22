#include <iostream>
#include <Windows.h>

#include "shape.h"
#include "triangle.h"
#include "quadrangle.h"
#include "right_angled_tri.h"
#include "isosceles_tri.h"
#include "equilateral_tri.h"
#include "parallelogram.h"
#include "rectangle.h"
#include "rhomb.h"
#include "square.h"

int main(int argc, char** argv) {
    setlocale(LC_ALL, "ru-RU");
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    Shape           sh;
    Triangle        tr(11,22,33,44,60,77);
    RightAngledTri  ri(22,33,55,45,45);
    IsoscelesTri    is(24,35,56,68);
    EquilateralTri  eq(23,60);
    Quadrangle      qu(11,22,33,44,55,66,77,88);
    Parallelogram   pa(13,24,81,99);
    Rhomb           rh(15,84,96);
    RectangleR      re(35,79);
    Square          sq(46);

    Shape* sarr[] {&sh, &tr, &ri, &is, &eq, &qu, &pa, &rh, &re, &sq};
    short int size = (sizeof(sarr)/ sizeof(sarr[0]));
    for (short int i = 0; i < size; ++i) sarr[i]->getInfo();

    return 0;
}
    // Thanks for the tutorial!
