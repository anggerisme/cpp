#include <iostream>

using namespace std;

class Mahasiswa{
    public:
        virtual void kenalan(){
            cout << "Hi from Mahasiswa" << endl;
        }
};

class MahasiswaBaru : public Mahasiswa {
    public:
    // Overwrite method
        void kenalan(){
            cout << "Hi from MahasiswaBaru" << endl;
        }
};

class MahasiswaAkhir : public Mahasiswa{
    public:
        void kenalan(){
            cout << "Hi from MahasiswaAkhir!" << endl;
        }
};

void perkenalan(Mahasiswa &p){
    p.kenalan();
}

int main(){

    MahasiswaAkhir andi;
    MahasiswaBaru budi;

    perkenalan(andi);
    perkenalan(budi);
}