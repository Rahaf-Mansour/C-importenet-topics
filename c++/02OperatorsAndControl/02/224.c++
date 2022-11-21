//Listing 224.c++  - Adding conditions to a for loop.
#include <iostream>

using namespace std;

int main() {
  int c;

    cout<<"Enter a character:\n(enter x to exit)\n";
     for ( c=' '; c != 'x'; ) {
       c = getc(stdin);

       putchar(c);
    }
    cout<<"\nOut of the for loop. Bye!\n";
    return 0;

}