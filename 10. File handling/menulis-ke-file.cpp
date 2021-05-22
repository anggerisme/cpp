#include <iostream> 
#include <fstream> // stream ke FILE

using namespace std;
/*
        ofstream
        ifstream
        fstream
    */

int main(){
    ofstream myFile;
    /*
        **********
        ios::out = operasi output, default
        ios::app = append -> menambahkan pada akhir baris
        ios::trunc = membuat file jika tidak ada, dan kalau ada akan dihapus dan dibuat baru.
        **********
    */

    /* Kalau belum ada file-nya akan dibuat */
    myFile.open("data.txt", ios::out);
    /*
        **********
        Jika sebelumnya kita biasa menulis data ke console (std) sekarang kita bisa menuliskanya secara langsung ke FILE
        **********
    */ 
    myFile.close();

    myFile.open("data2.txt", ios::trunc);
    myFile << "Tulis ini pada data 2";
    myFile.close();
    // Data 3 - append
    myFile.open("data3.txt", ios::app);
    myFile << "Tuliskan ini pada data 3";
    myFile.close();
}