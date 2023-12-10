#include<stdio.h>
void main(){
int a =1, b=2;
int *ptrA,*ptrB;
ptrA=&a;
ptrB=&b;
printf("Sum of two numbers is %d",(*ptrA+*ptrB));

}
