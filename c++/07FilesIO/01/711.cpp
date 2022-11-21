//Listing 711.c - Opening and closing a text file.
#include <iostream>

using namespace std;

 enum {SUCCESS, FAIL};
 int main(void)
  {
     FILE *fptr;
     char filename[]= "infile.txt";
    int reval = SUCCESS;

    if ((fptr = fopen(filename, "r")) == NULL){
       cout<<"Cannot open \n"<< filename;
       reval = FAIL;
    } else {
       cout<<"The value of fptr: 0x%p\n"<< fptr;
       cout<<"Ready to close the file.";
       fclose(fptr);
    }
    return reval;
}

