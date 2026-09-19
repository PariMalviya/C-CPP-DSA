//convert string into LOWERCASE
#include<stdio.h>
int main()
{
    int i;
    char str[30];
    printf("enter a string: ");
    scanf("%s",str);
    for(i=0;str[i];i++)
    {
         str[i]=str[i]+32;
    printf("%c",str[i]);
    }
    return 0;
}