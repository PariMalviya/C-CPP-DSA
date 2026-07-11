#include<stdio.h>
int main()
{
    int n,i,j;
    for(i=1;i<=4;i++)
    { 
        for(j=1,n=65;j<=7;j++)
        {
            if(j>=i && j<=8-i)
           { printf("%c",n);
            n++;}
            else printf(" ");
        } printf("\n");

    } return 0;
}