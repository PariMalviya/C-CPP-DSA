//function to sort an array of any size (TSRN)
#include<stdio.h>
void sort(int A[],int n);
int main()

{
    int i, n;
    printf("enter number of elements of array : ");
    scanf("%d",&n);
    int A[n];
    printf("enter %d numbers",n);
    for(i=0;i<n;i++)
    scanf("%d",&A[i]);
    
    sort(A,n);
    return 0;

}
void sort(int A[],int n)
{
   int i,r,t;
   
    for(r=1; r<n ;r++)
    {
        for(i=0;i<n-r;i++)
        {
            if(A[i]>A[i+1])
            {
                t=A[i];
                A[i]=A[i+1];
                A[i+1]=t;
            }
        }
    }
    printf("\n");
    for(i=0;i<n;i++)
    printf("%d ",A[i]);
}
