// Listing 245.c++ - Applying the pow() and sqrt() functions.
#include <iostream>
#include <math.h>
using namespace std;

int main() {
      double x, y, z;

     x = 64.0;
    y = 3.0;
    z = 0.5;
    cout<<"pow(64.0, 3.0) returns: "<< pow(x, y)<<endl;
    cout<<"sqrt(64.0) returns:     "<< sqrt(x)<<endl;
    cout<<"pow(64.0, 0.5) returns: "<< pow(x, z)<<endl;
    return 0;
}