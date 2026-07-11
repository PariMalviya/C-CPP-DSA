//inpute date in formate "dd/mm/yy"and give output in formate "Day-dd,Month-mm,Year-yyyy"
#include <stdio.h>
int main()
{
    int dd,mm,yy;
    printf(" Enter a Date as dd/mm/yyyy : ");
    scanf("%d/%d/%d",&dd,&mm,&yy);
    printf(" \" Day - %d, Month - %d, Year - %d \" ",dd,mm,yy);
return 0;
}