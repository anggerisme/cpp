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
