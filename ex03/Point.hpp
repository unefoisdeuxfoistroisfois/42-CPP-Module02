#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"
#include <iostream>

class Point{
    private:
        Fixed const x;
        Fixed const y;

    public:
        Point();
        Point(float const x, float const y);
        Point(Point const &src);
        Point &operator=(Point const &rhs);
        ~Point();

        // getter
        Fixed const &getX() const;
        Fixed const &getY() const;
};
bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif