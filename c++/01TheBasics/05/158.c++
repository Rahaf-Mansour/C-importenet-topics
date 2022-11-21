//Listing 158.c++ - Using precision specifiers.
/*Using precision specifiers */

#include <iostream>



using namespace std;

int main() {
     int int_num;
     double flt_num;
     int_num = 123;
    flt_num = 123.456789;
    cout<<"Default integer format:    %d"<< int_num <<endl;
    cout<<"With precision specifier:  %2.8d\n"<< int_num<<endl;
    cout<<"Default float format:      %f\n"<< flt_num<<endl;
   cout<<"With precision specifier:  %-10.2f\n"<< flt_num<<endl;
    return 0;

}