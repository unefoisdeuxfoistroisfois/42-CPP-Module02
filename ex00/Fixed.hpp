#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
    private:
        int _value;
        // un exemplaire pour la class et cosnt la valeur ne change plus apres init
        static const int _fractioinalBits = 8;

    public:
        Fixed();
        Fixed(Fixed const &src);
        // copie les attribut d'un ojbet dans un autre
        Fixed &operator=(Fixed const &rhs); // right hand side recoit l'original sans copie

        ~Fixed();

        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif