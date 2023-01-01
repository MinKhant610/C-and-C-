#include <iostream>
using namespace std;
template<typename type>

type add(type x, type y){
    return x+y;
}

int main(){
    cout <<"Adding integer number : "<< add (2,3) << endl;
    cout <<"Adding float number : "<< add(2.33,1.7) << endl;
}