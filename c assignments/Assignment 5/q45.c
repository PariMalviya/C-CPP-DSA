//check the number is three digit or not 
#include <stdio.h>
int main()
/*{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    if(num>99 && num<1000)
    printf("three digit");
    else printf("not a three digit");
    return 0;
}*/
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    a=a/100;
    if(a>=1&&a<10)
    printf("three digit");
    else printf("not a three digit");
    return 0;
}