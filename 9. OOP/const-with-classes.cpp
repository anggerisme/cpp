#include <iostream>
#include <string>

using namespace std;

class Shape{
    // private:
    public:
        string segitiga, kotak;
        
        string get_name() const{
            return segitiga;
        }

        Shape(string segitiga, string kotak){
            this->segitiga = segitiga;
            this->kotak = kotak;
        }
        
        Shape(const Shape &shape_1){
            cout << shape_1.segitiga << endl;
        }

        void show() {
            cout << segitiga << endl;
            cout << kotak << endl;
        }

};

void display_name(const Shape &shape_2){
        cout << shape_2.get_name() << endl;
}

int main(){
    Shape Shape_1("Segitiga", "Kotak");
    // Shape_1.show();

    Shape Shape_2(Shape_1);
    // Shape_2.show();

    display_name(Shape_2);
}