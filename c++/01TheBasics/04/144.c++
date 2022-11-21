//Listing 144.c++ - Printing out results of integer and floating-point divisions.
/*Integer vs. floating-point divisions*/






#include <iostream>



using namespace std;

int main() {
       int int_num1, int_num2, int_num3;   /* Declare integer variables */
    float flt_num1, flt_num2, flt_num3; /* Declare floating-point variables */

    int_num1 = 32 / 10;    /* Both divisor and dividend are integers */
    flt_num1 = 32 / 10;
    int_num2 = 32.0 / 10;  /* The divisor is an integer */
    flt_num2 = 32.0 / 10;
    int_num3 = 32 / 10.0;  /* The dividend is an integer */
    flt_num3 = 32 / 10.0;

   cout<<"The integer divis. of 32/10 is:"<< int_num1<<endl;
    cout<<"The floating-point divis. of 32/10 is: "<< flt_num1<<endl;
    cout<<"The integer divis. of 32.0/10 is: "<< int_num2<<endl;
    cout<<"The floating-point divis. of 32.0/10 is: "<<flt_num2<<endl;
    cout<<"The integer divis. of 32/10.0 is:"<< int_num3<<endl;
   cout<<"The floating-point divis. of 32/10.0 is: "<< flt_num3<<endl;
    return 0;
}