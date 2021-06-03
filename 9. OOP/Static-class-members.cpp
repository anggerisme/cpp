#include <iostream>
using namespace std;

class generatorID{
    private:  
        static int number_generator;
        int member_ID;

    public:
        generatorID(){
            member_ID = number_generator++;
        }

        int getID() const{
            return member_ID;
        }
};

int generatorID::number_generator = 1;

int main(){
    generatorID satu;
    generatorID dua;
    generatorID tiga;

    cout << satu.getID() << endl;
    cout << dua.getID() << endl;
    cout << tiga.getID() << endl;
}
