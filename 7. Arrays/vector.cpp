#include <vector>
#include <iostream>

using namespace std;

int main(){
    system("CLS");
    // vector<char> vokal;
    // vector<char> vokal{'a', 'i', 'u', 'e', 'o'};
    // cout << vokal[0] << endl;
    // cout << vokal[3] << endl;

    vector<int> nilai{100,94,95,93};
    // cout << nilai.size();

    ///--------- Program untuk menyisipkan nilai baru ----//////

    cout << "Masukkan nilai baru : ";
    int nilaibaru;
    cin >> nilaibaru;

    nilai.push_back(nilaibaru);
    for (size_t i = 0; i < nilai.size();i++){
        cout << nilai[i] << " ";
    }
}