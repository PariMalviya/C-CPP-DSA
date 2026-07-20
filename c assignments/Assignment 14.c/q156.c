//function to calculate factorial of a number
#include<stdio.h>
int fact(int);
int main()
{
    int num, x ;
    printf("Enter a Number : ");
    scanf("%d",&num);
    x=fact(num);
    printf("factoria is %d",x);
    return 0;
}
int fact(int num)
{
    int i, fact ;
    for(i=1,fact=1; i<=num; i++)
    fact=fact*i ;
    return(fact);
}