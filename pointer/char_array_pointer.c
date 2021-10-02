/*cgaracter array and pointer*/
#include<stdio.h>
int main()
{
    char *name="kathmandu";
    char *cptr = name;
    int l;
    printf("%s \n",name);
    while(*cptr != '\0')
    {
        printf("%c is stord at %u \n",*cptr,cptr);
        cptr++;
    }
    l=name -cptr;
    printf("length = %d",l);
}