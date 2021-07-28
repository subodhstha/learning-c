#include<stdio.h>
#include<conio.h>
int main(){
    int marks[5];
    printf("enter the value\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("%d\n",marks[i]);
    }
    return 0;
}