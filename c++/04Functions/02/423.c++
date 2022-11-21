//Listing 423.c++ - Accessing arrays by using pointers.
#include <iostream>
using namespace std;


 int main ()
  {
    char str[] = "It's a string!";
     char *ptr_str;
     int list[] = {1, 2, 3, 4, 5};
     int *ptr_int;

    /* access char array */
    ptr_str = str;
    cout<<"Before the change, str contains: "<< str <<endl;
    cout<<"Before the change, str[5] contains: "<< str[5]<<endl;
        *(ptr_str + 5) = 'A';
    cout<<"After the change, str[5] contains: "<< str[5]<<endl;
    cout<<"After the change, str contains: "<< str<<endl;
       /* access int array */
    ptr_int = list;
    cout<<"Before the change, list[2] contains:"<< list[2]<<endl;
    *(ptr_int + 2) = -3;
    cout<<"After the change, list[2] contains: "<< list[2]<<endl;

    return 0;

 }