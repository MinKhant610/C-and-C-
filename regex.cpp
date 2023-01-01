#include <iostream>
#include <regex>
using namespace std;

int main(){
    while (true){
        string input;
        cout << "Enter some string :";
        cin >> input;

        //regex e("hello");
        regex e("hello", regex_constants::icase); // case insensitive
        //regex e("hello.", regex_constants::icase); // any character except new line

        bool check = regex_match(input, e);

        cout << (check ? "Match" : "Not match") << endl;
    }
}