/*Write a program to finding the grading of  students based on the marks entered by the user. ( Note: use switch statement).*/
#include <stdio.h>
int main()
{
    int marks;
    printf("Enter the marks of the students ");
    scanf("%d", &marks);
    switch (marks / 10)
    {
    case 10:
        printf("Grade is A+");
        break;
    case 9:
        printf("Grade is A");
        break;
    case 8:
        printf("Grade is B+");
        break;
    case 7:
        printf("Grade is B");
        break;
    case 6:
        printf("Grade is C+");
        break;
    case 5:
        printf("Grade is C");
        break;
    case 4:
        printf("Grade is D+");
        break;
    case 3:
        printf("Grade is D");
        break;
    default:
        printf("Grade is E");
        break;
    }
    return 0;
}