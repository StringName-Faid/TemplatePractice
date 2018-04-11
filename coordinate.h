#ifndef COORDINATE_H_INCLUDED
#define COORDINATE_H_INCLUDED

class coordinate
{
public:
    int x;
    int y;

    coordinate();

    coordinate(int x, int y);

    float distance(coordinate point);
};
#endif // COORDINATE_H_INCLUDED
