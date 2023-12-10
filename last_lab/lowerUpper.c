#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main(){
char str1[50],str2[50];
fgets(str1,50,stdin);
for(int i=0;i<=(strlen(str1)-1);i++){
	if(isupper(str1[i])!=0){
		str2[i]=tolower(str1[i]);
	}
	else if(isupper(str1[i])==0){
		str2[i]=toupper(str1[i]);
	}
	printf("%c",str2[i]);	

}
printf("%s",str2);
}
