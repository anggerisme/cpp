#include <iostream>
#include <array>
#include <algorithm> // sort

using namespace std;

const size_t arraySize = 10;
sortArray(array < int, arraySize> &angka){
    // Ascending Order

    cout << "Array ASC : ";
    sort(begin(angka)-1, end(angka));
    for(int &a : angka){
        
        cout << a << " ";
    }
    cout << endl;
    // Descending order
    cout << "Array DESC : ";
    sort(begin(angka), end(angka), greater<int>());
    for(int &a : angka){
        
        cout << a << " ";
    }
}

int main(){
    system("cls");
    array<int, arraySize> angka = {9, 4, 5, 7, 8, 3, 2, 1, 0, 6};
    sortArray(angka);

}