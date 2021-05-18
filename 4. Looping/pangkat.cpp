#include <iostream>
using namespace std;


/*
    Konsep :
    Pangkat di didefinisikan dengan 
    mengulang sebanyak looping 

*/

int pangkat(int a, int b){
    int hasil = a;
    for (int i = 1; i < b;i++){
        hasil = hasil * a;
    }
    return hasil;
}

int main(){
    system("cls");
    cout << pangkat(2,3);
}
