//Listing 232.c++ - Using the logical AND operator (&&).
#include <iostream>

using namespace std;

int main() {
  
     int   num;

     num = 0;
     cout<<"The AND operator returns: "<<
           ((num%2 == 0) && (num%3 == 0))<<endl;
    num = 2;
    cout<<"The AND operator returns: "<<
           ((num%2 == 0) && (num%3 == 0))<<endl;
    num = 3;
   cout<<"The AND operator returns: "<<
           ((num%2 == 0) && (num%3 == 0))<<endl;
    num = 6;
    cout<<"The AND operator returns: "<<
           ((num%2 == 0) && (num%3 == 0))<<endl;

    return 0;
}