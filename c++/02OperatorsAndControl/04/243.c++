//Listing 243.c++ - Using %hd, %ld, and %lu.
#include <iostream>

using namespace std;

int main() {
  
  short int         x;
     unsigned int      y;
     long int          s;
     unsigned long int t;

    x = 0xFFFF;
    y = 0xFFFFU;
    s = 0xFFFFFFFFl;
    t = 0xFFFFFFFFL;
    cout<<"The short int of 0xFFFF is "<< x<<endl;
  cout<<"The unsigned int of 0xFFFF is "<< y <<endl;
    cout<<"The long int of 0xFFFFFFFF is "<< s<<endl;
    cout<<"The unsigned long int of 0xFFFFFFFF is "<< t<<endl;
    return 0;
}