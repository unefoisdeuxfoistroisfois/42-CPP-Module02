#include "Point.hpp"

// A default constructor that initializes x and y to 0.
Point::Point(): x(0), y(0){ // les const doivent être init au moment de leurs création
    std::cout << "Default constructor called" << std::endl;
}

/*
A constructor that takes two constant floating-point numbers as parameters.
It initializes x and y with those parameters.
*/
Point::Point(float const x, float const y) : x(x), y(y) {
    std::cout << "Float constructor called" << std::endl;
}

Point::~Point(){
    std::cout << "Objet destroy" << std::endl;
}

// A copy constructor.
Point::Point(Point const &src) : x(src.x), y(src.y) { // this->x = src.x;
    std::cout << "Copy constructor called" << std::endl;
    // *this = src; je penses pas pourvoir l'utliser car ce sont des const
}

// A copy assignment operator overload.
Point &Point::operator=(Point const &rhs){
    std::cout << "Copy constructor called" << std::endl;
    (void)rhs;
    return (*this);
}

Fixed const &Point::getX() const { // & pour le type de la classe
    return (this->x);
}

Fixed const &Point::getY() const { // & pour le type de la classe
    return (this->y);
}