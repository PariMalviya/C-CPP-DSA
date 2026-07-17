#include<stdio.h>
int main()
{
    int x,a,b;
    while(1)
   {
    printf("\n1.Addition");
    printf("\n2.Substraction");
    printf("\n3.Multiplication");
    printf("\n4.Division");
    printf("\n5.Exit");
    printf("\n Enter your choice : ");
    scanf("%d",&x);
        switch(x)
    {
        case 1 :
         printf("\n Enter two Numbers : ");
    scanf("%d %d",&a,&b);
        printf("\n%d",a+b);
        break;
        case 2:
         printf("\n Enter two Numbers : ");
    scanf("%d %d",&a,&b);
        printf("\n%d",a-b);
        break;
        case 3:
         printf("\n Enter two Numbers : ");
    scanf("%d %d",&a,&b);
        printf("\n%d",a*b);
        break;
        case 4:
         printf("\n Enter two Numbers : ");
    scanf("%d %d",&a,&b);
        printf("\n%d",a/b);
        case 5:
        break;
        default:
        printf("\n Invalid choice");
    }  
    if(x==5)
     break;

 printf("\noutside switch");
   }
 return 0;
}
