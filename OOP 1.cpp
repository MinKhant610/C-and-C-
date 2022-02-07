#include <iostream>

using namespace std ;

const float PI= 3.141593 ;

class circle
{
public :
    float radius ;
    float calArea (); // declare the class method
};

float circle :: calArea() // to input class method ::
{
    return PI*radius*radius ;
}

int main ()
{
    circle obj;
    obj.radius = 5.5 ;

    cout << "Radius = " << obj.radius << "in\n"
         << "Area of circle = " << obj.calArea()
         << "sq.in \n" ;


    return 0 ;
}
