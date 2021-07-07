/*concept of structure*/
#include<stdio.h>
struct student
{
    char name[50];
    int roll;
    float marks;
};
int main()
{
    struct student st1,st2={"ram", 10, 85};
    printf("Enter the student detail\n");
    scanf("%s %d %f",st1.name,&st1.roll,&st1.marks);
    
    printf("Name = %s\n",st1.name);
    printf("Roll No.: %d\n",st1.roll);
    printf("Marks: %f\n",st1.marks);
    printf("\n");
    printf("Name = %s\n",st2.name);
    printf("Roll No.: %d\n",st2.roll);
    printf("Marks: %f\n",st2.marks);
} 