#include <iostream>
using namespace std ;
// constructor is a special method 
class Myclass {

	public :
		Myclass () // constructor 
		//(class name equal to method name is called constructor and it work when create an object)
		{
			cout << "Hello World";
		}

};

int main () 
{
	Myclass myobj ;
	return 0 ;
}