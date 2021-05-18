#include <iostream>
#include <cstdlib> // rand()

using namespace std;

int main(){
    char lanjut;

    system("cls");
    while(true){
        cout << "mainkan dadu [y/n]";
        cin >> lanjut;
        if(lanjut == 'y'){
        cout << 1+(rand() % 6) << "\n";
        }
        else {
            system("cls");
            break;
        }
    }
    
}