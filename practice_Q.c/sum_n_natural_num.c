#include<stdio.h>

int sum(int n);

int main(){
    int num=3;
    printf("the sum of first n natural number is %d",sum(num));
    return 0;

}
int sum(int n){
    if(n==0){
        return 0;
    }



else{
return n+sum(n-1);
}
}

