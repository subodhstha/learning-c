/*Write a program with recursive function to find the power based on two input numbers.*/
#include<stdio.h>
float cal(int b, int p);
int main()
{
    int b, p;
    float res;
    printf("Enter the base ");
    scanf("%d",&b);
    printf("Enter the power ");
    scanf("%d",&p);
    res = cal(b,p);
    printf("%d^%d = %.2f",b,p,res);
}
float cal(int b, int p)
{
    if (p == 0)
    {
        return 1;
    }
    else if (p > 0)
    {
        return(b*cal(b,p-1));
    }
    else if(p < 0)
    {
        return 1 / (cal(b,-p));
    }
}