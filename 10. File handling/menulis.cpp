#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    // ifstream baca;
    ofstream tulis;
    tulis.open("hasil_tulis.txt");
    // Akan menulis ke hasil_tulis.txt
    tulis << "Tuliskan ini"; // Akan mengoverride tulisan sebelumnya
    tulis << "\nTuliskan ini juga";
    tulis.close();
    /*Tidak akan ditulis karena file sudah di close*/
    tulis << "\nTuliskan ini lagi";
}