#include <iostream>
using namespace std ;

//Parameter Constructor ;

class Parent {

public :
    string name ;
    int age = 0 ;

    Parent(string sName ,int  sAge)
    {
        name = sName ;
        age = sAge ;
    }

    void printData()
    {
        cout << "Name :" << name << endl;
        cout << "Age  :" << age << endl;
    }

};


int main ()
{
    Parent parentObj ("Min Khant",17);

    parentObj.printData();

    return 0 ;
}
