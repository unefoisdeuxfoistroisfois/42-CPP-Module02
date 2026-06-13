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

//ex01
Fixed::Fixed(int const n){
    std::cout << "Int constructor called" << std::endl;
    // décale 1 << 8(_fractioinalBits); un octet = 8 bits 
    // 2^8 == 2 * 256
    //this->_value = n << _fractioinalBits;
    this->_value = n * 256;
}
Fixed::Fixed(float const f){
    std::cout << "Float constructor called" << std::endl;
    // 35.35f en float il faut *256
    // on arroundi car _value est un int
    // on aurait pu cast avec un int mais cela
    // aurait été pas precis c'est pour cela que on utilsie roundf
    this->_value = roundf(f * 256);
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

float Fixed::toFloat(void) const{
    float   res = (float)this->_value / 256; //pour trouvé le float originial

    return (res);
}

int Fixed::toInt(void) const{

    // décale de 8 bits vers la droite pour trouvé l'original
    int res = this->_value >> _fractioinalBits;

    return (res);
}

//const & bonne convention pour les p a lire sa le & le 
//compilateur va crée une copier masi pas opti
std::ostream &operator<<(std::ostream &cout, Fixed const &fixed){ 
    cout << fixed.toFloat();

    return (cout);
}

//std::ostream &operator<<(std::ostream &out, MaClasse const &obj)
//{
//    out << obj.getNom() << " " << obj.getAge();
//    return out;
//}

int    Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_value);
}

void    Fixed::setRawBits(int const raw){
    this->_value = raw;
}
