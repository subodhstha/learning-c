/*Write a program to read number of employees, n, working in a company. Reserve the memory required to store age of n employees using malloc() function. Read age of n employees from user and count the number of employees of age above 80 years.*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, count=0;
    int *e;
    printf("Enter the number of the employee\n");
    scanf("%d",&n);

    e = (int*)malloc(n*sizeof(int));

    if (e == NULL)
    {
        printf("Memory not allocated\n");
        exit(0);
    }

    printf("Enter the age of emplyee\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",e+i);
    }

    for(int i = 0; i < n; i++)
    {
        if(*(e+i)>80)
        {
            count++;
        }
    }
    printf("The number of employees of age above 80 years are ");
    printf("%d",count);
    free(e);
    return 0;
}