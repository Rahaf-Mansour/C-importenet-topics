//Listing 333.c++ - Copying strings.


#include <iostream>
#include<cstring>

using namespace std;

int main() {
   char str1[] = "Copy a string.";
     char str2[15];
     char str3[15];
    int  i;

    /* with strcpy() */
    strcpy(str2, str1);
    /* without strcpy() */
    for (i=0; str1[i]; i++)
       str3[i] = str1[i];
    str3[i] = '\0';
    /* display str2 and str3 */
    cout<<"The content of str2: "<< str2<<endl;
    cout<<"The content of str3: "<< str3<<endl;
    return 0;;
}