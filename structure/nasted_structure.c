/*program to illustrate array of structure*/
#include<stdio.h>
struct employee
{
    char name[20];
    int id;
    float salary;
 /*   struct date doj;*/
    struct date
    {
        int d;
        int m;
        int y;
    }doj;
};

int main()
{
    /*struct employeee e[3]={"ram",101,2000,{3,1,2019}};*/
    struct employee e2={"hari",102,3000,{4,1,2015}};
    /*    printf("Name=%s \nId+%d \nsalary+%f doj=%d/%d/%d \n",e.name,e.id,e.salary,e.doj.d,e.doj.m,e.doj.y);*/
    printf("Name=%s \nId+%d \nsalary=%f \ndoj=%d/%d/%d \n",e2.name,e2.id,e2.salary,e2.doj.d,e2.doj.m,e2.doj.y);

}
