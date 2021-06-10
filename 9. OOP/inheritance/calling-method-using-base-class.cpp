#include <iostream>
#include <string>

using namespace std;

class Ayah{
    protected:
        string namaAyah;
    public:
        Ayah(string nama){
            namaAyah = nama;
        }
        void show(){
            cout << "Nama Ayah : " << namaAyah << endl;
        }
};

class Anak: public Ayah{
    public:
        Anak(string nama) : Ayah(nama){}
};

void siapaNamaAyah(Ayah *p){
    p->show();
}

int main(){
    Anak Andi("Padhika");
    // siapaNamaAyah(Andi);
    /*
        Bisa menggunakan pointer
    */
    siapaNamaAyah(&Andi);
}