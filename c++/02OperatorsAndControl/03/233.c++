//Listing 233.c++- Using the logical OR operator (||).
#include <iostream>

using namespace std;

int main() {
  
   int   num;

     cout<<"Enter a single digit that can be divided\nby both 2 and 3:\n";
     for (num = 1; (num%2 != 0) || (num%3 != 0); )
       num = getchar() - 48;
    cout<<"You got such a number: "<< num<<endl;
    return 0;
}