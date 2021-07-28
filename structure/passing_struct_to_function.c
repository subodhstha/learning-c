/*passing struct mambers to a function*/
#include<stdio.h>
struct book
{
    char name[50];
    int pages;
    float price;
};

void display(char n[], int a, float b)
{
    printf("name = %s \n",n);
    printf("pages=%d \n",a);
    printf("price=%f\n",b);
}

int main(){
    struct book b;
    printf("Enter name, pages and price of book:\n");
    scanf("%s %d %f",b.name,&b.pages,&b.price);
    display(b.name,b.pages,b.price);
    return 0;
}