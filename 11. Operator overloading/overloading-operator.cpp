#include <iostream>
#include <string>

using namespace std;

class Marks{
    public:
        int a, b;

        Marks () : a(0), b(0){}

        Marks (int a, int b){
            this->a = a;
            this->b = b;
        }

        Marks operator+(Marks m){
            Marks temp;
            temp.a = a + m.a;
            temp.b = b + m.b;

            return temp;
        }

        void Display(){
            cout << this->a << endl;
            cout << this->b << endl;
        }
};

int main(){
    Marks m1(10, 20), m2(30, 40);
    Marks m3 = m1 + m2;
    m3.Display();
}