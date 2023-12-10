#include<stdio.h>
int main(){
	FILE *ptr;
	char str1[50];
	ptr=fopen("openFile.txt","r");
	fscanf(ptr,"%s", str1);
	printf("%s %s",str1);
	return 0;}
