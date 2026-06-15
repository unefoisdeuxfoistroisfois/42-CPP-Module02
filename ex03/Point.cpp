#include "Point.hpp"

// A default constructor that initializes x and y to 0.
Point::Point(): x(0), y(0){
    std::cout << "Default constructor called" << std::endl;

}

Point::~Point(){
    std::cout << "Objet destroy" << std::endl;
}

// A copy constructor.
Point::Point(Point const &src){

    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

// A copy assignment operator overload.
Point &Point::operator=(Point const &rhs){

    std::cout << "Copy constructor called" << std::endl;
    (void)rhs;
    return (*this);
}