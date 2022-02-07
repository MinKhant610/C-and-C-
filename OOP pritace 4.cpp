#include <iostream>
// Copy Constructor

using namespace std ;

class CopyConstructor {

private :
    int data1 ,data2 ;

public :
    CopyConstructor (int x1 , int y2){

    data1 = x1;
    data2 = y2 ;

    }

    CopyConstructor (const CopyConstructor &cp){

    data1 = cp.data1 + 10 ;
    data2 = cp.data2 + 10 ;

    }

    void display()
    {
        cout << data1 << " " << data2 << endl ;
    }

};

int main ()
{
    CopyConstructor obj1(10,15);
    CopyConstructor obj2 = obj1 ;

    cout << "Normal Constructor : " ;
    obj1.display () ;
    cout << "Copy Constructor : " ;

    obj2.display();

    return 0 ;
}



