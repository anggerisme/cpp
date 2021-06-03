#include <iostream>

using namespace std;

class Teman {
    private:
        int uang;
    public:
        Teman(int uang){
            this->uang = uang; 
    }
    // Class Teman_lama;
    friend class Teman_lama;
    
};
 
class Teman_lama{
    private:
        int uang_b;
    public:
        void minta_uang(Teman &kan_Teman){
            /*
                Karena kita sudah mempunyai class prototype di dalam class Teman maka kita bisa mengakses datanya
            */
            this->uang_b = kan_Teman.uang - 3;
            cout << this->uang_b << endl;
        }
};

int main(){
    Teman Andi(5);
    Teman_lama Budi;
    
    Budi.minta_uang(Andi);
    return 0;
}