//sorting of array
#include<stdio.h>
int main()
{
    int i, a[0],r,t;//r for repeat the loop and t for swaping variable
    printf("enter 10 numbers");
    for(i=0;i<=9;i++)
    scanf("%d ",&a[i]);
    for(r=1;r<=9;r++)
    {
        for(i=0;i<=9-r;i++)
        {
            if(a[i]>a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    }
    printf("\n");
    for(i=0;i<=9;i++);
    printf("%d",a[i]);
    return 0;
}