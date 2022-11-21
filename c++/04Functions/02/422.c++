//Listing 422.c++ - Performing subtraction on pointers.
#include <iostream>
using namespace std;


 int main ()
  {
      int *ptr_int1, *ptr_int2;

     cout<<"The position of ptr_int1: 0x%p\n"<< ptr_int1<<endl;
     ptr_int2 = ptr_int1 + 5;
    cout<<"The position of ptr_int2 = ptr_int1 + 5: 0x%p\n"<< ptr_int2<<endl;
    cout<<"The subtraction of ptr_int2 - ptr_int1: %zu\n"<< ptr_int2 - ptr_int1<<endl;
    ptr_int2 = ptr_int1 - 5;
    cout<<"The position of ptr_int2 = ptr_int1 - 5: 0x%p\n"<< ptr_int2<<endl;
    cout<<"The subtraction of ptr_int2 - ptr_int1: %zu\n"<< ptr_int2 - ptr_int1<<endl;

    return 0;

 }`