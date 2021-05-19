#include <iostream>
using namespace std;

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int *p;
    /*arr mewakili nilai pertama dan juga alamat dari keseluruhan array disimpan di index array pertama*/
    p =  arr;

    cout << *(p) << endl; // 1 (index pertama)
    cout << *(p+1) << endl; // 1 (index kedua)


}