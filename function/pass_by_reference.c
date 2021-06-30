/*pass by reference by value*/
#include<stdio.h>
void swap(int *a, int *b);
int main()
{
    int x=11, y=22;
    printf("value before swap in calling function \n x=%d \n y=%d\n",x,y);
    swap(&x,&y);
    printf("Value after swap in calling function \n x=%d \n y=%d\n",x,y);
}
void swap(int *a, int *b)
{
    printf("value before swap calling function \n a=%d \n b=%d\n",*a,*b);
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("Value after swap calling function \n a=%d \n b=%d\n",*a,*b);
}