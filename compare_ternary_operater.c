#include<stdio.h>
int main(){
  int num1,num2,num3,num4,x;
    printf("enter four numbers:");
    scanf("%d %d %d %d", &num1, &num2, &num3,&num4);
    x=num1>num2?num1>num3?num1>num4? num1:num4: (num3>num4) ? num3:num4 : (num2>num3)? (num2>num4)? num2:num4: (num3>num4)? num3:num4;

    printf("%d is largest number",x);
    return 0;
}