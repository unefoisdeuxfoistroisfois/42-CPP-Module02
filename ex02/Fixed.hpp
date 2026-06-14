#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
    private:
        int _value;
        static const int _fractioinalBits = 8;

    public:
        // Constructors
        Fixed();
        Fixed(Fixed const &src);
        // copie les attribut d'un ojbet dans un autre
        Fixed &operator=(Fixed const &rhs); // right hand side recoit l'original sans copie
        Fixed(int const n);
        Fixed(float const f);

        // Destructors
        ~Fixed();

        // Public functions
        float toFloat(void) const;
        int toInt(void) const;

        // The 6 comparison operators
        bool    operator>(Fixed const &rhs);
        bool    operator<(Fixed const &rhs);
        bool    operator>=(Fixed const &rhs);
        bool    operator<=(Fixed const &rhs);
        bool    operator==(Fixed const &rhs);
        bool    operator!=(Fixed const &rhs);

        //The 4 arithmetic operators (création d'un nouves nombre)
        Fixed   operator+(Fixed const &rhs) const;
        Fixed   operator-(Fixed const &rhs) const;
        Fixed   operator*(Fixed const &rhs) const;
        Fixed   operator/(Fixed const &rhs) const;
        


        // Getter
        int getRawBits(void) const;

        // Setter
        void setRawBits(int const raw);
};

//Fixed &operator<<(Fixed const &rhs); // right hand side recoit l'original sans copie
std::ostream &operator<<(std::ostream &cout, Fixed const &fixed);
// std::cout << a;
// operator<<(std::cout, a);
//            &cout, &fixed

#endif