/* Name: Jacob Bodera
 * Description: used to calculate the area of various polygons
*/


#include <iostream>
#include "math.h"

int main()
{

}

double sqArea (double x)
{
    return x * x;
}

double recArea (double x, double y)
{
    return x * y;
}

double triArea (double base, double height)
{
    return base * height / 2;
}

double parallelArea (double base, double height)
{
    return base * height;
}

double circArea (double radius)
{
    return radius * radius * M_PI;
}

