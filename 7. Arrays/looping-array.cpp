#include <iostream>
#include <array>
using namespace std;

int main(){
    int arr[]= {0, 1, 2, 3, 4, 5};
    for (int nilai : arr){
        /* Tidak dapat memanipulasi nilai array karena
        alamatnya tetap/konstan */
        
        cout << "Nilai : "<< nilai << " " ;
        cout << "Alamat : " << &nilai << endl;
        nilai = 2; // Tidak akan merubah nilai array
    
        }
        cout << endl << endl;
        for (int &nilairef : arr){
            nilairef *= 2; // Menggunakan dereference akan mengubah nilai
            cout << "Alamat : " << &nilairef << "  Nilai : " << nilairef << endl;

        }
}
