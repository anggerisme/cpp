#include <iostream>

using namespace std;

class A;
class B;

class B{
    public:
        int x;

        void getdata(int n){
            x = n;
        }
        friend int sum(A, B);
};

class A {
    public:
        int y;

        void getdata(int m){
            y = m;
        }

        friend int sum(A, B);
};

int sum(A m, B n){
    int result;
    result = m.y + n.x;
    return result;
}

int main(){
    B b;
    A a;
    a.getdata(5);
    b.getdata(4);
    cout << "The sum is : " << sum(a, b);
    return 0;
}
