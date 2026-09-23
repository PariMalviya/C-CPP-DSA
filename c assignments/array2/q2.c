//function to find greatest element in array of any size(TSRS)
#include<stdio.h>
int maximum(int a[],int n );
int main()

{
    int i, n,max;
    printf("enter number of elements of array : ");
    scanf("%d",&n);
    int a[n];
    printf("enter %d numbers",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    max=maximum(a,n);
    printf("%d",max);
    return 0;
}
int maximum(int a[],int n)
{
   int i, max=a[0] ;
    
    for(i=0 ; i<n ; i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    return max;


}