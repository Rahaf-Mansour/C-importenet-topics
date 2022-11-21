//Listing 323.c++ - Referencing an array with a pointer.

#include <iostream>

using namespace std;

int main() {
  int *ptr_int;
     int list_int[10];
     int i;

    for (i=0; i<10; i++)        list_int[i] = i + 1;
    
    ptr_int = list_int;
    cout<< "The start address of the array: "<< ptr_int <<endl;
    cout<< "The value of the first element: "<< *ptr_int<<endl;
    ptr_int = &list_int[0];
    cout<< "The address of the first element: " << ptr_int << endl;
    cout<< "The value of the first element: " << *ptr_int << endl;
    return 0;
}