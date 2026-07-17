#include <stdio.h>
int main()
{
    int x;
    printf("Enter a day number of weak : ");
    scanf("%d",&x);
    switch(x)
      {
      case 1:
      printf("\nHappy Monday");
      break;
      case 2:
      printf("\nAmazing Tuesday");
      break;
      case 3:
      printf("\nfab wednesday");
      break;
      case 4:
      printf("\nThrusty Tuesday");
      break;
      case 5:
      printf("\nfab Friday");
      break;
      case 6:
      printf("\nsunder Saturday");
      break;
      case 7:
      printf("\nsunny Sunday");
      break;
      default :
      printf("\nInvalid");
    }
    return 0;
}