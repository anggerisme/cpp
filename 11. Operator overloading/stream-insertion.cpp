#include <iostream>
#include <string>

using namaspace std;

class Mahasiswa{
    public:
    string nama;
    int NIM;
    public:
        Mahasiswa(){
            nama = "nama";
            NIM = 0;
        }

        // Karena kita menggunakan function bukan hanya objek dalam parameter maka kita menambahkan 2 parameter. Objek pertama dari class ostream, objek kedua dari objek class Mahasiswa
        friend ostream &operator<<(ostream &output, Mahasiswa &p);
        friend istream &operator<<(istream &input, Mahasiswa &p);
};

/*
    Untuk mengoverwrite operator cout dan cin kita harus menyertakan class ostream dan istream dan menambahkan friend ke dalam class utama
*/
ostream &operator << (ostream &output, Mahasiswa &p){
    output << "Halo!" << endl;
    output << "Nama saya " << p.nama << endl;

    return output;
}

istream &operator >> (istream &input, Mahasiswa &p){
    input >> p.nama >> p.NIM;
    return input;
}

int main(){
    cout << "Masukkan nama :" << endl;
    Mahasiswa Andi;
    /*
        Dengan menggunakan operator overloading kita dapat memanfaatkan built in function dan memodifikasinya untuk melakukan
        fungsi yang biasanya tidak bisa dilakukan dengan normal, seperti menampilkan objek dari class secara langsung.
    
    */
    cin >> Andi;
    cout << Andi;
}