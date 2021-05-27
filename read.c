/*program to illustrate reading and writing of mix type data*/
#include<stdio.h>
int main()
{
    int x;
    char c;
    float y;
    char name[30];
    printf("Enter the data:");
    scanf("%d %c %f %s",&x,&c,&y,name);
    printf("Integer data:%d \nchatacyer data:%c \nFloating point data:%f \nString:%s",x,c,y,name);
}