#include <iostream>
using namespace std ;

// protected sample project

class Parent {

protected :
    int data = 0 ;

};

class Child : Parent {

public :
    void setData(int d){

    data = d ;

    }

    void showData (){

    cout << "The Protected Data is :" << data << endl;

    }

};

int main ()
{
    int id = 0 ;
    Child childobj ;
    cout << "Enter the data :" ;
    cin >> id ;

    childobj.setData(id);
    childobj.showData();

    return 0;
}




