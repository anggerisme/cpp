#include <iostream>
#include <string>

using namespace std;

class Mahasiswa{
    public:
        string nama;
        string jurusan;
        double IPK;
};

int main(){
    system("cls");
    Mahasiswa data1;
    data1.nama = "Angger";
    data1.jurusan = "Teknik Elektro";
    data1.IPK = 4.00;
    cout << "nama data1 : " << data1.nama << endl;
    cout << "Jurusan data1 : " << data1.jurusan << endl;
    cout << "IPK data1 : " << data1.IPK << endl;
}