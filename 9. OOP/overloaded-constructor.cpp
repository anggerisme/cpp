#include <iostream>
#include <string>
using namespace std;

class Mahasiswa{
    public:
        string nama;
        int NIM;
        double IPK;

        Mahasiswa();
        Mahasiswa(string nama;)
        Mahasiswa(string nama, int NIM){
            this->nama = nama;
            this->NIM = NIM;
        }
        Mahasiswa(string nama, int NIM, double IPK){
            this->nama = nama;
            this->NIM = NIM;
            this->IPK = IPK;
        }
};

int main(){
    Mahasiswa Andi();
    
}