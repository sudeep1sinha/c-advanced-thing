#include<stdio.h>

int main(){
    int factorial =1,n=7;
    for(int i=1; i<=n; i++){
        factorial*=i;
    }
    printf("the factorial of 7 is %d is %d \n",n , factorial);
    return 0;
}