/*Write a program to reverse the number entered by the user.*/
#include<stdio.h>
int main(){
    int n, r=0;
    printf("Enter the number ");
    scanf("%d",&n);
    while (n != 0)
    {
        r = r*10;
        r = r + n%10;
        n = n/10;
    }
    printf("Reverse of %d are %d",n,r);
    return 0;
}