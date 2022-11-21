//Listing 411.c++ - Calling functions after they are declared and defined.

#include <iostream>

using namespace std;

 int function_1(int x, int y);
  double function_2(double x, double y)
  {
     cout<<"Within function_2.\n";
     return (x - y);
  }

int main()
 {
    int x1 = 80;
    int y1 = 10;
    double x2 = 100.123456;
    double y2 = 10.123456;
 
    cout<<"Pass function_1 "<<x1<< " and "<< y1<<endl;
    cout<<function_1(x1, y1)<<"=function_1 returns "<<endl;
    cout<<"Pass function_2"<< x2 << " and "<<  y2<<endl;
    cout<< function_2(x2, y2)<<"=function_2 returns "<<endl;

    return 0;
 }
 /* function_1() definition */
 int function_1(int x, int y)
 {
    cout<<"Within function_1.\n";
    return (x + y);
 }
