#include<stdio.h>
struct employee
{
    char name[50];
    int id;
    int salary;
};
void display(struct employee b)
{
    printf("name = %s\n",b.name);
    printf("ID=%d \n",b.id);
    printf("slary=%d\n",b.salary);
}
int main()
{
    struct employee e;
    printf("Enter the name, ID & salay \n");
    scanf("%s %d %d",e.name,&e.id,&e.salary);
    display(e);
}