#include<stdio.h>
void main(){
int a[5]={1,2,3,5,6};
int *ptr=a;
int sum = 0;
for(int i=0;i<5;i++){
	sum+= (*(ptr+i));	}
printf("The sum of all elements is %d",sum);
}
