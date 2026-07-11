//q34. input a number and digit and write combined(ex-no.876 & digit 6 output 8766)
#include <stdio.h>
int main()
{
    int a ,b ;
    printf("Enter a number and a digit : ");
    scanf("%d %d",&a,&b);
    printf("%d",a*10+b);
    return 0;

}