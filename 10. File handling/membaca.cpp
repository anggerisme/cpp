#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    system("cls");
    ifstream baca;
    baca.open("baca.txt");
    string data, buffer;
    /*Informasi di baca.txt akan disimpan ke dalam variable data*/
    // baca >> data;
    /* 
        *********
        Kemudian kita tampilkan data diatas ke cout.
        Informasi yang bisa dibaca hanya satu kata maka kita perlu getline
    // cout << data;
    */

    /* Getline membaca seluruh baris sampai ketemu newline (\n) 
        getline menyalin kalimat (satu baris) ke dalam variable buffer
    */

    getline(baca, buffer); // Baca tulisan ini
    /*
        Untuk menggabungkan kalimat satu dan berikutnya maka kita gunakan append
    */
    data.append(buffer);
    /*
        ********
        data yang sebelumnya kosong setelah kita append maka data memuat salinan dari kalimat pertama
    cout << data;
    */

    getline(baca, buffer);
    data.append("\n"+buffer);
    cout << data;

    
}