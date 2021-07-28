/*passing whole struct mambers to a function*/
#include<stdio.h>
struct book
{
    char name[50];
    int pages;
    float price;
};

void display(struct book x)
{
    printf("name = %s \n",x.name);
    printf("pages=%d \n",x.pages);
    printf("price=%f\n",x.price);
}

int main(){
    struct book b;
    printf("Enter name, pages and price of book:\n");
    scanf("%s %d %f",b.name,&b.pages,&b.price);
    display(b);
    return 0;
}