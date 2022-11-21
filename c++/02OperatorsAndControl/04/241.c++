//Listing 241.c++ - Modifying data with signed and unsigned.
#include <iostream>



using namespace std;

int main() {
        signed char  ch;
     int          x;
     unsigned int y;

    ch = 0xFF;
    x = 0xFFFF;
    y = 0xFFFFu;
    cout<<"The decimal of signed 0xFF is "<< ch<<endl;
    cout<<"The decimal of signed 0xFFFF is "<<x<<endl;
    cout<<"The decimal of unsigned 0xFFFFu is "<< y<<endl;
    cout<<"The hex of decimal 12345 is 0x"<< 12345<<endl;
    cout<<"The hex of decimal -12345 is 0x"<< -12345<<endl;
    return 0;

}