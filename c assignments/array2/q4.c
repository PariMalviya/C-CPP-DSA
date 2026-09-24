//function to rotate array by n position in d direction 
#include<stdio.h>
void rotate(int *a,int n);
int main()
{
    int i,n;
    printf("no of elements in array : ");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of array : ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    rotate(a,n);
}
void rotate(int *a,int n)
{     int i, r,d,t,b=0;
     printf("\nenter position to rotate and direction should be 1 for right and -1 for left : ");
    scanf("%d %d",&r,&d);
    if(d==-1)
    {
        while(b<r)
        {    
            t=a[0];
            for(i=0;i<n-1;i++)
            {
                
                a[i]=a[i+1];
                
            }
            a[n-1]=t;
            b++;
        }
    }    
         
    else
    {
    while(b<r)
        {
            t=a[n-1];
            for(i=n-1;i>0;i--)
            {
                
                a[i]=a[i-1];
                
            }
             a[0]=t;
            b++;
        }
    }
    for(i=0;i<n;i++)
    printf(" %d",a[i]);
}