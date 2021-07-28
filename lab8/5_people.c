/*Write a program to accept record of 5 person which has name, age and address and also display them [note use array of structure]*/
#include<stdio.h>
struct person
{
    char name[20];
    int age;
    char address[20];
};

int main()
{
    struct person p[4];
    printf("Enter the detail \n");
    for(int i = 0; i <= 4; i++)
    {
        printf("Name: ");
        scanf("%s",p[i].name);
        printf("Age: ");
        scanf("%d",&p[i].age);
        printf("Address: ");
        scanf("%s",p[i].address);
        printf("\n");
    }
    printf("The detail of people are \n");
    printf("Name \tAge \tAddress \n");
    for(int i=0; i <= 4; i++)
    {
        printf("%s \t%d \t%s \n",p[i].name,p[i].age,p[i].address);
    }
}