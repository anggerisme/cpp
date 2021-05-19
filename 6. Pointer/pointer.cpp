#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int *b = &a;

    /*
        * -> arterisk = Dereference operator 
        & -> ampersand = Reference operator 
    
    */

    cout << "Alamat memory a : " << b << endl;
    cout << "Nilai a : " << *b;
}