#include <iostream>

int main(){
    int a;

    std::cout << "Masukkan angka : ";
    std::cin >> a;

    if(a % 2 == 0)
        std::cout << a << " bilangan genap";

    else
        std::cout << a << " bilangan ganjil";
}