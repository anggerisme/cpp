#include <iostream>

using namespace std;

class Mahasiswa{
    public:
        string nama;
        string NIM;
        string jurusan;
        double IPK;
        /*
           spesial member function yang akan dieksekusi terlebih dahulu saat pembuatan instance (object). 
        */
        // Ini adalah constructor
        // Mahasiswa(){
        //     cout << "Ini adalah constructor!";
        // }

        // Constructor dengan parameter
        Mahasiswa(
        string inputNama, 
        string inputNIM, 
        string inputJurusan, 
        double inputIPK){
            Mahasiswa::nama = inputNama;
            Mahasiswa::NIM = inputNIM;
            Mahasiswa::jurusan = inputJurusan;
            Mahasiswa::IPK = inputIPK;
            cout << Mahasiswa::nama << endl;
            cout << Mahasiswa::NIM << endl;
            cout << Mahasiswa::jurusan << endl;
            cout << Mahasiswa::IPK << endl;
        }
};

int main(){
    Mahasiswa mahasiswa1 = Mahasiswa("Angger", "1234545", "Teknik Elektro", 4.00);
    
}