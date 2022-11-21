//Listing 236.c++ - Using the shift operators.
#include <iostream>



using namespace std;

int main() {
        int   x, y, z;

     x = 255;
     y = 5;
    cout<<"Given x = %4d"<<x<<" i.e., 0X%04X"<< x<<endl;
    cout<<"      y = %4d,"<<y<<" i.e., 0X%04X\n"<< y<<endl;
    z = x >> y;
   cout<<"x >> y  returns: %6d,"<<z<<" i.e., 0X%04X\n"<<z<<endl;
    z = x << y;
    cout<<"x << y  returns: %6d,"<<z<< "i.e., 0X%04X\n"<<  z<<endl;
    return 0;

}