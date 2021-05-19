#include <iostream>
using namespace std;


int rekursif(int n){
    /* Kondisi terminasi */
    if(n <= 1){
        cout << n << " = ";
        return n ;
    }
    /* Fungsi Factorial */
    else
        cout << n << " * ";
        return n*rekursif(n - 1);
}

int main(){
    int n;
    cout << "Masukkan bilangan bulat : ";
    cin >> n;
    cout << n << " Faktorial adalah :\n";
    cout << rekursif(n) << "\n";
}

