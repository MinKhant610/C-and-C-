#include <iostream>
#include <regex>
using namespace std;

int main(){
    string phone_number;

    cout << "Enter your phone number :" ;
    cin >> phone_number;

    regex myan_phone_standard("(09)[0-9]{9}");
    bool check_standard = regex_match(phone_number, myan_phone_standard);

    try {
        if (!check_standard){
            throw 101;
        }
        cout << "Add successfully" << endl;
    }catch(int error_num){
        cout << "Error : " << error_num << "this is not phone number " << endl;
    }
}