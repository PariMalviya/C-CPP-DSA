//length of string without using buit in method
#include<stdio.h>
#include<string.h>
void f1()
{
    char str[50];
    int len;
    printf("Enter a string ");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    for(len=0;str[len];len++);
    printf("length is %d",len);
}
int main()
{
    f1();
    printf("\n");
    return 0;
}