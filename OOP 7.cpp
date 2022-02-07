//inheritance 
#include <iostream>
using namespace std ;
class Vehicle {

	public :

		string brand ="Ford" ;

		void honk () {

			cout << "Tuut , tuut ! \n " ;
		}
};

class Car : public Vehicle {

	public :
		string model = "Mustang" ;
};

int main () {

	Car mycar ;
	mycar.honk();

	cout << mycar.brand + " " + mycar.model << endl; 
	
	return 0 ;
}