#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main(){
char str[50];
fgets(str,50,stdin);
int i=0, alpha=0, special_char=0;
while(str[i]!='\0'){
if(isalpha(str[i])>=1){
	alpha+=1;}
else if(isalpha(str[i])==0){
	special_char+=1;}
i++;}
printf("Number of alpha %d and number of special_char %d",alpha,special_char-1);
}
