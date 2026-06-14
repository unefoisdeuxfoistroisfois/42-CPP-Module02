#include "Fixed.hpp"
#include <iostream>

int main( void ) {
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout << b << std::endl;

    std::cout << Fixed::max( a, b ) << std::endl;

    return 0;

//    // Test constructeurs
//    Fixed a;
//    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
//
//    // Test operator<<
//    std::cout << "--- Test operator<< ---" << std::endl;
//    std::cout << "a = " << a << std::endl;
//    std::cout << "b = " << b << std::endl;
//
//    // Test pre-increment
//    std::cout << "--- Test pre-increment ---" << std::endl;
//    std::cout << "++a = " << ++a << std::endl;
//    std::cout << "a   = " << a << std::endl;
//
//    // Test post-increment
//    std::cout << "--- Test post-increment ---" << std::endl;
//    std::cout << "a++ = " << a++ << std::endl;
//    std::cout << "a   = " << a << std::endl;
//
//    // Test pre-decrement
//    std::cout << "--- Test pre-decrement ---" << std::endl;
//    std::cout << "--a = " << --a << std::endl;
//    std::cout << "a   = " << a << std::endl;
//
//    // Test post-decrement
//    std::cout << "--- Test post-decrement ---" << std::endl;
//    std::cout << "a-- = " << a-- << std::endl;
//    std::cout << "a   = " << a << std::endl;
//
//    // Test operateurs arithmetiques
//    std::cout << "--- Test arithmetiques ---" << std::endl;
//    Fixed c( 10.5f );
//    Fixed d( 2.0f );
//    std::cout << "c = " << c << std::endl;
//    std::cout << "d = " << d << std::endl;
//    std::cout << "c + d = " << c + d << std::endl;
//    std::cout << "c - d = " << c - d << std::endl;
//    std::cout << "c * d = " << c * d << std::endl;
//    std::cout << "c / d = " << c / d << std::endl;
//
//    // Test operateurs de comparaison
//    std::cout << "--- Test comparaisons ---" << std::endl;
//    std::cout << "c > d  : " << (c > d) << std::endl;
//    std::cout << "c < d  : " << (c < d) << std::endl;
//    std::cout << "c >= d : " << (c >= d) << std::endl;
//    std::cout << "c <= d : " << (c <= d) << std::endl;
//    std::cout << "c == d : " << (c == d) << std::endl;
//    std::cout << "c != d : " << (c != d) << std::endl;
//
//    // Test min et max
//    std::cout << "--- Test min/max ---" << std::endl;
//    std::cout << "min(c, d) = " << Fixed::min(c, d) << std::endl;
//    std::cout << "max(c, d) = " << Fixed::max(c, d) << std::endl;
//    std::cout << "min(a, b) = " << Fixed::min(a, b) << std::endl;
//    std::cout << "max(a, b) = " << Fixed::max(a, b) << std::endl;
//
//    return 0;

}