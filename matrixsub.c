#include<stdio.h>
#include<conio.h>
int main(){
    int a[2][3]={10, 20, 30, 40, 50, 60};
    int b[2][3]={60, 50, 40, 30, 20, 10};
    int c[2][3];
    for (int i = 0; i <2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j]=a[i][j]-b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}