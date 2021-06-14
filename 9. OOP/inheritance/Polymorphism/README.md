# Virtual function

Virtual function adalah Member function di base class (main class) yang didefinisikan ulang (overrided) di _derived class_. Virtual function memungkinkan kita untuk memanggil method melalui object yang dibuat dari sub-class (derived from main class), sehingga method yang dipanggil bisa _match_ dengan method yang ada di sub class bukan dari main class, walapun punya nama dan tipe parameter yang sama.

## Syntax

```c++
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
            cout << "Hi from Mahasiswa Baru" << endl;
        }
};

class MahasiswaAkhir : public Mahasiswa{
    public:
        void kenalan(){
            cout << "Hi from Mahasiswa Akhir!" << endl;
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
```
