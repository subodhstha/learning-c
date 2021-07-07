/*concept of structure*/
#include<stdio.h>
struct student
{
    char name[50];
    int roll;
    float marks;
};
int main()
{
    struct student st={"ram", 10, 85};
    printf("Name = %s\n",st.name);
    printf("Roll No.: %d\n",st.roll);
    printf("Marks: %f\n",st.marks);
} 