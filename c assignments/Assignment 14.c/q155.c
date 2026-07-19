//function to print n odd natural numbers(TSRN)
#include<stdio.h>
void oddnum(int);
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    oddnum(n);
    return 0;

}
void oddnum(int n)
{
    int i;
    for(i=1;i<=n;i++)
    printf(" %d ",2*i-1);
}