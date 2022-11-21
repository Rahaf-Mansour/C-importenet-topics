//Listing 312.c++ - Declaring and assigning values to pointers.

#include <iostream>

using namespace std;

int main() {
       char  c, *ptr_c;
     int   x, *ptr_x;
     float y, *ptr_y;

    c = 'A';
    x = 7;
    y = 123.45;
    
    cout<<"c: address = "<< &c <<" , content =  " << c <<endl;
    cout<<"x: address = "<< &x <<" , content = "<< x <<endl;
    cout<<"y: address = "<< &y << " , content = " << y << endl;
    
    ptr_c = &c;
       cout<<"ptr_c: address = "<< &ptr_c <<"  content = " << ptr_c<<endl;
       cout<<"*ptr_c => "<< *ptr_c <<endl;
       
       
         ptr_x = &x;
       cout<<"ptr_x: address = "<< &ptr_x << " content = "<<  ptr_x << endl;
       cout<<"*ptr_x => " <<  *ptr_x <<endl;
       
       
          ptr_y = &y; 
       cout<<"ptr_y: address = " << &ptr_y << "  content = " <<  ptr_y << endl;
       cout<<"*ptr_y => "<< *ptr_y <<endl;
       
}