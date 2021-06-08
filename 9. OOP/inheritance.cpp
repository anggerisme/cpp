#include <iostream>
#include <string>

using namespace std;

class Person{
    public:
        string name;
        int age;

        void setValue(string name, int age){
            this->name = name;
            this->age = age;
        }
};

class Student: public Person{
    public:
        int id;
        void setID(int id){
            this->id = id;
        }

        void introduce(){
            cout << "Nama : " << name << endl;
            cout << "Umur : " << age << endl;
            cout << "ID : " << id << endl;
        }
};

int main(){
    Student Andi;
    Andi.setValue("Andi", 23);
    Andi.setID(123);
    Andi.introduce();
}