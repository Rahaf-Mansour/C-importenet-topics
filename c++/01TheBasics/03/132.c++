// Listing 132.c++ - A C program that calculates an addition and prints the result to the screen.
/* Calculate an addition and print out the result */


#include <iostream>


using namespace std;


    int integer_add( int x, int y )
  {
     int result;
     result = x + y;
     return result;
  }

 int main()
 {
    int sum;

    sum = integer_add( 5, 12);
    cout<<"The addition of 5 and 12 is  "<<sum;
    return 0;
 }