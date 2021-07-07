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
    printf("Enter student detail\n");
    scanf("%s %d %f",st.name,&st.roll,&st.marks);
    printf("Name = %s\n",st.name);
    printf("Roll No.: %d\n",st.roll);
    printf("Marks: %f\n",st.marks);
} 