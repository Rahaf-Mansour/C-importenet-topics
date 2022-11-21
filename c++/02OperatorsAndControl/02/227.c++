//Listing 227.c++ - Using nested loops.
#include <iostream>

using namespace std;

int main() {
 
     int i, j;


     for (i=1; i<=3; i++) {   /* outer loop */

        cout<<"The start of iteration " << i<< " of the outer loop.\n";
       for (j=1; j<=4; j++)  /* inner loop */
          cout<<"    Iteration " <<j<< " of the inner loop.\n";
       cout<<"The end of iteration " << i << " of the outer loop.\n" ;
    }
    return 0;
}