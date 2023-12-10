#include<stdio.h>
void main(){
int c[3][3]={};
for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
//what to do now?
	printf("Enter the %dth row %dth element",i+1,j+1);		
	scanf("%d",&(c[i][j]));
	}}
for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
	printf("%d ",(c[i][j]));
		       	}
	printf("\n");}
}
