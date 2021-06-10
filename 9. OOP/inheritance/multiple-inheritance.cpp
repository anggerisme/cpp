#include <iostream>
#include <string>

using namespace std;

class Ayah{
    protected:
        string namaAyah;
        void setNamaAyah(string nama){
            this->namaAyah = nama;
            cout << "Nama Ayah : " << namaAyah << endl;
        }
};

class Ibu{
        string namaIbu;
    public:    
        void setNamaIbu(string nama){
            this->namaIbu = nama;
            cout << "Nama ibu : " << namaIbu << endl;
        }
    
};

class Anak: private Ayah, private Ibu{
    public:
    /*
        ****** Jika sub-class private pakai using.
         jika hanya protected, sub-class masih bisa mengakses data member
    */
        using Ayah::namaAyah;
        void setValue(string namaIbu, string namaAyah){
            setNamaIbu(namaIbu);
            setNamaAyah(namaAyah);
        }
};

int main(){
    Anak Andi;
    Andi.setValue("Teresa", "Padhika");
    cout << Andi.namaAyah;
}