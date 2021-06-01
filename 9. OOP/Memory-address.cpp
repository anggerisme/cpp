#include  <iostream>
#include <string>
#include <chrono>

using 

using namespace std;


/*
    Class kosong minimal akan mengambil 1 byte memory

    class Kosong{
        public:
            int data(){
                return 1;
            }

    }; 

*/


    // Memory dari sebuah class tergantung dari tipe data attribut yang ada di dalamnya

class Isi{
        public:
            int data;
            int data1;
            string data3;
    }; 

class Mahasiswa{
    
};

int main(){
    // cout << "Alokasi memory :" << sizeof(Kosong);
    cout << "Alokasi memory :" << sizeof(Isi) << endl;
    // string data = "Apalah";
    // cout << "Ukuran : " << sizeof(data) << endl;

    Mahasiswa Andi;
    string a;
    string b;
    string c;

    cout << sizeof(string) << endl;

    cout << &a << endl;
    cout << &b << endl;
    cout << &Andi << endl;
    cout << &c << endl;
}