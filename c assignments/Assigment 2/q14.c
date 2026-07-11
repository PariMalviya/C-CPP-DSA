//q14.calculate simple interest
#include <stdio.h>
int main ()
{
    float amount,interest,time;
    printf(" Enter pricipal amount in rupee  : ");
    scanf("%f",&amount);
    printf(" Enter rate of interest in rupee : ");
    scanf("%f",&interest);
    printf(" Enter time in years : ");
    scanf("%f",&time);
    printf("simple interest is %f",(amount*interest*time)/100);
    return 0;

}