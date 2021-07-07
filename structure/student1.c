/*concept of structure*/
#include<stdio.h>
#include<string.h>
struct student
{
    char name[50];
    int roll;
    float marks;
};
int main()
{
    struct student st;
    strcpy(st.name,"Ram");
    st.roll=20;
    st.marks=80;
    printf("Name = %s\n",st.name);
    printf("Roll No.: %d\n",st.roll);
    printf("Marks: %f\n",st.marks);
} 