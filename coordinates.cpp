#include "coordinate.h"
#include <cmath>

coordinate::coordinate()
{
    x = 0;
    y = 0;
}

float coordinate::distance(coordinate point)
{
    float diffx = (x - point.x);
    float diffy = (y - point.y);

    float squarex = pow(diffx,2);
    float squarey = pow(diffy,2);

    float distance = sqrt(squarex + squarey);

    return distance;

}

coordinate::coordinate(int x, int y)
{
    this->x=x;
    this->y=y;
}
