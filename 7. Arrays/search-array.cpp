#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

const size_t arraySize = 10;
int ketemu;
int cariAngka;

void searchArray(array<int, arraySize> &arr){
    sort(begin(arr), end(arr));
    ketemu = binary_search(begin(arr), end(arr), cariAngka);
    if(ketemu){
        cout << cariAngka << " ditemukan!";
    }
    else{
    cout << "pencarian tidak ditemukan!";
    }
}


int main(){
    system("cls");
    array<int, arraySize> arr = {9, 4, 5, 7, 8, 3, 2, 1, 0, 6};
    cout << "Masukkan angka yang anda cari : ";
    cin >> cariAngka;
    searchArray(arr);
}