//Listing 413.c - Processing variable arguments..

#include <iostream>
using namespace std;
 #include <cstdarg> 
double AddDouble(int x, ...);

  main ()
  {
     double d1 = 1.5;
    double d2 = 2.5;
    double d3 = 3.5;
    double d4 = 4.5;

    cout<<"Given an argument: "<< d1<<endl;
    cout<<"The result returned by AddDouble() is: "<<AddDouble(1, d1);
    cout<<"Given arguments:"<<d1<< "and "<<  d2<<endl;
   cout<<"The result returned by AddDouble() is:"<<  AddDouble(2, d1, d2)<<endl;
    cout<<"Given arguments: "<<d1<< d2<< "and " << d3<<endl;
    cout<<"The result returned by AddDouble() is: "<<  AddDouble(3, d1, d2, d3)<<endl;
    cout<<"Given arguments: "<<d1<< d2<< d3<< "and "<<  d4<<endl;
    cout<<"The result returned by AddDouble() is:"<<   AddDouble(4, d1, d2, d3, d4)<<endl;
    return 0;
 }
 /* definition of AddDouble() */
 double AddDouble(int x, ...)
 {
    va_list   arglist;
    int i;
    double result = 0.0;

    cout<<"The number of arguments is: "<< x<<endl;
    va_start (arglist, x);
    for (i=0; i<x; i++)
       result += va_arg(arglist, double);
    va_end (arglist);
    return result;
 }