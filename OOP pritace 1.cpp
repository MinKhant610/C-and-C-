// simple project using object and method
#include <iostream>
using namespace std ;

class Bookshop {

private :
    int price =0 ;
    int year = 0 ;

public :
    string bookname ;
    void bookprice (int p) ;
    void yearofbook(int y) ;
    void BookDetial() ;

};

void Bookshop :: bookprice(int p) {

price = p ;

}

void Bookshop :: yearofbook(int y){

year = y ;

}

void Bookshop ::  BookDetial (){

    cout << "The name of book :" << bookname << endl ;
    cout << "The year of the book :" << year << endl ;
    cout << "The price of the book :"<< price  << endl ;

}

int main ()
{
    Bookshop book ;
    int Bprice = 0 ;
    int Byear = 0 ;

    cout << "Enter the book name : " ;
    cin >> book.bookname ;
    cout << "Enter the book price :" ;
    cin >> Bprice ;
    cout << "Enter the year of the book " ;
    cin >> Byear ;

    book.bookname ;
    book.bookprice (Bprice);
    book.yearofbook(Byear);
    book.BookDetial () ;


    return 0 ;
}


