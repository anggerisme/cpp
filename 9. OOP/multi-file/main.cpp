#include <iostream>
#include <string>

// Eksternal definition
#include "Player.h" // Tanda kutip menandakan bahwa header file bukan standard header c++

using namespace std;

int main(){
    Player player1 = Player("Stack");
    // Player *player2 = new Player("Heap");
    // player1.set_name("Anggear");
    player1.display();
    // player2->display();
    return 0;
}

