# Method overriden

Jika ada method yang sama baik itu di class atau pun di _derived_ class maka method yang ada di sub-class lah yang akan di eksekusi sedangkan method yang ada di class akan di overwrite.

```c++
class Ayah{
    public:
        void show(){
            cout << "Ini base constructor!"<< endl;
        }
};

class Anak: public Ayah{
    public:
        void show(){
            cout << "Ini sub class constructor!"<< endl;
    }
};

int main(){
    Anak Andi;
    Andi.show();
}
```

Kedua method `show()` mempunyai signature yang sama baik itu dari nama(_identifier_) dan jumlah parameter. Akibatnya method yang ada di dalam derived classlah yang akan di eksekusi. Bagaimana jika kita ingin mengeksekusi method yang ter-_overwrite_ tersebut? yaitu cukup dengan menggunakan scope resolution operator `::`

```c++
int main(){
    Anak Andi;
    Andi.show(); // Method sub-Class
    Andi.Ayah::show(); // Method Class
}

```

# Mengakses member melalui function

Kita bisa mengakses data member dari suatu class dengan menggunakan function yang menerima Object (_instance of class_) sebagi argumenya, lalu argumen inilah yang akan digunakan untuk mengakses suatu class.

```c++
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

void siapaNamaAyah(Ayah p){
    p.show();
}

int main(){
    Anak Andi("Padhika");
    siapaNamaAyah(Andi);
}
```

Function `siapaNamaAyah()` merupakan function biasa yang mengcopy object `Andi` ke dalam object `p` sehingga Object `p` memiliki akses terhadap class `Ayah` sebagaimana object `Andi`.

# Call & Pass argument ke base constructor from sub-classes

Passing argumen dan memanggil base constructor (dari main Class) dapat dilakukan hanya melalui sub-class (_derived clas_).

```c++
class Ayah{
    protected:
        string namaAyah;

        Ayah(string nama){
            namaAyah = nama;
            cout << "Nama Ayah : " << namaAyah << endl;
        }
};

class Anak: private Ayah{
    public:
        Anak(string nama) : Ayah(nama){}
};

int main(){
    Anak Andi("Padhika");
}
```

Di main() Kita membuat objek `Andi` yang sekaligus passing nilai ke constructor milik `Anak`. Kemudian nilai/value argument `padhika` ini di kirim ke base constructor milik main Class `Ayah`.

```c++
Anak(string nama) : Ayah(nama){}
```

Kemudian dari sinilah Constructor milik class Ayah mendapatkan argumen. Konsep ini mirip seperti delegating constructor.
