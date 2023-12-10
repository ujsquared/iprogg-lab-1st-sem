#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main(){
char str1[50],str2[50];
fgets(str1,50,stdin);
for(int i=(strlen(str1)-1),j=0;i>=0;i--,j++){
	 	str2[j]=str1[i];
}
printf("%s",str2);
}
