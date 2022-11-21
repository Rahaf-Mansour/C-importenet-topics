// Listing 713.c - Reading and writing one character line at a time.
#include <iostream>

using namespace std;
 enum {SUCCESS, FAIL, MAX_LEN = 81};

  void LineReadWrite(FILE *fin, FILE *fout);

  int main(void)
  {
    FILE *fptr1, *fptr2;
    char filename1[]= "outfile.txt";
    char filename2[]= "infile.txt";
    int reval = SUCCESS;

    if ((fptr1 = fopen(filename1, "w")) == NULL){
       cout<<"Cannot open"<<filename1<< " for writing."<<endl;
       reval = FAIL;
    } else if ((fptr2 = fopen(filename2, "r")) == NULL){
          cout<<"Cannot open"<<filename2<< " for writing."<<endl;
       reval = FAIL;
    } else {
       LineReadWrite(fptr2, fptr1);
       fclose(fptr1);
       fclose(fptr2);
    }

    return reval;
 }
/* function definition */
 void LineReadWrite(FILE *fin, FILE *fout)
 {
    char buff[MAX_LEN];

    while (fgets(buff, MAX_LEN, fin) !=` NULL){
       fputs(buff, fout);
      cout<< buff;
    }
 }
