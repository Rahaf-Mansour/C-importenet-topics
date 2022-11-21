//Listing 254.c++ - Using the switch statement.
#include <iostream>

using namespace std;

int main() {
  int day;

    cout<<"Please enter a single digit for a day\n";
     cout<<"(within the range of 1 to 3):\n";
    day = getchar();
    switch (day){
       case '1':
         cout<<"Day 1\n";
       case '2':
          cout<<"Day 2\n";
       case '3':
          cout<<"Day 3\n";
       default:
          ;
    }
    return 0;
}