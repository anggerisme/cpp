#include "Player.h"
#include <iostream>

using namespace std;
/*
    Diisi Penjabaran function dari sebuah class

*/

// Penjabaran method
Player::Player(const char *name){
    this->set_name(name);
}

void Player::display(){
    cout << "Nama Player : "<< name << endl;
}

void Player::set_name(const char *name){
    this->name = name;
}