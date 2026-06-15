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
        Point(Point const &src);
        Point &operator=(Point const &rhs);
        ~Point();
};

#endif