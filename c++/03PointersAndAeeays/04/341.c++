//Listing 341.c++ - Printing out variables with different scope levels.


#include <iostream>
#include<cstring>

using namespace std;

int main() {
int i = 32;   /* block scope 1*/

   //  printf("Within the outer block: i=%d\n", i);

    {    /* the beginning of the inner block */
      int i, j;    /* block scope 2, int i hides the outer int i*/

      cout<<"Within the inner block:\n";
      for (i=0, j=10; i<=10; i++, j--)
          cout<<"i="<<i<<",\t"<<"j="<<j<<endl;
    }   /* the end of the inner block */

    cout<<"Within the outer block:  i="<< i;
    return 0;
}