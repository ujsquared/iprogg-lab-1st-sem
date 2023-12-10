#include<stdio.h>
void main(){
	int a[3][3]={},b[3][3]={};
	int c[3][3]={};
for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
	printf("Enter the %dth ro %dth element",i+1,j+1);		
	scanf("%d",&(a[i][j]));
	}}
for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
	printf("Enter the %dth ro %dth element",i+1,j+1);		
	scanf("%d",&(b[i][j]));
	}}

for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
	for(int k=0;k<3;k++){
	c[i][j]+=a[i][k]*b[k][j];}}
for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
	printf("%d ",(c[i][j]));
		       	}
	printf("\n");}
}
}

//
//
//for matrix multiplication of two matrix A and B
//A x B for example,
//rows in B = columns in A
//so if A is of a x m size
//B must be m x b size where a and b are arbitary
//let A be 4x5 and B be 5x3
//  B x A = 1x3
//   	
// b=(b11,b12,b13)      a = (a11,a12,a13,a14,a15)
//   (b21,b22,b23)	a = (a21,a22,a23,a24,a25) 
//   (b31,b32,b33)	a = (a31,a32,a33,a34,a35)
//   (b41,b42,b43)	a = (a41,a42,a43,a44,a45)
//   (b51,b52,b53)	a = (a51,a52,a53,a54,a55)
//
//
//	then c =(a11*b11 + a12*b21 + a13*b31 + a14*b41 + a15*b51, )  
//		(a21*b11 + a22*b21 + a23*b31 + a24*b41 + a25*b51, 	         	
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
