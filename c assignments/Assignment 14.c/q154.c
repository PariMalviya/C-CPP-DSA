//function to print N natural numbers(TSRN)
#include<stdio.h>
void num(int);
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    num(n);
    return 0;
}
void num(int n)
{
    int i;  
    for(i=1;i<=n;i++)
    printf(" %d ",i);

}