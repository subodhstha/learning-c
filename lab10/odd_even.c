/*Write a program to CREATE and WRITE n numbers in a file “NUMBER.TXT”. Open this file then read  its content and put all even numbers in one file “EVEN.TXT” and odd numbers in another file “ODD.TXT”.*/
#include<stdio.h>
int main()
{
    FILE *f1, *f2, *f3;
    int num;
    printf("Enter the integer\n");
    f1 = fopen("number.txt","w");
    for(int i= 0;i<100; i++)
    {
        scanf("%d",&num);
        if(num==-1)
        {
            break;
        }
        putw(num,f1);
    }
    fclose(f1);
    f1=fopen("number.txt","r");
    f2=fopen("odd.txt","w");
    f3=fopen("even.txt","w");
    while((num=getw(f1))!=EOF)
    {
        if(num%2==0)
        {
            putw(num,f3);
        }
        else
        {
            putw(num,f2);
        }
    }
    fclose(f1);
    fclose(f2);
    fclose(f3);

    f2=fopen("odd.txt","r");
    f3=fopen("even.txt","r");

    printf("odd number are\n");
    while((num=getw(f2))!=num);
    {
        printf("%d\n",num);
    }
    printf("even number are\n");
    while((num=getw(f3))!=EOF)
    {
        printf("%d\n",num);
    }
    fclose(f2);
    fclose(f3);
}