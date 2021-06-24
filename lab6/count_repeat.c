/*WAP that asks user to enter a string (e.g., Tribhuwan University)and a character (e.g.., i) and checks how many times the character is repeated in the string.*/
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100], ser, num = 0;
    printf("Enter the string ");
    gets(a);
    printf("Enter the character that you want to search ");
    scanf("%c",&ser);
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] == ser)
        {
            num = num + 1;
        }
    }
    printf("The charecter %c is repeated %d times",ser,num);
}