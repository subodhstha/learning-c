/*fibonacci number by using recursive function */
#include<stdio.h>
int fibo(int n);
int main()
{
    int n,result;
    printf("Enter any number ");
    scanf("%d",&n);
    result = fibo(n);
    printf("The %d th postion fibonacci number is %d",n,result);
}
int fibo(int n)
{
    if (n==0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return (fibo(n-1) + fibo(n-2));
}