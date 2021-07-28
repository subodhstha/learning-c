/*Define structure employee having data members name, address and salary. Take data for n employee in an array dynamically and find the average salary*/
#include<stdio.h>
struct employee
{
    char name[20];
    char address[20];
    float salary;
};
int main()
{   
    int n;
    float t_salary = 0;
    float a_salary;
    printf("Enter the number of employee\n");
    scanf("%d",&n);
    struct employee e[n];
    printf("Enter the detail of employee\n");
    for(int i=0; i < n; i++)
    {
        printf("Name: ");
        scanf("%s",e[i].name);
        printf("Address: ");
        scanf("%s",e[i].address);
        printf("Salary: ");
        scanf("%f",&e[i].salary);
        printf("\n");
        t_salary = t_salary + e[i].salary; 
    }
    a_salary = t_salary/n;
    printf("The detail of the employee are \n");
    printf("Name \tAddress \tSalary\n");

    for(int i=0; i < n; i++)
    {
        printf("%s\t %s\t     %3.f\n",e[i].name,e[i].address,e[i].salary);

    }
    printf("The average salary is %3.f",a_salary);
}