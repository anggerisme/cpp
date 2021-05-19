#include <iostream>
using namespace std;


int rekursif(int n){
    if(n <= 1){
        cout << n << " = ";
        return n ;
    }
    else
        cout << n << " * ";
        return n*rekursif(n - 1);
    // else{
        
    // }
}

int main(){
    int n;
    cout << "Masukkan bilangan bulat :\n";
    cin >> n;
    cout << n << " Faktorial adalah :\n";

    cout << rekursif(n) << "\n";
}

