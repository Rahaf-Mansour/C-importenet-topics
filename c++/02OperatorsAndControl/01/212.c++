// Listing 212.c++- Using pre- or post-increment and decrement operators.

#include <iostream>

using namespace std;

int main() {
 int w, x, y, z, result;

     w = x = y = z = 1;   /* initialize x and y */
     cout<<"Given w = "<<w<< " , x =" <<x<< " , y = " <<y<< " and z = "<<z<<endl;

    result = ++w;
    cout<<"++w gives:"<<result<<endl;
    result = x++;
   cout<<"x++ gives:"<< result<<endl;
    result = --y;
   cout<<"--y gives: "<< result<<endl;
    result = z--;
   cout<<"z-- gives:"<< result<<endl;
    return 0;
}