# Constructor

## Penjelasan

Constructor adalah **spesial member function yang akan dieksekusi terlebih dahulu saat pembuatan instance (object)**. Constructor biasanya digunakan untuk insialisasi member-member atau melakukan persiapan lainnya.

## Ciri ciri konstruktor

1. Constructor **memiliki identitas sama** seperti identitas dari class.
2. Constructor **tidak** memiliki return type
3. Constructor **harus** berada dalam label public.
4. Constructor **tidak** bisa dipanggil dari luar class.

# Constructor initialization lists

Tujuan : Untuk memberikan inisialisasi dengan value yang kita secara eksplisit berikan setelah construct dipanggil.

```c
class Mahasiswa{
    public:
    string nama;
    int NIM;
    double IPK;

    Mahasiswa(){
        nama = "Andi";
        NIM = 123;
        IPK = 3.47;
    }

};
```

> > Kode program diatas jika dijalankan tidak error akan tetapi pengisian value `nama` dengan "Andi" itu bukan inisialisasi melainkan _assignment_. Dan juga cara ini dianggap tidak efficient

Sama saja kita tulis seperti ini

```c
string nama;
int NIM;
double IPK;

nama = "Andi";
NIM = 123;
IPK = 3.45;
```

Ada cara yang lebih baik yaitu dengan constructor initialization lists

```c
class Mahasiswa{
    public:
    string nama;
    int NIM;
    double IPK;

    Mahasiswa() : nama{"Andi"}, NIM{123}, IPK{3.75}{}
    Mahasiswa(string input_nama) : nama{input_nama}, NIM{112}, IPK{3.25}{}
};
```

> > Constructor initialization memberikan nilai default jika salah satu parameter constructor diatas tidak menerima argumen.

# Static member variables

`Static` keyword menjaga sebuah variable dalam menyimpan value-nya sehingga tidak akan hilang (_destroyed_) walaupun setelah keluar dari scope. Fungsi dari keyword _static_ ini juga berlaku ketika kita aplikasikan ke Class data members.

<!-- Setiap data member merujuk ke class, bukan ke objek
Berguna untuk menyimpan informasi tentang class lebih banyak -->

<!-- Function dalam class dapat dideklarasikan sebagai static
        Independent terhadap objek
        Dapat dipanggil dengan nama class-nya -->

```c++
#include <iostream>
using namespace std;

int generate(){
static int s{0};
return ++s;
}

int main(){
cout << generate() << endl;
cout << generate() << endl;
cout << generate() << endl;
}

```

Static `int s` akan menjaga nilainya bahkan setelah keluar dari scope dengan bantuan keyword static. `Static` mempunyai perilaku yang berbeda ketika ditaruh di global scope yang mana keyword `static` akan menjaga variable untuk tidak terlihat oleh kode program lain yang diluar dari file dimana ia berada.

## Static di dalam member variable class

Saat kita menginisialisasi sebuah objek dari class, setiap objek yang kita inisialisasi juga akan memiliki variable/method yang ada di class tersebut.

```c++
class Shape{
    public:
        int panjang{1};
};

int main(){
    Shape Segitiga;
    Shape Kotak;

    Segitiga.panjang = 2;

    cout << Segitiga.panjang << endl;
    cout << Kotak.panjang << endl;
}

```

```c++
Ouput :
2
1
```

> > Segitiga mempunyai panjangnya sendiri, sedangkan Kotak memiliki panjang default yang telah ditetapkan di class.

Setiap variable dari sebuah class dapat dibuat `static`. Tidak seperti contoh diatas, static member variable akan membagikan nilainya ke seluruh objek sehingga semua variable dari suatu objek akan mempunyai nilai yang sama/seragam

```c++
class Shape{
    public:
        static int panjang;
};

int Shape::panjang{1};

int main(){
    Shape Segitiga;
    Shape Kotak;

    Segitiga.panjang = 2;

    cout << Segitiga.panjang << endl;
    cout << Kotak.panjang << endl;
}
```

> > Karena `panjang` bersifat `static` maka nilai berapapun yang disimpan `panjang` nantinya akan **dipunyai** oleh objek lainya yang juga mempunyai variable `panjang`.

```c++
Ouput :
2
2


class Something {
public:
    static int s_value; // declares the static member variable
};

int Something::s_value{ 1 };
```
