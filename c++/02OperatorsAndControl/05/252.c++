//Listing 252.c++ - Using the if-else statement.
#include <iostream>

using namespace std;

int main() {
  int i;

     cout<<"Even Number   Odd Number\n";
     for (i=0; i<10; i++)

       if (i%2 == 0)
         cout<<i;
       else
          cout<<"                     "<< i<<endl;

    return 0;
}