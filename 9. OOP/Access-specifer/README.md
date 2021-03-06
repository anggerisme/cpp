# Change access level of base class members in derived class

Kita tahu bahwa data member dari sebuah class Parent akan memiliki sifat/perilaku yang _accessbility_-nya tergantung dari access specifier class turunanya, sehingga data member tersebut apabila ingin diakses kita harus memperhatikan access specifier dari sub-class tersebut. Jadi, Walaupun class parent-nya memiliki data member `public` tapi jika sub-class classnya `private` (secara default) maka data member dari objek yang dibuat dari sub-class tersebut tidak akan bisa diakses

Bagaimana apabila kita ingin mengaksesnya? Kita gunakan keyword `using` diikuti nama class parent-nya kemudian tambahkan scope resolution operator `::`.

```c++
#include <iostream>
#include <string>

using namespace std;

class Person{
    protected:
        string name;
        void setValue(string name){
            this->name = name;
        }
};

class Student: Person{
    public:
        using Person::name;
        using Person::setValue; // method cukup tulis nama/identifiernya saja

};

int main(){
    Student Andi;
    Andi.setValue("Andi");
    cout << Andi.name << endl;
}
```

# Urutan eksekusi constructor dan destructor di inheritance

Pada saat sebuah objek dibuat dari sub-class (_derived class_) maka secara otomatis sebuah constructor akan dipanggil diikuti dengan destructor sesaat setelah constructor _out of the scope_.

```c++
class Person{
    public:
        Person(){
            cout << "Constructor dari class Person" << endl;
        }
        ~Person(){
            cout << "Destructor dari class Person" << endl;
        }
};

class Student: Person{
    public:
        Student(){
            cout << "Constructor dari class Student" << endl;
        }
        ~Student(){
            cout << "Destructor dari class Student" << endl;
        }

};

int main(){
    Student Andi;
}
```

```c++
Output :
Constructor dari class Person
Constructor dari class Student
Destructor dari class Student
Destructor dari class Person
```

Kode diatas menunjukkan bahwa Constructor dari class Parent akan dieksekusi terlebih dahulu kemudian diikuti Constructor dari sub-Class, tetapi untuk destructor akan terlebih dahulu dieksekusi setelah constructor dari sub-class tersebut _out of the scope_ kemudian diakhiri dengan Destructor dari class Parent.
