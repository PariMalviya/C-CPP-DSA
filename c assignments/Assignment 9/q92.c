//92.c LCM and HCF of twi numbers
#include <stdio.h>
int main()
{
    int a,b,i;
    printf("Enter two number : ");
    scanf("%d %d",&a,&b);
    for(i=a;i>=1;i--)
    /*{ 
        if(a%i==0&&b%i==0)
       {printf("LCM is %d",a*b/i);
        break;}
        
    }
    return 0;
}*/
{
    if(a%i==0&&b%i==0)
    { printf("HCF is %d",i);
    break; }
}
}