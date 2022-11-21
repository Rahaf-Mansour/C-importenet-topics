//Listing 251.c++ - Using the if statement in decision making.
#include <iostream>
#include <math.h>
using namespace std;

int main() {
       int i;

     cout<<"Integers that can be divided by both 2 and 3\n";
     cout<<"(within the range of 0 to 100):\n";
    for (i=0; i<=100; i++){
       if ((i%2 == 0) && (i%3 == 0))
         cout<<i<< endl;
   }
   return 0;
}