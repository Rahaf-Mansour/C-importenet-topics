//Listing 321.c++ - Initializing an array.

#include <iostream>

using namespace std;

int main() {
    int i;
     int list_int[10];

     for (i=0; i<10; i++){
       list_int[i] = i + 1;
       cout<<"list_int[ " << i << " ]is initialized with "<< list_int[i] <<endl;
    }
    return 0;
}