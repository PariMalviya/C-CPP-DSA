//print the number given by user is positive or non negative
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    if(num>0)
    printf("positive");
    else printf("Non positive");
    return 0;
}