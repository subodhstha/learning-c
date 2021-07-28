/*Create a structure named employee that has id, name, age, gender, and salary as members. WAP to read and display data entered by the user.*/
#include<stdio.h>
struct employee
{
    char name[20];
    int id;
    char gender[10];
    int age;
    float salary;
};
int main()
{   
    int n;
    printf("Enter the number of employee\n");
    scanf("%d",&n);
    struct employee e[n];
    printf("Enter the detail of employee\n");
    for(int i=0; i < n; i++)
    {
        printf("Name: ");
        scanf("%s",e[i].name);
        printf("ID: ");
        scanf("%d",&e[i].id);
        printf("Gender: ");
        scanf("%s",e[i].gender);
        printf("Age: ");
        scanf("%d",&e[i].age);
        printf("Salary: ");
        scanf("%f",&e[i].salary);
    }
    printf("The detail of the employee are \n");
    for(int i=0; i < n; i++)
    {
        printf("Name: %s \nID: %d \nGender: %s\n Age: %d \nSalary: %f\n",e[i].name,e[i].id,e[i].gender,e[i].age,e[i].salary);
    }
}