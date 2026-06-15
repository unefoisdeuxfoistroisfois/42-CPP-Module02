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

        // The 4 arithmetic operators (création d'un nouveau nombre)
        Fixed   operator+(Fixed const &rhs) const;
        Fixed   operator-(Fixed const &rhs) const;
        Fixed   operator*(Fixed const &rhs) const;
        Fixed   operator/(Fixed const &rhs) const;
        
        // The 4 increment/decrement
        // modifie et retourne l'objet courant
        Fixed   &operator++();
        Fixed   &operator--();
        // Ici renvoie la dernier valeur avant modificaito
        Fixed   operator++(int);
        Fixed   operator--(int);

        // Fonctions statiques
        static Fixed &min(Fixed &n1, Fixed &n2);
        static Fixed const &min(Fixed const &n1, Fixed const &n2);
        static Fixed &max(Fixed &n1, Fixed &n2);
        static Fixed const &max(Fixed const &n1, Fixed const &n2);

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