#include <iostream>

using namespace std;

void fungsi_b(int *);
void fungsi_c(int &);

int main(){
    system("cls");
    int a = 5;
    cout << "Alamat a : " << &a << endl;
    cout << "Nilai a : " << a << endl;

    fungsi_b(&a);
    fungsi_c(a);
}

void fungsi_b(int *b){
    cout << "Alamat b : " << b << endl;
    cout << "Nilai b : " << *b << endl;
    cout << "Alamat asli b : " << &b << endl;
}
void fungsi_c(int &c){
    cout << "Alamat c : " << &c << endl;
    cout << "Nilai c : " << c << endl;
    // cout << "Alamat asli c : " << &c << endl;
}