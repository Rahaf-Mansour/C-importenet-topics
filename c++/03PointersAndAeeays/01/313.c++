//Listing 313.c++ - Changing variable values via pointers.

#include <iostream>

using namespace std;

int main() {
       char  c,  *ptr_c;

    c = 'A';
    cout<<"c: address = "<< &c << "content =  " << c<<endl;
    ptr_c = &c;
    cout<<"ptr_c: address = "<< &ptr_c << "content = "<<  ptr_c <<endl;
    cout<<"*ptr_c => "<< *ptr_c<<endl;
    
    
       *ptr_c = 'B';
    cout<<"ptr_c: address = "<< &ptr_c << "content = " <<  ptr_c << endl;
    cout<<"*ptr_c => "<< *ptr_c << endl;
    cout<<"c: address = " << &c <<"content = " << c << endl;
    return 0;
}