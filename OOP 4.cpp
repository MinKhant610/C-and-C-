#include <iostream>
using namespace std ;

//constructor example 

class Car {

public :
	string brand ; 
	string model ;
	int year ;

	Car (string x , string y , int z)
	{
		brand = x ;
		model = y ;
		year = z ;
	}

};

int main ()
{
Car myobj("BMW","X5",2020);

cout << myobj.brand << " " << myobj.model << " " << myobj.year << " " ;

return 0 ;

}