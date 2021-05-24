#include <iostream>
#include <string>

using namespace std;

class Player{
    public:
        string name;
        int health;
        int xp;

        void talk(string text_to_say){
            cout << name << " says " << text_to_say << endl;
        };
        bool is_dead();
};

class Account{
    public:
        string name;
        double balance;
};

int main(){
    system("cls");
    Account angger_account;
    angger_account.name = "Angger's Account";

    cout << angger_account.name;

    Player angger;
    angger.name = "Angger";
    angger.talk("Hello");
    // Enemey is not an object but pointer to an object
    Player *enemy = new Player;
    enemy->name = "Enemy";
    enemy->talk("I will destroy you!");
    
    return 0;
}