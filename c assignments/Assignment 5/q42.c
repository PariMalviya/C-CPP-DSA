//number is divisible by 5 or not
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    if(num%5)
    printf("not divisible by");
    else printf("divisible by 5");
    return 0;
}

