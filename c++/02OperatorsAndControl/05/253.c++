//Listing 253.c++ - Using nested if statements.
#include <iostream>

using namespace std;

int main() {
  int i;

     for (i=-5; i<=5; i++){
        if (i > 0)
           if (i%2 == 0)
               cout<<i<<" is an even number.\n" ;
           else
               cout<<i<<" is an odd number.\n";
       else if (i == 0)
           cout<<"The number is zero.\n";
       else
           cout<<"Negative number: "<< i<<endl;
    }
    return 0;
}