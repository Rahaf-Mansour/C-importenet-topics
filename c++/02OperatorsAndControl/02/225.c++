//Listing 225.c++ - Using a while loop.
#include <iostream>

using namespace std;

int main() {
   int c;

     c = ' ';
     cout<<"Enter a character:\n(enter x to exit)\n";
    while (c != 'x') {
       c = getc(stdin);
       putchar(c);
    }
    cout<<"\nOut of the while loop. Bye!\n";
    return 0;
}