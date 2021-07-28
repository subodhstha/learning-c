/*Create a structure student having data members name, roll_number, and marks. Complete the program to display the name of student having marks grater than or equal to 60*/
#include<stdio.h>
struct student
{
    char name[20];
    int roll;
    int marks;
};
void display(struct student s)
{
    if(s.marks >= 60)
    {
    printf("%s \t %d \t     %d\n",s.name,s.roll,s.marks);
    }
}
int main()
{
    int n;
    printf("Enter the total number of student \n");
    scanf("%d",&n);
    struct student s[n];
    printf("Enter the data \n");
    for(int i = 0; i < n; i++)
    {
        printf("Name: ");
        scanf("%s",s[i].name);
        printf("Roll No.: ");
        scanf("%d",&s[i].roll);
        printf("Marks: ");
        scanf("%d",&s[i].marks);
        printf("\n");
    }
    printf("The student having marks grater than or equal to 60 are\n");
    printf("Name \tRoll No. \tMarks \n");
    for(int i = 0; i < n; i++)
    {
        display(s[i]);
    }
}