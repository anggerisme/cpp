#include <iostream>
#include <string>

using namespace std;

class Parent{
    protected:
        int id_protected;
};

class Child : public Parent{
    public:
        void setID(int id){
            id_protected = id;
        }
        void displayid(){
            cout << "ID Protected : " << id_protected << endl;
        }
};

int main(){
    Child obj1;
    obj1.setID(81);
    obj1.displayid();
}