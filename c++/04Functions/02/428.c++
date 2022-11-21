//Listing 428.c++ - Pointing to a function.
#include <iostream>
using namespace std;
  /* function declaration */
  int StrPrint(char *str);
  /* main() function */
 int main()
  {
     char str[24] = "Pointing to a function.";
     int (*ptr)(char *str);

    ptr = StrPrint;
    if (!(*ptr)(str))
       cout<<"Done!\n";

    return 0;
 }
 /* function definition */
 int StrPrint(char *str)
 {
    cout<<str<<endl;
    return 0;
 }
