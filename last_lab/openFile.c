#include<stdio.h>
void main(){
FILE *fptr;
fptr=fopen("openFile.txt","w");
fputs("hello world",fptr);
fclose(fptr);
}
