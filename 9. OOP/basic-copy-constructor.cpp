#include <iostream>
#include <string>
#include <cstring>

using namespace std;

// -------- Basic pointer ---------

// int main(){
//     int c = 10;
//     int *a = &c;
//     int *b = a;
    
//     *b = 19;

//     /*
    
//         Ketiganya mempunyai memory address yg sama. Sehingga mengubah nilai b akan mengubah nilai a dan c.
//     */
//     cout << &c << endl;    
//     cout << a << endl;
//     cout << b << endl;
//     //     cout << &b << endl;
//     cout << *a << endl;
//     cout << *b << endl;
//     //     cout << c << endl;
    
    
// }



// ----------- Copy constructor ----------


class String {
    private:
        char *m_Buffer;
        unsigned int m_Size;
    public:
        String(const char *string){
            m_Size = strlen(string);
            m_Buffer = new char[m_Size + 1];
            memcpy(m_Buffer, string, m_Size);
            m_Buffer[m_Size] = 0;
        }

        friend ostream &operator<<(ostream &stream, const String &string);
};

ostream& operator << (ostream &stream, const String &string){
    stream << string.m_Buffer;
    return stream;
}

int main(){
    String string = "Hello";
    cout << string << endl;

}