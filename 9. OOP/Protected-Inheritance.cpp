#include <iostream>
#include <string>

using namespace std;

class Mahasiswa{
    protected:
        string nama;
        // int NIM;
    public:
        void setValue(string nama){
            this->nama = nama;
            // this->NIM = NIM;
        }
};

class MahasiswaBaru : protected Mahasiswa{
    public:
    void display(){
        cout << nama << endl;
    }
    void setStudentName(string nama){
        setValue(nama);
    }
};

int main(){
    MahasiswaBaru Andi;
    // Andi.setValue("Andi");
    Andi.setStudentName("Andi");
    Andi.display();
    // Mahasiswa Budi;
    // Budi.show();
}