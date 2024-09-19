#include<stdio.h>
int main(){
    float p,t,r,si;
    printf("Enter the values of principle,time taken and rate of interest:");
    scanf("%f%f%f",&p,&t,&r);
    si=(p*t*r)/100;
    printf("Simple interest is %f",si);
    
return 0;
}
