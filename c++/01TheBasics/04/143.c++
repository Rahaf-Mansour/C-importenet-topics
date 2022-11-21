//Listing 143.c++ - Showing the numeric values of characters.
/*Showing the numeric values of characters */
#include <stdio.h>




#include <iostream>



using namespace std;

int main() {
       char c1;
     char c2;

     c1 = 'A';
     c2 = 'a';
     cout<<"The numeric value of A is: "<< int(c1)<<endl;
     cout<<"The numeric value of a is:"<< int(c2)<<endl;
     return 0;
}