#include <stdio.h>
#include <string.h>

int main(){
    // char str[20];
    // strcpy(str, "    Tambahan dari c");
    // puts(str);
    // memset(str, '$', 3);
    // puts(str);
    char src[50] = "karakter ditambahkan";
    char dest[50] = "sdflsdfsfs";
    strcpy(dest, src);
    puts(dest);
    // puts(src);
}