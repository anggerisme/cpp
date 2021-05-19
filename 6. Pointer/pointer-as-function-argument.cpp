#include <iostream>
using namespace std;

void swap(int *p, int *q){
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

int main(){
    int a = 2;
    int b = 3;
    cout << "sebelum ditukar : " << endl;
    cout << "a = " << a << "\nb = " << b << endl;
    swap(&a, &b);
    cout << "sesudah ditukar : " << endl;
    cout << "a = " << a << "\nb = " << b;
}