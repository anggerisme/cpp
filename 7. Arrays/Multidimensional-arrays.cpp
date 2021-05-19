#include <iostream>
using namespace std;

void printArray(int *a, int baris, int kolom){
    int index = 0;
    for (int i = 0; i < baris; i++){
        for (int j = 0; j < kolom; j++){
            cout << *(a+index) << " ";
            index++;
        }
        cout << endl;
    }
}

int main(){

    int array[] = {{1, 5}, 
                   {6, 4}};
    // cout << sizeof(array);
    printArray(array, 2, 2);
}