#include <iostream>
#include <string>

using namespace std;

class Teman {
    private:
        int uang;
    public:
        Teman(int uang){
            this->uang = uang; 
    }
    
    friend void minta_uang(Teman kan_Teman);
};

void minta_uang(Teman kan_Teman){
    int uang_b;
    /*
                Karena kita sudah mempunyai function prototype di dalam class Teman maka kita bisa mengakses datanya
            */
    uang_b = kan_Teman.uang - 3;
    cout << uang_b << endl;
}

int main(){
    Teman Andi(5);
    minta_uang(Andi);

    return 0;
}