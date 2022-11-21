//Listing 151.c++ - Reading in a character entered by the user.
/*Reading input by calling getc() */




#include <iostream>



using namespace std;

int main() {
       char ch;
   cout<<"Please type in one character:\n";
    ch = getc( stdin );
   cout<<"The character you just entered is: "<<ch<<endl;
    return 0;
}