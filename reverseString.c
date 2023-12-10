#include<stdio.h>
#include<string.h>
void main(){
char str[50];
fgets(str, 50, stdin);
printf("Entered string is : %s",str);
int len = strlen(str);
for(int i = len-1;i>=0;i--){
printf("%c",str[i]);}
}
