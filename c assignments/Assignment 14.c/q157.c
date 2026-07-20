//funtion to calculate combinations of r selected from m(TSRS)
#include<stdio.h>
float comb(int,int);
int main()
{
    int n,r;
    printf("enter r slected from n : ");
    scanf("%d %d",&r,&n);
    printf("%f",comb(r,n));
    return 0;
}
float comb(int r,int n)
{
    float c,i,x=1,y=1;
    for(i=n ; i>=r; i--)
    x=x*i;
    for(i=1;i<=r;i++)
    y=y*i;
    c=x/y;
    return c;

}