#include<stdio.h>

struct student{
int roll_no;
char name[10];
float marks;
}stud[10];
struct student *ptr=stud;
void main(){
for(int i=0;i<=9;i++){
	printf("Enter roll number of student\n");
	scanf("%d",&(stud[i].roll_no));
	printf("Enter name of student \n");
	scanf("%s",&(stud[i].name));
	printf("Enter marks of student \n");
	scanf("%f",&(stud[i].marks));
}
}
