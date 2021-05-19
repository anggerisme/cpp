# Arrays as a function arguments

```c++
void arr2(int arr[]){
    for (int i = 0; i <5;i++){
        cout << *arr << " ";
    }
}

int main(){
    int arr[5] = {1, 2, 3,4,5};
    arr2(arr);
}
```

```c++
output :
1 1 1 1 1
```

Jika kita menyertakan array sebagai function argumen maka yang sebenarnya terjadi adalah compiler akan menginterpretasikan `int arr[]` **sebagai pointer** yang mengambil **data berupa alamat memory** dari variable `int arr[]` pada function main. Sehingga function `arr2` diatas hanya akan mengambil nilai(_jika ditambahkan_)/alamat(_jika ditulis nama array-nya saja_) pertama dari array yang dimasukkan pada function. Ini juga di sebut _call by reference_

```c++
void arr (int arr[])
Diinterpretasikan oleh compiler seperti ini
void arr (int *arr)
```

Jadi dari sini kita tidak tahu berapa persis ukuran/total dari keseluruhan array. Solusinya kita bisa tambahkan parameter `size` di function `main` agar compiler tahu berapa persis nilai array yang akan dimasukkan/pass ke dalam function `arr2[]`

```c++
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
```
