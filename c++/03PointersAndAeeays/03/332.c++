//Listing 332.c++ - Measuring string lengths.
#include <iostream>
#include <cstring>
using namespace std;

int main() {
char str1[] = {'A', ' ',
                    's', 't', 'r', 'i', 'n', 'g', ' ',
                    'c', 'o', 'n', 's', 't', 'a', 'n', 't', '\0'};
    char str2[] = "Another string constant";
    char *ptr_str = "Assign a string to a pointer.";

    cout<<"The length of str1 is: "<< strlen(str1) << "bytes\n";
    cout<<"The length of str2 is: " << strlen(str2) << " bytes\n";
    cout<<"The length of the string assigned to ptr_str is: "<< strlen(ptr_str) << "bytes\n";
    return 0;
}