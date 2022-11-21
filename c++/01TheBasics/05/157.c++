//Listing 157.c++ - Left- or right-justified output.
/*Aligning output */

#include <iostream>



using namespace std;

int main() {
 int num1, num2, num3, num4, num5;
    num1 = 1;
    num2 = 12;
    num3 = 123;
    num4 = 1234;
    num5 = 12345;
    cout<<"%8d"<< num1<<"%-8d"<< num1<<endl;
    cout<<"%8d"<< num2<<  "%-8d"<< num2<<endl;
    cout<<"%8d"<< num3<<  "%-8d"<< num3<<endl;
    cout<<"%8d"<< num4<<  "%-8d"<< num4<<endl;
    cout<<"%8d"<< num5<<  "%-8d"<< num5<<endl;
    return 0;
}