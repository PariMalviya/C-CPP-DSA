//sum of all even and sum of all odd
#include<stdio.h>
int main() 
{
    int i, a[10], sum_even=0 , sum_odd=0 ;
    printf("Enter 10 numbers : ");
    for(i=0 ; i<=9 ; i++)
    scanf("%d",&a[i]);
    for( i=0 ; i<=9 ; i++)
    {
        if(a[i]%2)
        sum_odd=sum_odd +a[i];
        else
        sum_even=sum_even +a[i];
    }
    printf("sum of all even is %d",sum_even);
    printf("sum of all odd is %d",sum_odd);
    return 0;

}