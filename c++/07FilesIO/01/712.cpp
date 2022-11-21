//Listing 712.c - Reading and writing one character at a time.
#include <iostream>

using namespace std;

   enum {SUCCESS, FAIL};

  void CharReadWrite(FILE *fin, FILE *fout);

  main(void)
  {
    FILE *fptr1, *fptr2;
    char filename1[]= "outfile.txt";
    char filename2[]= "infile.txt";
    int reval = SUCCESS;

    if ((fptr1 = fopen(filename1, "w")) == NULL){
      cout<<"Cannot open \n"<< filename1;
       reval = FAIL;
    } else if ((fptr2 = fopen(filename2, "r")) == NULL){
       cout<<"Cannot open \n"<< filename2;
       reval = FAIL;
    } else {
       CharReadWrite(fptr2, fptr1);
       fclose(fptr1);
       fclose(fptr2);
    }

    return reval;
 }
/* function definition */
 void CharReadWrite(FILE *fin, FILE *fout)
 {
    int c;

    while ((c=fgetc(fin)) != EOF){
       fputc(c, fout);  /* write to a file */
       putchar(c);      /* put the character on the screen */
    }
 }