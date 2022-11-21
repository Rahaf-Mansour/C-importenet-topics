//Listing 12.2.c++ Calculating the size of an array.

#include <iostream>

using namespace std;

int main() {
   int total_byte;
     int list_int[10];

    total_byte = sizeof (int) * 10;
    cout<< "The size of int is "<< sizeof (int) << " -byte long.\n"<<endl;
    cout<< "The array of 10 ints has total " << total_byte << " bytes." << endl;
cout<< "The address of the first element: "<< &list_int[0] <<endl;
   cout<<"The address of the last element: "<< &list_int[9] <<endl;
cout<< "The address of the first element:" << &list_int[0]<< endl;
  cout<< "The address of the last element:  "<< &list_int[9]<<endl;
    return 0;
}