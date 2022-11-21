//Listing 324.c++ - Printing out an array of characters.

#include <iostream>

using namespace std;

int main() {
  char array_ch[7] = {'H', 'e', 'l', 'l', 'o', '!', '\0'};
     int i;

     for (i=0; i<7; i++)
       cout<<"array_ch[" <<i<<" ]contains: "<< array_ch[i]<<endl;
       
    /*---  method I ---*/
    cout<< "Put all elements together(Method I):\n";
    for (i=0; i<7; i++)        cout<< array_ch[i];
    
    /*---  method II ---*/
    cout<< "\nPut all elements together(Method II):\n";
    cout<< array_ch ;

    return 0;
}