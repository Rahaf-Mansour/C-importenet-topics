//Listing 235.c++ - Using bitwise operators.

#include <iostream>



using namespace std;

int main() {
        int   x, y, z;

     x = 4321;
     y = 5678;
    cout<<"Given x = "<<x <<" i.e., 0X%04X\n"<< x;
    cout<<"      y = %u"<<y<<" i.e., 0X%04X\n"<< y;
    z = x & y;
    cout<<"x & y  returns: %6u"<<z<< "i.e., 0X%04X\n"<< z;
    z = x | y;
    cout<<<"x | y  returns: %6u"<<z<<" i.e., 0X%04X\n"<< z;
    z = x ^ y;
    cout<<"x ^ y  returns: %6u"<<z<<" i.e., 0X%04X\n"<<  z;
    cout<<"  ~x   returns: %6u"<< ~x<<"i.e., 0X%04X\n"<< ~x;
    return 0;

}