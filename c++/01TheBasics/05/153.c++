//Listing 153.c++ - Putting a character on the screen.
/*Outputting a character with putc() */

#include <iostream>



using namespace std;

int main() {
    int ch;
    ch = 65;   /* the numeric value of A */
    cout<<"The character that has numeric value of 65 is: ";
    putc(ch, stdout);
    return 0;
}