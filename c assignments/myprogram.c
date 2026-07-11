#include <stdio.h>
int main(){

    int n = 4;
    int tem = n;
    
    for(int i = 1; i <= n; i++){
        tem = n;
        while(1 <= tem-1){
            printf(" ");
             tem--;
        }
         
        for(int j = 1; j <= i; j++){
            printf("%d",j);
        }
        for(int j = i-1; j >= 1; j--){
             printf("%d",j);
        }
        printf("\n");
       
    }

}