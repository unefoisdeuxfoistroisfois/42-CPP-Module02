#include "Fixed.hpp"

Fixed::Fixed() /*: _value (0)*/ {
    std::cout << "Default constructor called" << std::endl;
    this->_value = 0;
}

//Prend toujours une reference (pour avoir acces a l'original) constante 
/*
& : à l'original sans le dupliquer en mémoire
const : protection de l'original
*this = src : copie les valeurs
*/
Fixed::Fixed(Fixed const &src){
    std::cout << "Copy constructor called" << std::endl;

    //*this = src;
    this->_value = src._value;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}


Fixed&  Fixed::operator=(Fixed const &rhs){ // right hand side recoit l'original sans copie
    std::cout << "Copy assignment operator called" << std::endl;

    if (this != &rhs){ // comparaison des adressse des 2 objet
        this->_value = rhs._value;
    }
    return (*this);
}

int    Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_value);
}

void    Fixed::setRawBits(int const raw){
    this->_value = raw;
}