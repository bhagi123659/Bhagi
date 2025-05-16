#include <stdio.h>
int main(){
    struct student{
        char name[10];
        int roll;
        float marks;
    };
struct student s1;
printf("enter the name");
scanf("%s",&s1.name);
printf("enter the roll");
scanf("%d",&s1.roll);
printf("enter the marks");
scanf("%f",&s1.marks);
}
       
