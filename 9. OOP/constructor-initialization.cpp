#include <iostream>
#include <string>

using namespace std;

class Mahasiswa{
    public:
    string nama;
    int NIM;
    double IPK;

    // Mahasiswa(){

    //     nama = "Andi";
    //     NIM = 123;
    //     IPK = 3.47;
    // }

    // Better way

    Mahasiswa() : nama{"Andi"}, NIM{123}, IPK{3.75}{}
    Mahasiswa(string input_nama) : nama{input_nama}, NIM{112}, IPK{3.25}{}
};

int main(){
    Mahasiswa Andi;
    cout << Andi.nama << endl;
    Mahasiswa Budi = Mahasiswa("Budi");
    cout << Budi.nama << endl;
}