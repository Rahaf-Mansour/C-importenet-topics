//Listing 342.c++ - The relationship between program scope and block scope.


#include <iostream>


using namespace std;



  int x = 1234;         /* program scope */
  double y = 1.234567;  /* program scope */

  void function_1()
  {
     cout<<"From function_1:\n"<<"x= " <<x << " y="<< y<<endl;
 }

int main()
 {
    int x = 4321;   /* block scope 1*/

    function_1();
    cout<<"Within the main block:\n"<<"x= " <<x << " y="<< y<<endl;
    /* a nested block */
    {
       double y = 7.654321;  /* block scope 2 */
       function_1();

           cout<<"Within the nested block:\n"<<"x= " <<x << " y="<< y<<endl;
    }
    return 0;
}