#include <iostream>
using namespace std;

int main(){
    int a=10;
     cout<< &a <<endl;
     cout << a<< endl;
    int *b = &a;
    // *b = 5;
    cout << a << endl;
    cout << *&b << endl;
    
}