#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10], odd_sum=0, even_sum=0;
    printf("Enter the number ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
        if (a[10]%2 == 0)
        {
            even_sum = even_sum + a[i];
        }
        else
        {
            odd_sum = odd_sum + a[i];
        }       
    }
    printf("sum of even number is %d\n",even_sum);
    printf("sum of odd is %d",odd_sum);
    return 0;
}