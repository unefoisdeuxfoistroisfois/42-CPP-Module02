#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
    private:
        int _value;
        static const int _fractioinalBits = 8;

    public:
        Fixed();
        ~Fixed();
        int getRawBits(void);
        void setRawBits(int const raw);
};

#endif