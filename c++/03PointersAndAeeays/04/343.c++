//Listing 343.c++ - Using the static specifier.


#include <iostream>


using namespace std;


  int add_two(int x, int y)
  {
     static int counter = 1;

     cout<<"This is the function call of "<< counter++ <<endl;
     return (x + y);
 }
 /* the main function */
 int main()
 {
     
    int i, j;

    for (i=0, j=5; i<5; i++, j--)
    
       cout<<"the addition of "<< i << " and " <<j << "\n"<<
       add_two(i, j)<<endl;
 
 
    return 0;
 }