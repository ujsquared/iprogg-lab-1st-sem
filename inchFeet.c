#include<stdio.h>
struct length{
float inches;
float ft;};
void main(){
struct length a,b;
a.inches=4;
a.ft=4*0.083;
b.inches = 5;
b.ft = 5*0.083;
printf("sum in inches is %f and sum in foots is %f",(a.inches+b.inches),(b.ft+a.ft));
}
