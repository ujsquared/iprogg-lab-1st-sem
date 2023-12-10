#include<stdio.h>
#include<ctype.h>
void main(){
char str[50];
fgets(str,50,stdin);
int i = 0 , len=0;
while(str[i]!='\0'){
len+=1;
i++;}
printf("the length of string is %d",len);
}
