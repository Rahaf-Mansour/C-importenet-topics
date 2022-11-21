//Listing 244.c++ - Calculating trigonometric values with sin(), cos(), and tan().
#include <iostream>
#include <math.h>
using namespace std;

int main() {
     double x;

    x = 45.0;                 /* 45 degree */
    x *= 3.141593 / 180.0;    /* convert to radians */
    cout<<"The sine of 45 is:    "<< sin(x)<<endl;
    cout<<"The cosine of 45 is:  "<< cos(x)<<endl;
   cout<<"The tangent of 45 is: "<< tan(x)<<endl;
    return 0;
}