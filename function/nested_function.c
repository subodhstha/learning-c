/*nested of function*/
#include<stdio.h>
int different(int e, int f)
{
    if(e != f)
        return 1;
    else
        return 0;
}
float ratio(int x, int y, int z)
{
    if(different(y,z))
        return((float) x/(y-z));
    else
        return 0.0;

}
int main()
{
    int a, b, c;
    float r;
    printf("Enter any three number\n");
    scanf("%d %d %d",&a,&b,&c);
    r = ratio(a,b,c);
    printf("Ratio is %f",r);
}