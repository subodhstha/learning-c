#include<stdio.h>
int main(){
    //TODO
    // declare three variables of integer type
    int num1;
    int num2;
    int num3;

    // declare a variable of character type
    char ch;
    // declare a variable of float type
    float f;
    // declare three variable of type integer for hour, minute, second
    int hour ,min, sec;
    // use formatted input/output function to read input and display output
    printf("Enter three number:\n");
    scanf("%d %d %d\n",&num1, &num2, &num3);
    printf("num1=-%15d,\nnum2=%015d\n",num1,num2);
    printf("octal and hexa of num3 are :\n");
    printf("octal=%o\n,hexa=%x\n",num3,num3);
    
    // use '-' flag, field width = 15 for one integer variable
    // use '0' flag, field width = 15 for second integer variable
    // use '#' flag for third integer variable with hex and octal output
    // read a character from user and store in character variable using formatted I/O function
    printf("enter a character");
    scanf("%c", &ch);
    printf("character=%c\n",ch);

    // print one float variable with field width = 15
    printf("enter a float number");
    scanf("%f,\n",f);
    printf("float=%15d\n",f);
    printf("float with .2precision\n");
    printf("float=%.2f,\n",f);


    // print second float variable with .precision (precision = 2)

    // read and store hour, minute, second using ordinary character 🙂) in pattern
    printf("enter time, (hr:mm:ss):");
   scanf("%d:%d:%d",&hour,&min,&sec);
    scanf("hour=%d ,min=%d ,sec=%d\n",hour,min,sec);

    return 0;
}