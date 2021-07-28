/*program to illustrate array of structure*/
#include<stdio.h>
struct employee
{
    char name[20];
    int id;
    float salary;
};

int main()
{
    struct employee e[3];
    float sum=0;
    printf("Enter the detail\n");
    for (int i = 0; i < 3; i++)
    {
        scanf("%s %d %f",e[i].name,&e[i].id,&e[i].salary);
        sum = sum + e[i].salary;
    }
    printf("The employee detail are:-\n");
    for (int i = 0; i < 3; i++)
    {
        if(e[i].salary>1500)
        {
        printf("Name: %s \nID No.:%d \nSalary:%3.f\n",e[i].name,e[i].id,e[i].salary);
        }
    }
    printf("The total salary of all employee is %3.f",sum);
    return 0;
}