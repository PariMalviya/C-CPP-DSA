#include<stdio.h>
int main()
{
    int i ,j,n;
    for(i=1;i<=5;i++)
    {
        for(j=1,n=65;j<=5;j++,n++)
        {
            if(j>=i)
            printf("%c",n);
            else printf(" ");

        }
        printf("\n");
    } return 0;
}