//Listing 256.c++ - Breaking an infinite loop.
#include <iostream>

using namespace std;

int main() {
 int c;

     cout<<"Enter a character:\n(enter x to exit)\n";
     while (1) {  

       c = getc(stdin);
       if (c == 'x')
          break;
    }
        cout<<"Break the infinite while loop. Bye!\n";
    return 0;
}