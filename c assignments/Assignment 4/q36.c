//q36. rotate the digits of the number 1 right 
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter a three digit number : ");
    scanf("%d",&a);
    b=a%10;
    a=a/10;
    printf("%d",b*100+a);
    return 0;
}