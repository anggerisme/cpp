#include <iostream>

using namespace std;

class A{
    public:
        int a=10;
        void show(A b){
            cout << b.a;
        }
};

int main(){
    A a;
    a.show(a);
}