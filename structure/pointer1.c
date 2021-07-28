/*passing structure pointer to a function*/
/*passing structure member to function*/
#include<stdio.h>
struct book
{
    char name[20];
    int pages;
    float price;
};

void incPrice(struct book *x)
{
    x->price=x->price+100;
};

void display(struct book *x)
{
    printf("name =%s\n",x->name);
    printf("pages =%d\n",x->pages);
    printf("prse =%f\n",x->price);
}

int main()
{
    struct book b;
    printf("Enter the name, pages & price\n");
    scanf("%s %d %f",b.name,&b.pages,&b.price);
    incPrice(&b);
    display(&b);
    return 0;
}