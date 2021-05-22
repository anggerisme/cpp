#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){
    ifstream baca;
    bool isData = false;
    string data,buffer;
    int no;
    string nama;

    baca.open("baca-tulis.txt");
    
    while(!isData){
        getline(baca, buffer);
        data.append("\n"+buffer);
        if(buffer == "data"){
            isData = true;
        }
    }

    cout << data << endl;
    getline(baca, buffer);
    cout << buffer << endl;

    while(!baca.eof()){
        baca >> no;
        baca >> nama;

        /*
            Akan menampilkan perulangan no dan nama sampai akhir file ditemukan
        */
        cout << no << "\t" << nama << endl;
    }

    // cout << data;
}