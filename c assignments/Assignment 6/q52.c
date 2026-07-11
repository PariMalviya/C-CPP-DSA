//take marks of 5 subjects 33 is passing marks out of 100 check a student is paas or fail
#include <stdio.h>
int main()
{
    int n1,n2,n3,n4,n5;
    printf("Enter marks of all 5 subjects : ");
    scanf(" %d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);
    if(n1>=33 && n2>=33 && n3>=33 && n4>=33 && n5>=33)
    printf("Pass");
    else printf("fail");
    return 0;
    
}