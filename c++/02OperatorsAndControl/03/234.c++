//Listing 234.c++- Using the logical negation operator (!).
#include <iostream>

using namespace std;

int main() {
  
 int   num;

     num = 7;
    cout<<"Given num = 7\n";
    cout<<"!(num < 7)  returns: "<< (!(num < 7))<<endl;
   cout<<"!(num > 7)  returns: "<< (!(num > 7))<<endl;
    cout<<"!(num == 7) returns:"<< (!(num == 7))<<endl;
    return 0;
}