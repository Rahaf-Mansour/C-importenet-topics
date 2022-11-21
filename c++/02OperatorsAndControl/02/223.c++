//Listing 223.c++ - Another example of using multiple expressions in the for statement.

#include <iostream>

using namespace std;

int main() {
     int i, j;	

    for (i=0, j=1; i<8; i++, j++)
        cout<<j <<   " - "  << i <<  " = "<< j-i<<endl;
    return 0;

}