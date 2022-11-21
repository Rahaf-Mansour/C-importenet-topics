//Listing 424.c++ - Passing arrays to functions.
#include <iostream>
using namespace std;


  int AddThree(int list[]);

  int main()
  {
     int sum, list[3];

    cout<<"Enter three integers separated by spaces:\n";

    cin >>  list[0] >> list[1] >> list[2];
    sum = AddThree(list);
    cout<<"The sum of the three integers is: "<< sum <<endl;

    return 0;
 }

 int AddThree(int list[])
 {
    int i;
    int result = 0;

    for (i=0; i<3; i++)
       result += list[i];
    return result;
 }