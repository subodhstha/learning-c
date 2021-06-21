/*Write a program that read the code 1 for a boy and 2 for a girl and then  count the number of boys and girls in a class based on the entered code.*/
#include<stdio.h>
#include<conio.h>
int main(){
    unsigned int code;
    int boys=0,girls=0;
    printf("Enter the code ");
    scanf("%d",&code);
    while(code>0){
        int last = code%10;
        if(last == 1){
            boys++;
        }else if (last==2)
        {
            girls++;
        }
        code= (int)code/10;
    }
    printf("number of boys:%d number of girls:%d",boys,girls);
    return 0;
}