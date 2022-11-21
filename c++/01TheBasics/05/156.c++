//Listing 156.c++ - Specifying the minimum field width.
/*Specifying minimum field width */

#include <iostream>



using namespace std;

int main() {
 int num1, num2;
    num1 = 12;
    num2 = 12345;

    cout<<"%d\n"<< num1;
    cout<<"%d\n"<< num2;
    cout<<"%5d\n"<< num1;
    cout<<"%05d\n"<< num1;
    cout<<"%2d\n"<< num2;
    return 0;
}