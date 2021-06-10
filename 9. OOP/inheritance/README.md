# Method overriden

Jika ada method yang sama baik itu di class atau pun di _derived_ class maka method yang ada di sub-class lah yang akan di eksekusi sedangkan method yang ada di class akan di overwrite.

```c++
class Ayah{
    public:
        void show(){
            cout << "Ini base constructor!"<< endl;
        }
};

class Anak: public Ayah{
    public:
        void show(){
            cout << "Ini sub class constructor!"<< endl;
    }
};

int main(){
    Anak Andi;
    Andi.show();
}
```

Kedua method `show()` mempunyai signature yang sama baik itu dari nama(_identifier_) dan jumlah parameter. Akibatnya method yang ada di dalam derived classlah yang akan di eksekusi. Bagaimana jika kita ingin mengeksekusi method yang ter-_overwrite_ tersebut? yaitu cukup dengan menggunakan scope resolution operator `::`

```c++
int main(){
    Anak Andi;
    Andi.show(); // Method sub-Class
    Andi.Ayah::show(); // Method Class
}

```
