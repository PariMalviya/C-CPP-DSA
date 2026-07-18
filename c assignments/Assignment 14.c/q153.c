// function to find simple interest (TSRS)
#include <stdio.h>
float simpleInterest(float, float, float);
int main()
{
    float p, r, t ;
    printf("Enter principle amount ,rate and time : ");
    scanf("%f %f %f", &p, &r, &t);
    printf("%f", simpleInterest(p,r,t));

}
float simpleInterest(float p, float r, float t)
{
    float c = (p*r*t)/100;
    return c;

}
