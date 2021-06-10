#include <iostream>
#include <string>

using namespace std;

class Ayah{
    protected:
        string namaAyah;
        /*
            -------- Passing value dari class ke Base class constructor ---------
        */
        Ayah(string nama){
            namaAyah = nama;
            cout << "Nama Ayah : " << namaAyah << endl;
        }

        // Ayah(){
        //     cout << "Hi ayah disini! "<< endl;
        // }
};

class Anak: private Ayah{
    public:
        Anak(string nama) : Ayah(nama){}
        
        // Delegating constructor
        
        /*Anak(string nama) : Ayah(){
            namaAyah = nama;
            cout << "Nama Ayah : " << namaAyah << endl;
        } */
};

int main(){
    Anak Andi("Padhika");
}