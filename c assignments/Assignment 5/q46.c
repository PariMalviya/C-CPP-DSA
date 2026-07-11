//check the roots of quadratic equation
#include <stdio.h>
int main()
{
    int a,b,c,D;
    printf(" Enter coefficients of quadratic equation : ");
    scanf("%d %d %d",&a,&b,&c);
    D=b*b-(4*a*c);
    if(D==0)
    printf(" Equal roots");
    else 
    if(D<0)
    printf("imaginary roots");
    else printf("Real roots");
    return 0;
    

}