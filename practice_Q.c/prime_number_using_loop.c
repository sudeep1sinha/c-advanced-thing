#include<stdio.h>

int main(){
    int num ,prime=1;
    printf("enter the value of num");
    scanf("%d",&num);

    for(int i=2;i<num;i++){
        if(num%i==0){
            prime=0;
            break;
        }
    }
    if(prime==0 && num!=2){
            printf("num is not a prime no.");
        }
    else{
            printf("num is a prime no.");
        }
    return 0;
}