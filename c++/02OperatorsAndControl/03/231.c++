//Listing 231.c++ - Using the sizeof operator.
#include <iostream>

using namespace std;

int main() {
  
     char   ch =' ';
     int    int_num = 0;
     float  flt_num = 0.0f;
     double dbl_num = 0.0;

    cout<<"The size of char is:"<< sizeof(char)<<"-byte"<<endl;
       cout<<"The size of ch is:" <<sizeof(ch)<< "-byte"<<endl;
        cout<<"The size of int is:"<<sizeof(int)<< "-byte"<<endl;
         cout<<"The size of int_num is:"<<sizeof(int_num)<< "-byte"<<endl;
            cout<<"The size of float is:"<<sizeof(float)<< "-byte"<<endl;

          cout<<"The size of flt_num is:" <<sizeof(flt_num)<< "-byte"<<endl;
       cout<<"The size of double is:"<<sizeof(double)<< "-byte"<<endl;
      cout<<"The size of dbl_num is: "<<sizeof(dbl_num)<< "-byte"<<endl;
    return 0;
   
      
    return 0;
}