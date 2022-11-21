//Listing 425.c++ - Passing pointers to functions.
#include <iostream>
using namespace std;

  void ChPrint(char *ch);
  int DataAdd(int *list, int max);
 int main()
  {
     char str[] = "It's a string!";
     char *ptr_str;
    int list[5] = {1, 2, 3, 4, 5};
    int *ptr_int;

    /* assign address to pointer */
    ptr_str = str;
    ChPrint(ptr_str);
    ChPrint(str);

    /* assign address to pointer */
    ptr_int = list;
    cout<<"The sum returned by DataAdd(): "<<  DataAdd(ptr_int, 5)<<endl;
          
    cout<<"The sum returned by DataAdd(): "<< DataAdd(list, 5)<<endl;
           
    return 0;
 }
 /* function definition */
 void ChPrint(char *ch)
 {
   cout<< ch<<endl;
 }
 /* function definition */
 int DataAdd(int *list, int max)
 {
    int i;
    int sum = 0;

    for (i=0; i<max; i++)
       sum += list[i];
    return sum;
 }