//Listing 152.c++ - Reading in a character by calling getchar().
/*Reading input by calling getchar() */

#include <iostream>



using namespace std;

int main() {
  int ch1, ch2;
    cout<<"Please type in two characters together: \n";
    ch1 = getc( stdin );
    ch2 = getchar( );
   cout<<"The first character you just entered is: "<< char(ch1) <<endl;
    cout<<"The second character you just entered is: "<< char(ch2) <<endl;
    return 0;
}