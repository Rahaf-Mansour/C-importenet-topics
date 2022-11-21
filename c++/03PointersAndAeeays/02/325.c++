//Listing 325.c++ - Stopping printing at the null character.

#include <iostream>

using namespace std;

int main() {
  char array_ch[15] = {'C', ' ',
                          'i','s', ' ',
                          'p', 'o', 'w', 'e', 'r',
                          'f', 'u', 'l', '!', '\0'};
    int i;
    /*  array_ch[i] in logical test */
    for (i=0; array_ch[i] != '\0'; i++)
       cout<< array_ch[i];
    return 0;
}