#include <iostream>

using namespace std;

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

int main(){
    Kotak *p = fun(); 

    cout << p->l;

    return 0;
}
