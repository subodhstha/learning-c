/*Write a program to write and read integer in a file.*/
#include<stdio.h>
int main()
{
    FILE *fp;
    int a, n;
    printf("enter the size of data\n");
    scanf("%d",&n);
    fp = fopen("num.txt","w");
    printf("Enter the data\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a == -1)
        {
            break;
        }
        putw(a,fp);
    }
    fclose(fp);
    fp=fopen("num.txt","r");
    while((a=getw(fp))!=EOF)
    {
        printf("%d\n",a);
    }
    fclose(fp);
}