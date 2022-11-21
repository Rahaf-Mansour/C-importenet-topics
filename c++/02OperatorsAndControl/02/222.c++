//Listing 222.c++- Adding multiple expressions to the for statement.
#include <iostream>

using namespace std;

int main() {
     int i, j;	

     for (i=0, j=8; i<8; i++, j--)
        cout<<i <<   " + "  << j <<  "="<< i+j<<endl;
    return 0;

}