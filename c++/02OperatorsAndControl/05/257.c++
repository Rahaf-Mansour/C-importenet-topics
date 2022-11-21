//Listing 257.c++ - Using the continue statement.
#include <iostream>

using namespace std;

int main() {
 int i, sum;

     sum = 0;
     for (i=1; i<8; i++){
       if ((i==3) || (i==5))
          continue;
       sum += i;
    }
    cout<<"The sum of 1, 2, 4, 6, and 7 is: "<< sum<<endl;
    return 0;
}