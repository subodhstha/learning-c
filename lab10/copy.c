/*Write a program to copy the contents of one file into another.*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *f1, *f2;
    char fname[20], c;
    printf("enter the file name \n");
    scanf("%s",fname);
    f1 = fopen(fname,"r");
    if(f1 == NULL)
    {
        printf("Cannot open file %d \n",fname);
        exit(0);
    }
    printf("Enter the file name to write\n");
    scanf("%s",fname);
    f2 = fopen(fname, "w");
    if(f2 == NULL)
    {
        printf("Cannot open the file %s \n",fname);
        exit(0);
    }
    c = fgetc(f1);
    while(c!=EOF)
    {
        fputc(c,f2);
        c= fgetc(f1);
    }
    printf("text copid to %s",fname);
    fclose(f1);
    fclose(f2);
    return 0;
}