#include <iostream>
using namespace std ;
class Myclass {

public :
int x ;

private :
	int y ;

};

int main ()
{

Myclass obj ;

obj.x = 10 ;
obj.y = 12 ; //error because private (Access Specifiers);

cout << obj.x ;

	return 0 ;
}