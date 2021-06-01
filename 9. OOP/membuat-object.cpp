#include <iostream>
#include <string>

using namespace std;

class DenganConstructor{
    public:
        string data;

        DenganConstructor(string data){
            this->data = data;
        }

        void Show(){
            cout << "Ini adalah data " << this->data << endl;
        }
};

class TanpaConstructor{
    public:
        string data;

        void Show(){
            cout << "Ini adalah data " << this->data << endl;
        }
};

int main(){
    system("cls");
    // 1. Dengan constructor
    DenganConstructor object1 = DenganConstructor("Object 1");
    object1.Show();

    // 2. Dengan constructor tapi lebih singkat
    DenganConstructor object2("Object 2");
    object2.Show();
    
    // 3. Membuat object tanpa constructor
    TanpaConstructor object3;
    object3.data = "Object 3";
    object3.Show();

    // 4. Membuat object di heap
    DenganConstructor *object4 = new DenganConstructor("Object 4");
    
    /* Jika kita compile akan error karena ini adalah object, sedangkan kita membuat object pada heap memory */
    // object4.Show(); // error
    // Solusinya kita bisa deference dulu nilainya sehingga value yang di dalam pointer tersebut bisa di ambil 
    (*object4).Show();
    object4->Show(); // arrow operator, mapping attribut atau function dari pointer

    string data = object4->data;
    cout << data << endl;

    DenganConstructor *object6;
    object6 = new DenganConstructor("Object 6");
    object6->Show();
}