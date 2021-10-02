/*create file*/
#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    fp = fopen("INPUT.txt","w");
    while((ch=getchar()) !=EOF)
    {
        fputc(ch,fp);
    }
    fclose(fp);
    fp=fopen("INPUT.txt","r");
    while((ch=fgetc(fp))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(fp);
}