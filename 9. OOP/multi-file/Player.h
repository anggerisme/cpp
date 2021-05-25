#include <string>
#include <iostream>
// #include <iostream>
/*
    Deklarasi class
*/

class Player{
    public:
        std::string name;

        Player(const char *name);// Prototype
        void display();
        void set_name(const char *name);
};