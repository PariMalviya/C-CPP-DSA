#include<stdio.h>
int main()
{
    int num ;
    printf(" Enter a month number : ");
    scanf("%d",&num);
    switch(num)
    {
        case 1:
        printf("\n31 Days");
        break;
        case 3:
            printf("\n31 Days");
            break;
        case 5:
            printf("\n31 Days");
            break;
        case 7:
            printf("\n31 Days");
            break;  
        case 9:
            printf("\n31 Days");
            break;  
        case 10:
            printf("\n31 Days");
            break;
        case 12:
            printf("\n31 Days");
            break;    
        case 4 :
            printf("\n31 Days");
            break;
        case 6:
            printf("\n31 Days");
            break;
        case 8:
            printf("\n31 Days");
            break;
        case 11:
            printf("\n31 Days");
            break;
        case 2 :
            printf("\n29 or 28 Days");
             break;
        dafault :
            printf("invalid month number");
    }
    printf("\noutside switch");
    return 0;
}