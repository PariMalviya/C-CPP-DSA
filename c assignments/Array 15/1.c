//calculate sum of numbers stored in array of size 10.
#include<stdio.h>
int main()
{
    int i,a[10],sum=0;
    printf("Enter 10 numbers : ");
    for(i=0 ; i<=9 ; i++)
    scanf("%d ",&a[i]);
    for(i=0 ; i<=9 ; i++)
    sum=sum+a[i];
    printf("sum is %d",sum);
    return 0;
}