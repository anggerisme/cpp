#include <iostream>
using namespace std;

void arr2(int arr[], int size){
    for (int i = 0; i <size;i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[5] = {1, 2, 3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    arr2(arr, size);
}