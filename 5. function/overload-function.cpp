#include <iostream>
#include <cmath>
using namespace std;

/*
    overloading function merupakan kumpulan function dengan nama yang sama. digunakan untuk memberikan backup apabila function yang satu tidak punya parameter untuk menerima argumen dari luar, sehingga tugas dapat diteruskan ke function yang lainya yang memnuhi persyaratan.

*/

int luas_kotak(int panjang, int lebar){
    int hasil = panjang * lebar;
    return hasil;
}

int luas_kotak(int sisi){
    int hasil = pow(sisi, 2);
    return hasil;
}

double luas_kotak(double sisi){
    double hasil = pow(sisi, 2);
    return hasil;
}




int main(){
    system("cls");
    cout << "luas kotak 2x3 = " << luas_kotak(2,3) << endl;
    cout << "luas kotak 2x2 = " << luas_kotak(2) << endl; // tanpa lebar
    cout << "luas kotak 2.5x2.5 = " << luas_kotak(2.5);   // nilai float
}