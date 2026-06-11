#include<stdio.h>
int main(){
    for (int i = 5; i >= 1; i--){
            //spaces
            for (int j = 5-i; j >=1; j--){
                    printf(" ");
                }
            //stars
            for (int j = 2*i-1; j >=1 ;j--){
                    printf("*");
                }
            //spaces
            for (int j = 5-i; j >=1; j--){
                    printf(" ");
                }
        printf("\n");}
    return 0;
}