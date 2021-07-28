#include<stdio.h>
struct employee
{
    char name[50];
    int id;
    float salary;
};

void display(struct employee x[],int n)
{
    int i;
    for (int i = 0; i < n; i++)
    {
        printf("name = %s \n",x[i].name);
        printf("id = %d\n",x[i].id);
        printf("salary = %f\n",x[i].salary);
    }
}
int main()
{
    struct employee e[3];
    int i;
    printf("enter the name id and salary of employee\n");
    for (int i = 0; i < 3; i++)
    {
        scanf("%s %d %f",e[i].name,&e[i].id,&e[i].salary);
    }
    display(e,3);
    return 0;
}
