#include<stdio.h>

int fibonacci(int num);

int main(){
    int num =3;
    //printf("enter the number of elements in the series ");
    //scanf("%d",&num);//

    for(int i=0;i<=num;i++){

    
    printf("fibonacci series is %d \n",fibonacci(i)); 
    }
    return 0;

}
int fibonacci(int num){
    if(num==0){
        return 0;
    }
    else if (num==1)
    {
      return 1;
    }
    else{
        return fibonacci(num - 1) + fibonacci(num -2);
    }

}