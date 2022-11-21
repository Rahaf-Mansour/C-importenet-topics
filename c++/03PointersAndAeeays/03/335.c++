//Listing 335.c++ - Using the scanf() function with various format specifiers.


#include <iostream>
#include<cstring>

using namespace std;

int main() {
     char str[80];
     int x, y;
     float z;

    cout<<"Enter two integers separated by a space:\n";
    
    cin >> x >> y;
    
    cout<<"Enter a floating-point number:\n";
    cin >> z;
    
    cout<<"Enter a string:\n";
    cin >> str;
    
    cout<<"Here are what you've entered:\n";
    cout<< x<< "\t" <<  y << "\n" << z << "\n" << str << " \n";
    
    return 0;
}