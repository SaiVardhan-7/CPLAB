#include<stdio.h>

int fib(int n);

int main()
{ 
    int k;
    scanf("%d",&k);
 printf("Fibonacci number is %d\n",fib(k));

    return 0;
}

int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int fibN= fib(n-1) + fib(n-2);
    return fibN;
}
