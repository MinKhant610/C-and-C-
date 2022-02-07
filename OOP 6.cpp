//Encapsulation 
using namespace std ;
#include <iostream>

class Encap {

private:
	int salary ;

public :
	void setsalary(int s){

		salary = s;
	}

	int getsalary (){

		return salary;
	}

};

int main ()
{

	Encap obj ;
	obj.setsalary(1000);

	cout << "The salary is :" << obj.getsalary() ;

	return 0 ;
}
