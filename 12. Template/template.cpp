#include <iostream>
using namespace std;

template <typename T>
T hitung(T x, T y){
    return (x > y)? x:y;
}

int main(){
    cout << hitung<int>(5, 2) << endl;
    cout << hitung<float>(3.14, 2.17) << endl;
    cout << hitung<char>('g', 'e') << endl;
}