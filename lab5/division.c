/*The marks obtained by a student in 5 different subjects are input through the keyboard. The student gets a division as per the following rules:
percentage above or equal to 80 – Distinction division
Percentage between 60 and 79 - First division
Percentage between 50 and 59 - Second division
Percentage between 40 and 49 - Third division
Percentage less than 40 - Fail
	Write a program to calculate the division obtained by the student.*/
#include<stdio.h>
int main()
{
    int math, iit, dl, physics, cp;
    float tot ,per;
    printf("Enter the marks of Math, IIT, DL, Physics, c-programming\n");
    scanf("%d %d %d %d %d",&math,&iit,&dl,&physics,&cp);
    tot = math + iit + dl + physics + cp ;
    per = tot/500 * 100;
    if (math<=100 && iit<=100 && dl<=100 && physics<=100 && cp<=100)
    {
        if (per<40)
        {
            printf("fail");
        }
        else if (per>=40 && per<=49)
        {
            printf("Third Division");
        }
        else if (per>=50 && per<=59)
        {
            printf("second Division");
        }
        else if (per>=60 && per<=79)
        {
            printf("First Division");
        }
        else if (per>=80)
        {
            printf("Distinction");
        }
    }
    else
    {
        printf("invalide input");
    }
    return 0;
}