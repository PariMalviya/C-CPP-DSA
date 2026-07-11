//swap the value of two int variable
#include <stdio.h>
int main()
{
    int a,b,c;
    printf(" Enter two numbers : ");
    scanf("%d %d",&a,&b);
    c=a+b;
    a=c-a;
    b=c-b;
    printf(" %d %d ",a,b);
    return 0;
}