#include <iostream>
#include <array>

// using namespace std;

int main(){

    std::array<int, 5> arr;
    system("cls");
    for (int i = 0; i <= 4;i++){
        arr[i] = i;
        std::cout << "nilai["<< i <<"]" "=" << arr[i] ; 
        std::cout << "alamat=" << &arr[i] << std::endl; 
    }

    std::cout << std::endl;
    std::cout << "Ukuran : " << arr.size() << std::endl;
    std::cout << "Alamat awal : " << arr.begin() << std::endl;
    std::cout << "Alamat akhir : " << arr.end() << std::endl;
    std::cout << "Nilai ke 5 : " << arr.at(4) << std::endl;

}