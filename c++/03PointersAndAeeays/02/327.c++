//Listing 327.c++ - Initializing unsized arrays.
#include <iostream>

using namespace std;

int main() {
  char array_ch[] = {'C', ' ',
                        'i', 's', ' ',
                        'p', 'o', 'w', 'e', 'r',
                        'f', 'u', 'l', '!', '\0'};
    int list_int[][3] = {
           1, 1, 1,
           2, 2, 8,
           3, 9, 27,
           4, 16, 64,
           5, 25, 125,
           6, 36, 216,
           7, 49, 343};

    cout<<"The size of array_ch[] is "<< sizeof (array_ch) << " bytes.\n";
    cout<<"The size of list_int[][3] is "<< sizeof (list_int) <<  " bytes.\n";
    return 0;
}