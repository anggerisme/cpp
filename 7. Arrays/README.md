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

# Sorting Arrays

Sorting arrays dapat dilakukan dengan `std::sort` (_built-in function_) yang sudah disediakan di file header `algorithm` bawaan c++ 11.

```c++
sort(array.begin(), array.end())
atau bisa ditulis
sort(begin(array), end(array));
```

Keterangan :

1. Parameter pertama array.begin() akan men-_set_ pointer ke elemen pertama dari array yang ingin di urutkan. Jadi pengurutan dimulai dari sana. Jika kita ingin pengurutan dimulai dari elemen kedua maka tinggal tambahkan satu/berapapun

```c++
sort(array.begin()+1, array.end()+SIZE)
```

`array.SIZE` artinya kita memberitahu compiler bahwa pengurutan sampai pada akhir dari array.

# Binary Search

Adalah metode untuk mencari elemen dalam sebuah _sorted array_ secara berulang membagi 2 array dan mencari di setengahnya. Metode ini dimulai dengan membagi array dalam 2 bagian, jika data yang dimasukkan (yang ingin dicari) lebih besar dari salah satu bagian setengah itu maka akan di pilih setengah yang besar itu jika tidak maka setengah yang lain akan dipertimbangkan.

## binary_search()

Built in function di c++ yang digunakan untuk mengecheck apakah elemen di dalam array [first, last] sama dengan elemen yang ingin dicari. `binary_search()` akan mengembalikan nilai `true` jika ditemukan, dan `false` jika tidak ditemukan.
