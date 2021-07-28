#include<stdio.h>
struct emp
{
    char name[50];
    int age;
    int id;
};

int main()
{
    struct emp e1, e2, e3;
    printf("Enter the Employee detail ");
    scanf("%s %d %d",e1.name,&e1.age,&e1.id);
    scanf("%s %d %f",e2.name,&e2.age,&e2.id);
    scanf("%s %d %f",e3.name,&e3.age,&e3.id);
    printf("Employee 1 details : \nName:%s \nAge:%d \nID No. :%d",e1.name,e1.age,e1.id);
    printf("Employee 2 details : \nName:%s \nAge:%d \nID No. :%d",e2.name,e2.age,e2.id);
    printf("Employee 3 details : \nName:%s \nAge:%d \nID No. :%d",e3.name,e3.age,e3.id);
}