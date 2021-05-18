#include <iostream>

int main(){
    int password;

    std::cout << "Selamat datang di Bank Cpp\nSilahkan masukkan password : ";
    std::cin >> password;

    while (password != 1234){
        int i;
        int tries = 3;
        for (i = 1; i <= 3; i++){
            tries--;
            if (tries == 0)
            {
                std::cout << "Kesempatan habis, coba lagi nanti!";
                exit(1);
            }
            else
                    std::cout << "password salah! Kesempatan tersisa : "  << tries << "\nMasukkan sekali lagi : ";
                    std::cin >> password;
            
            }
            
        }
        

    std::cout << "Anda berhasil login";
}