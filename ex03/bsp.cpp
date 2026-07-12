#include "Point.hpp"

static int  ft_sign(Fixed const &triangle){
    if (triangle > Fixed(0)){
        return (1);
    }

    if (triangle < Fixed(0)){
        return (-1);
    }
    else{
        return (0);
    }
}

static Fixed ft_area(Point const a, Point const b, Point const point){ // l'ia ma conseil de rajout static car interne a la fonction bsp
    //(Bx - Ax)(Px - Ay) - (By - Ay)(Px - Ax)

    Fixed res = ((b.getX() - a.getX()) * (point.getY() - a.getY()) - 
                 (b.getY() - a.getY()) * (point.getX() - a.getX()));

    return (res);
}

bool bsp(Point const a, Point const b, Point const c, Point const point){

    // aire
    Fixed t1 = ft_area(a, b, point); // arete AB;
    Fixed t2 = ft_area(b, c, point); // arete BC;
    Fixed t3 = ft_area(c, a, point); // arete CA;

    int s1 = ft_sign(t1);
    int s2 = ft_sign(t2);
    int s3 = ft_sign(t3);

    if (s1 == 0 || s2 == 0 || s3 == 0){
        return (false); // en dehors du triangle
    }
    else{
        return (s1 == s2 && s2 == s3);
    }
}
