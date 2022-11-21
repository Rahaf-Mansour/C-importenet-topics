//Listing 311.c++ - Obtaining the left values of variables.

#include <iostream>

using namespace std;

int main() {
    char  c;
     int   x;
     float y;

   cout<<"c: address = "<<&c<<"  content ="<<c<<endl;;  // %x, %d
   cout<<"c: address = "<<&c<< " content = " << c<<endl;
   cout<<"c: address = "<<&c<< " content = "<<c<<endl;
    
   cout<<"x: address = "<<&x<< " content = "<< x<<endl;
   cout<<"y: address = "<<&y<< " content = "<<y<<endl ;
    
    c = 'A';
    x = 7;
    y = 123.45;
    
    cout<<"c: address = "<<&c<< " content = "<<c<<endl;
    cout<<"x: address = "<<&x<< " content = "<<x<< endl;
    cout<<"y: address = "<<&y<<"  content = "<<y<< endl;
}