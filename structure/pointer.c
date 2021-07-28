/*program to illustrate pointer to structure*/
#include<stdio.h>
struct book
{
    char name[20];
    int pages;
    float price;
};

int main(){
    struct book b;
    struct book *bptr;
    printf("Enter book name, pages and price:\n");
    scanf("%s %d %f",b.name,&b.pages,&b.price);
    bptr = &b;
    printf("name=%s \npage=%d \nprice=%f\n",bptr,bptr->pages,bptr->price);
    printf("name=%s \npage=%d \nprice=%f\n",(*bptr).name,(*bptr).pages,(*bptr).price);

    return 0;
}