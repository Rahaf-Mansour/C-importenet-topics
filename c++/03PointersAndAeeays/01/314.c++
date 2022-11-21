//Listing 314.c++ - Pointing to the same thing with more than one pointer.

#include <iostream>

using namespace std;

int main() {
   int x;
    int *ptr_1, *ptr_2, *ptr_3;

    x = 1234;
   cout<<"x: address = "<< &x << " content = "<< x <<endl;
   
   
   ptr_1 = &x;
    cout<<"ptr_1: address = "<<  &ptr_1 << "  content =  "<<  ptr_1 <<endl ;
       printf("*ptr_1 => %d\n", *ptr_1); 
       
       
       ptr_2 = &x;
    cout<<"ptr_2: address = " << &ptr_2 << " content = " <<  ptr_2 <<endl ;
       cout<<"*ptr_2 => " << *ptr_2 <<endl;
       
       
                  ptr_3 = ptr_1;
    cout<<"ptr_2: address = " << &ptr_3 << " content = " <<  ptr_3<<endl ;
       cout<<"*ptr_2 => " << *ptr_3 <<endl;
}