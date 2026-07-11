//input "HH:MM" and give output HH hour and MM minutes
#include <stdio.h>
int main()
{
    int HH,MM;
    printf(" Enter time in formate HH:MM :: ");
    scanf("%d:%d",&HH,&MM);
    printf(" %d Hour and %d Minutes ",HH,MM);
    return 0;
}