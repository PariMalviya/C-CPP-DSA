//print greatest among three integers
#include <stdio.h>
int main()
{
    int num1,num2,num3 ;
    printf(" Enter three integers : ");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1>=num2)
    
        if(num1>=num3)
        printf("%d",num1);
        else printf("%d",num3);
    
    else  if(num2>=num3)
        printf("%d",num2);
        else printf("%d",num3);

    
    return 0;
}
