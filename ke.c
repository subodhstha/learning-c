#include<stdio.h>
void main(){
    int a = 0;
    int b = 1;
    int c = 0;
    for(int i = 0;i<20;i++){
        printf("%d ",a);
         c = a+b;
         a = b;
         b = c;
    }
}