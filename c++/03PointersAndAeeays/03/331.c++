//Listing 331.c++ - Initializing strings.
#include <iostream>

using namespace std;

int main() {
 char str1[] = {'A', ' ',
                    's', 't', 'r', 'i', 'n', 'g', ' ',
                    'c', 'o', 'n', 's', 't', 'a', 'n', 't', '\0'};
    char str2[] = "Another string constant";
    char *ptr_str;
    int i;

    /* print out str2 */
    for (i=0; str1[i]; i++)        cout<< str1[i];
    cout<<"\n";
    
    /* print out str2 */
    for (i=0; str2[i]; i++)        cout<< str2[i];

   cout<<"\n";
    /* assign a string to a pointer */
    ptr_str = "Assign a string to a pointer.";
    for (i=0; *ptr_str; i++)
      cout<< *ptr_str++;
    return 0;
}