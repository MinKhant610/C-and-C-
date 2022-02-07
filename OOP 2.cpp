#include <iostream>
using namespace std ;

const float PI= 3.141593 ;

class test {

public :
    float radius ;

    float calArea(){

    return PI*radius*radius ;

    }

};

int main ()
{
    test obj;
    obj.radius = 5.5 ;

    cout << "Radius = " << obj.radius << "in\n"
         << "Area of circle = " << obj.calArea()
         << "sq.in \n" ;


    return 0 ;
}
