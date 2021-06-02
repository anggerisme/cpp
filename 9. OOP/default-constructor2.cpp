#include <iostream>
#include <string>

using namespace std;

class Shape{
    public:
        string segitiga, kotak, lingkaran;

        // Ini adalah nilai default apabila kita tidak memasukkan argumen secara eksplisit. 
        Shape() : segitiga{}, kotak{}, lingkaran{}{}

        // Shape(string input_segitiga) : Shape() {
        //     this->segitiga = input_segitiga;
        //     // cout << this->segitiga << endl;
        // }

        void Show(){
            cout << this->segitiga << endl;
            cout << this->kotak << endl;
            cout << this->lingkaran << endl;
        }
};

int main(){
    Shape bentuk1;
    bentuk1.Show();
    // Constructor akan dipanggil berdasarkan kecocokan parameter yang dipunyainya.
    Shape bentuk2("Segitiga", "Kotak");
    bentuk2.Show();
}
