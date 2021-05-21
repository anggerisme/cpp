#include <stdio.h>
#include <string.h>

int main(){
    system("cls");
    // char hello[5] = {'H', 'e', 'l', 'l', 'o'};
    // char hello[] = "Hello";
    // for (int i = 0; i < sizeof(hello);i++){

    //     printf("%c\n", hello[i]);
    // }
    // hello[5] = 'y'; // problem
    // printf("%s\n", hello);
    // printf("%d", sizeof(hello)); //6 + null

    /////// Inserting character that allowed ///////////
    /*
    char hello[8]={"Hello"};
    hello[5] = 'y'; // It's fine
    for (int i = 0; i < sizeof(hello);i++){
        printf("%d\n", hello[i]);
    }
    printf("%s", hello); */

    ///////// Declaring variable ////////////
    char nama[8];
    // nama = "Angger" // Ilegal
    /*---Allowed
    strcpy(nama, "Angger");
    for (int i = 0; i < sizeof(nama);i++){

        printf("%c", nama[i]);
    }
    ---*/ 
}