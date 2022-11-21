//Listing 334.c++ - Using the gets() and puts() functions.


#include <iostream>
#include<cstring>

using namespace std;

int main() {
  char str[80];
     int i, delt = 'a' - 'A';

     cout<<"Enter a string less than 80 characters:\n"<<endl;
     fgets(str, sizeof(str), stdin);
     
   // gets( str );
    i = 0;
    while (str[i]){
      if ((str[i] >= 'a') && (str[i] <= 'z'))
         str[i] -= delt;  /* convert to upper case */
      ++i;
    }
    
    cout<<"The entered string is (in uppercase):\n";
    puts( str );
    return 0;
}