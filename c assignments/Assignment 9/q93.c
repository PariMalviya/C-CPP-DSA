#include <stdio.h>
int main()
{
    int s=0,n,i;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {s=s+i*i;
   }
     if(i>n)
    printf("sum of squares of %d is %d",n,s);


    return 0;

}