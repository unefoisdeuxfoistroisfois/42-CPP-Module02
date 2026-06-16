#include "Point.hpp"
#include <iostream>

int main( void ) {
    Point a(0, 0);   // sommet A du triangle
    Point b(4, 0);   // sommet B du triangle
    Point c(2, 3);   // sommet C du triangle
    Point p(2, 1);   // point à tester

    if (bsp(a,b,c,p) == true){
        std::cout << "Inside" << std::endl;
    }
    else{
        std::cout << "Outside" << std::endl;
    }

}