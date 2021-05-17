#include <iostream>

int main(){
    double height, weight, bmi;

    std::cout << "Masukkan tinggi anda : (m)" ;
    std::cin >> height;

    std::cout << "Masukkan berat anda (kg) :" ;
    std::cin >> weight;

    bmi = weight / (height * height);
    std::cout << "BMI anda :" << bmi;
}