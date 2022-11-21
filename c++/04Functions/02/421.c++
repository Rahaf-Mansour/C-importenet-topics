//Listing 421.c++ - Moving pointers of different data types.

#include <iostream>
using namespace std;


 int main ()
  {
       char *ptr_ch;
     int *ptr_int;
     double *ptr_db;
     /* char pointer ptr_ch */
      cout<<"Current position of ptr_int: "<< &ptr_int<<endl;
    cout<<"The position after ptr_int + 1: "<< &ptr_int + 1<<endl;
    cout<<"The position after ptr_int + 2: "<< &ptr_int + 2<<endl;
    cout<<"The position after ptr_int - 1: "<< &ptr_int - 1<<endl;
    cout<<"The position after ptr_int - 2: "<<&ptr_int - 2<<endl;
        /* double pointer ptr_ch */
    cout<<"Current position of ptr_db: "<< ptr_db<<endl;
   cout<<"The position after ptr_db + 1:  "<< ptr_db + 1<<endl;
    cout<<"The position after ptr_db + 2: "<< ptr_db + 2<<endl;
    cout<<"The position after ptr_db - 1: "<< ptr_db - 1<<endl;
    cout<<"The position after ptr_db - 2: "<< ptr_db - 2<<endl;

 }