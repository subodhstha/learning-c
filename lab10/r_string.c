/*Write a program to write and read string in a file.*/
#include<stdio.h>
int main()
{
    FILE *fp;
    char str[30];
    printf("Enter the string\n");
    fp = fopen("str.txt","w");
    while((str[30]=getchar()) != EOF)
    {
        fputs(str,fp);
    }
    fclose(fp);
    fp = fopen("str.txt","r");
    while((str[30]=getc(fp))!=EOF)
    {
        printf("%s",str[30]);
    }
    fclose(fp);
}
