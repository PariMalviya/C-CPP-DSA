#include<stdio.h>
int main()
{
    int i,count=0,repeat,j;
    char str[30];
    printf("Enter a string: ");
    scanf("%s",str);
    for(i=0;str[i];i++)
    {
        if('a'==str[i]|| 'e'==str[i]||'i'==str[i] || 'o'==str[i] ||'u'==str[i] || 'A'==str[i] || 'E'==str[i] || 'I'==str[i] ||'O'==str[i] || 'U'==str[i])
        {
            for(j=i+1 ,repeat=0; str[j] ; j++)
            {  
              if(str[i]==str[j])
               repeat++;
            }
            if(repeat==0)
            count++;
        }
    }
    printf("number count of vowels is %d",count);
    return 0;
}