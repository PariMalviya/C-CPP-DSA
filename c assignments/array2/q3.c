//function to find smallest element in array of any order
#include<stdio.h>
int minimum(int a[],int n );
int main()

{
    int i, n,min;
    printf("enter number of elements of array : ");
    scanf("%d",&n);
    int a[n];
    printf("enter %d numbers",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    min=minimum(a,n);
    printf("%d",min);
    return 0;
}
int minimum(int a[],int n)
{
   int i, min=a[0] ;
    
    for(i=0 ; i<n ; i++)
    {
        if(a[i]<min)
        min=a[i];
    }
    return min;


}