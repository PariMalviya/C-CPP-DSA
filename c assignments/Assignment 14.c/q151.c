//function to find area of cirlce(TSRS) 
#include<stdio.h>
float area(float);
int main()
{
    float r, a;
    printf("Enter radius of circle : ");
    scanf("%f",&r);
    a=area(r);
    printf("Area is %f",a);
    return 0;
}
float area(float r)
{
    float c;
    c=3.14*r*r;
    return c;
}