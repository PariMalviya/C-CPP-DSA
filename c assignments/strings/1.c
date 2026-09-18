//count occurance of character in string
#include<stdio.h>
int main()
{
    int i,a,count=0;
    char b;
    char str[20];
    printf("enter a string : ");
    for(i=0;str[i];i++)
    {
        scanf("%c",&str[i]);
    }
    a=i;
    printf("enter a character: ");
    scanf(" %c",&b);
    for(i=0;i<=a;i++)
    {
    if(b==str[i])
    count++;
    }
    printf("%d",count);
}