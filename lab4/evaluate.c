/*Write a c program that evaluate the expresion: a=5<=8&&6!=5 and display the result on the screen.
*/
#include<stdio.h>
int main()
{
    int a, b;
    printf("evaluation of a=5<=8&&6!=5\n");
    b = a=5<=8&&6!=5;
    printf("The result is %d",b);
}