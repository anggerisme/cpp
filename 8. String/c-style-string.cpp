#include <iostream>
/*
    atau juga bisa <string.h>
    Untuk memanggil function strlen, 
    strcpy
*/
#include <cstring> 
#include <cctype>

using namespace std;

int main(){
    system("cls");
    char first_name[20];
    char last_name[20];
    char full_name[50];
    char temp[50];

    ///////// Basic input-output string ///////////

    // cout << "Masukkan nama depan anda : " << endl;
    // cin >> first_name;
    // cout << "Masukkan nama Belakang anda : " << endl;
    cout << "Masukkan nama lengkap anda : " << endl;
    // cin >> full_name;

    // cout << "Nama anda : " << first_name << endl << "Nama Belakang : " << last_name <<endl << "Panjang karakter nama belakang : " << strlen(last_name);

    ///////// strcpy, strcat, cout ///////////

    // strcpy(full_name, last_name);
    // strcat(first_name, last_name);
    // cout << first_name;

    //////////////// getline ///////////////////
    cin.getline(full_name, 50);
    // cout << "Nama lengkap : " << full_name;

    strcpy(temp, full_name);
    /*
        0 = Jika keduanya sama
        non-zero = jika keduanya tidak sama 
    */
   //////////////// Both are the same! ///////////////////
    if(strcmp(temp, full_name)==0){
        cout << temp << " dan " << full_name <<" Keduanya sama!";
    }
    else{
        cout << temp << " dan " << full_name <<" Keduanya tidak sama!";
    }
    //////////////// For untuk mengubah character menjad huruf besar - toupper function ///////////////////
    for (size_t i(0); i < strlen(full_name);++i){
        /*
            isalpha untuk mengecheck apakah character full_name[i] termasuk character alfabet atau tidak.
        */
        if(isalpha(full_name[i])){
        /*
            Jika iya maka ubah hurufnya satu persatu menjadi huruf besar.
        */
            full_name[i] = toupper(full_name[i]);
        }
    }
    cout << "Nama anda " << full_name << endl;

        if(strcmp(temp, full_name)==0){
        cout << temp << " dan " << full_name <<" Keduanya sama!";
    }
    else{
        cout << temp << " dan " << full_name <<" Keduanya tidak sama!";
    }
}
