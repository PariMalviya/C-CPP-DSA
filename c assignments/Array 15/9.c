//second smallest element
#include<stdio.h>
int main()
{
    int i, a[10],r,t;//r for repeat the loop and t for swaping variable
    printf("enter 10 numbers");
    for(i=0;i<=9;i++)
    scanf(" %d",&a[i]);
    for(r=1;r<=2;r++)
    {
        for(i=9;i>=9-r;i--)
        {
            if(a[i]<a[i-1])
            {
                t=a[i];
                a[i]=a[i-1];
                a[i-1]=t;
            }
        }
    }
    printf("\n");
    printf("%d",a[1]);
    return 0;
}