#include <iostream>
using namespace std;


// 1. Struct

/*
    typedef struct Kotak{
    int p;
    int l;

}Kotak;

Kotak *fun(){
    Kotak *ptr;
    ptr = new Kotak;
    ptr->p = 10;
    ptr->l = 5;
    // Returning address of objek ptr
    return ptr;
}
*/

// 2. Class

class Kotak{
    // private:
    public:
        int p;
        int l;
        Kotak* fun();
};

Kotak* Kotak::fun(){
    Kotak *ptr;
    ptr = new Kotak;

    ptr->p = 10;
    ptr->l = 5;

    return ptr;
}

int main(){
    Kotak p;
    Kotak *ptr = p.fun(); 
    cout << ptr->l;
    return 0;
}
