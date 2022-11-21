//Listing 226.c++ - Using a do-while loop.
#include <iostream>

using namespace std;

int main() {
 
     int i;

     i = 65;
     do {
       cout<<"The numeric value of "<< char(i) <<" is "<<i<<endl;
       i++;
    } while (i<72);
    return 0;
}