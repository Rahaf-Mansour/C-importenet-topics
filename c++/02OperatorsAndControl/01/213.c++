//Listing 213.c++ - Results produced by relational expressions.
#include <iostream>

using namespace std;

int main() {
int x, y;
double z;

    x = 7;
    y = 25;
    z = 24.46;
    cout<<"Given x = "<<x<< " ,y = "<<y<< " and z = "<<z<<endl;
   cout<<"x >= y  produces: "<< (x >= y) <<endl;
    cout<<"x == y  produces: "<< (x == y)<<endl;
   cout<<"x < z   produces: "<< (x < z)<<endl;
    cout<<"y > z   produces: "<< (y > z)<<endl;
   cout<<"x != y - 18  produces:"<<( x != y - 18) <<endl;
    cout<<"x + y != z   produces: "<< (x + y != z)<<endl;
    return 0;
}