#include<stdio.h>

int sum(int a ,int b);   //function prototype declaration
int change(int c);

int main(){
    int c , d;
    c=sum(5,15);
    
    printf("the value of c is %d \n",c);
   d=change(5);
    printf("the value of change is %d",d);
    return 0;
}

int sum(int a, int b){
int result ;
result=a+b;
printf("hey \n");
return result;

}

int change(int c){
    int sum;
    sum=c+1;
    
    return sum;
}
