#include<Stdio.h>
#include<String.h>
struct book
{
    char title[20];
    int pages;
    float price;
};
int main()
{
    struct book b1={"C programming",650,1050.5}, b2, b3;
    strcpy(b2.title,"C++");
    b2.pages = 740;
    b2.price = 999.5;
    printf("Enter the book detail ");
    scanf("%s %d %f",b3.title,&b3.pages,&b3.price);
    printf("Book 1 details : \nTitle:%s \nPage:%d \nprice:%f  \n",b1.title,b1.pages,b1.price);
    printf("Book 2 details : \nTitle:%s \nPage:%d \nprice:%f \n",b2.title,b2.pages,b2.price);
    printf("Book 3 details : \nTitle:%s \nPage:%d \nprice:%f \n",b3.title,b3.pages,b3.price);
}