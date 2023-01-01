#include <iostream>
using namespace std;

int add(int x, int y){
    return x+y;
}

int main(){  
    int (*fptr)(int, int) = add; // only need add / no need add()
    // because we need add function address not add function..
    cout << fptr(5,10) << endl;

}