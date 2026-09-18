//greatest number stored in array
#include<stdio.h>
int main()
{
    int i ,a[10] ,max ;
    printf("enter 10 numbers: ");
    for(i=0 ; i<=9  ;i++)
    scanf("%d ", &a[i]);
    max=a[0];
    for(i=0 ; i<=9 ; i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    printf("greatest numbers is %d",max);
    return 0;
}