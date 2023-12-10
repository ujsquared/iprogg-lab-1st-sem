#include<stdio.h>
void main(){
	int a[3][3]={},b[3][3]={};
	int c[3][3]={};
for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
	printf("Enter the %dth ro %dth element",i+1,j+1);		
	scanf("%d",&(a[i][j]));
	}}
int sum = 0;
for(int i=0;i<3;i++){
       sum+=a[i][i];
}
printf("sum of right diagonals is %d", sum);
}
