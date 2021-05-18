#include <iostream>

int main()
{
    int f1 =1;
    int f2 = 0;
    int fn, n;
    
    std::cout << "Masukkan nilai n : ";
    std::cin >> n;
    
    for(int i=1;i<=n;i++){
        fn = f1+f2;
        f2 = f1;
        f1 = fn;
        std::cout << fn << "\n";
    }
    
 
}