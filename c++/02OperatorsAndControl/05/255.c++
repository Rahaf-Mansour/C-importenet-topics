//Listing 255.c++ - Adding the break statement.
#include <iostream>

using namespace std;

int main() {
  int day;

     cout<<"Please enter a single digit for a day\n";
    cout<<"(within the range of 1 to 7):\n";
    day = getchar();
    switch (day){
       case '1':
        cout<<"Day 1 is Sunday.\n";
          break;
       case '2':
       cout<<"Day 2 is Monday.\n";
          break;
       case '3':
         cout<<"Day 3 is Tuesday.\n";
          break;
       case '4':
    cout<<"Day 4 is Wednesday.\n";
          break;
       case '5':
          cout<<"Day 5 is Thursday.\n";
          break;
       case '6':
            cout<<"Day 6 is Friday.\n";
          break;
       case '7':
         cout<<"Day 7 is Saturday.\n";
          break;
       default:
          printf("The digit is not within the range of 1 to 7.\n");
          break;
    }
    return 0;
}