//WAP a c program to find the largest number in an array using recursion
//---------THOUGH PROCESS--------------
//so, what's my ending point? a list of size 1, ig?  *APPLYING THIS*
//
//
//
#include<stdio.h>
int max = 0;
int largest(int *ptrfinal){
	printf("hello");
	int length = sizeof(*ptrfinal)/4;
	if(length==1){
		printf("\n%d",*(ptrfinal+4));
		return max;}
	else{
		printf("%d",*(ptrfinal+0));
		if(*(ptrfinal+0)>max){
			max = *(ptrfinal+0);
			ptrfinal=ptrfinal+4;
			largest(ptrfinal);
		}
		else{
			ptrfinal=ptrfinal+4;
			largest(ptrfinal);}}}//because integer is of 4 bytes 
void main(){
int a[5]={1,3,4,5,2};
int *ptr1=a;
printf("\n %d",largest(ptr1));
int len = sizeof(*ptr1)/4;
printf("\n %d",len);
}
