/*Write a program to display the Fibonacci sequence of first n numbers (entered by the user) using loop.*/
#include<stdio.h>
int main(){
    int n, t1=0,t2=1;
    int nxt= t1 + t2;
    printf("Enter the natural number ");
    scanf("%d",&n);
    printf("The fibbonacci series are: %d, %d, ",t1,t2);
    for (int i = 1; i <= n; i++)
    {
        printf("%d,",nxt);
        t1 = t2;
        t2 = nxt;
        nxt= t1 + t2;
    }
     
    return 0;
}