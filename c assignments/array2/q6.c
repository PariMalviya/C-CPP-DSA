//function to swap two elements of given index
#include<stdio.h>
int swap (int *a,int n);
int main()
{
    int i,n;
    printf("no of elements in array : ");
    scanf("%d",&n);
    int a[n];
    printf("enter %d numbers : ",n);
    for(i=0;i<n;i++)
    scanf(" %d",&a[i]);
    swap(a,n);
    return 0;
}
int swap (int *a,int n)
{
    int t,x,y,i;
    printf("enter index number you wnt to swap : ");
    scanf("%d %d",&x,&y);
    t=a[x-1];
    a[x-1]=a[y-1];
    a[y-1]=t;
    for(i=0;i<n;i++)
    printf("%d ",a[i]);

}