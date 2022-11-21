//Listing 211.c++ - Using arithmetic assignment operators.

#include <iostream>

using namespace std;

int main() {
int x, y, z;

     x = 1;   /* initialize x */
     y = 3;   /* initialize y */
    z = 10;  /* initialize z */
   cout<<"Given x =" <<x<<", y =" <<y<< ",and z ="<<z<<endl;

    x = x + y;
   cout<<"x = x + y  assigns " <<x<<" to x;\n";

    x = 1;  /* reset x */
    x += y;
    cout<<"x += y  assigns "<<x<<"to x;\n";

    x = 1;  /* reset x */
    z = z * x + y;
   cout<<"z = z * x + y  assigns "<<z<<" to z;\n";

    z = 10;  /* reset z */
    z = z * (x + y);
    cout<<"z = z * (x + y) assigns "<<z<<" to z;\n";

    z = 10;  /* reset z */
    z *= x + y;
    cout<<"z *= x + y assigns "<<z<<" to z.\n";

    return 0;
}