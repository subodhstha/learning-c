#include<stdio.h>
struct employee
{
    char name[50];
    int id;
    int slary;
};

void display(char n[], int a, int b)
{
    printf("name = %s \n",n);
    printf("ID=%d \n",a);
    printf("Salary=%d\n",b);
}

int main()
{
    struct employee e;
    printf("Enter name, ID and salary of employee:\n");
    scanf("%s %d %d",e.name,&e.id,&e.slary);
    display(e.name,e.id,e.slary);
    return 0;
}