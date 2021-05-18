#include <iostream>
#include <cmath>
#include <typeinfo>

int main(){
    int pilihan;
    int num1, num2, hasil;
    system("CLS");
    std::cout << "Masukkan pilihan anda : \n"
    "1. Penjumlahan (+)\n"
    "2. Pengurangan (-)\n"
    "3. Perkalian (x)\n"
    "4. Pembagian (+)\n"
    "5. Perpangkatan (^)\n"
    "6. Keluar (+)\n";
    std::cin >> pilihan;

    while(pilihan <1 || pilihan >6){
        std::cout << "Masukkan anda salah! Silahkan ulangi lagi\n";
        std::cin >> pilihan;
    }

    switch(pilihan){
        case 1:
            system("CLS");
            std::cout << "Masukkan angka : ";
            std::cin >> num1;
            std::cout << "+\n";
            std::cout << "Masukkan angka : ";
            std::cin >> num2;
            hasil = num1 + num2;
            std::cout << "Hasil : " << hasil;
            break;
        case 2:
            std::cout << "Masukkan angka : ";
            std::cin >> num1;
            std::cout << "+\n";
            std::cout << "Masukkan angka : ";
            std::cin >> num2;
            hasil = num1 - num2;
            std::cout << "Hasil : " << hasil;
            break;
        case 3:
            std::cout << "Masukkan angka : ";
            std::cin >> num1;
            std::cout << "+\n";
            std::cout << "Masukkan angka : ";
            std::cin >> num2;
            hasil = num1 * num2;
            std::cout << "Hasil : " << hasil;
            break;
        case 4:
            std::cout << "Masukkan angka : ";
            std::cin >> num1;
            std::cout << "+\n";
            std::cout << "Masukkan angka : ";
            std::cin >> num2;
            hasil = num1/num2;
            std::cout << "Hasil : " << hasil;
            break;
        case 5:
            std::cout << "Masukkan angka : ";
            std::cin >> num1;
            std::cout << "+\n";
            std::cout << "Masukkan pangkat : ";
            std::cin >> num2;
            hasil = pow(num1,num2);
            std::cout << "Hasil : " << hasil;
            break;
        case 6:
            system("CLS");
            std::cout << "Terima kasih telah menggunakan :)";
            
            break;
    }


}