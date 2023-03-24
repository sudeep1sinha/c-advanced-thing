#include<stdio.h>
void now();
void after();
void goodmorning();
int main(){
    goodmorning();
    return 0;
}
void goodmorning(){
    printf("sudeep is awake \n");
    
    now();
}
void now(){
    printf("sudeep brush teeth \n");
    after();
}
void after(){
    printf("sudeep play games \n");
}