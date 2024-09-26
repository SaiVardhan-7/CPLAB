#include<stdio.h>
int main()
{
int n;
printf("Enter a number\n");
scanf("%d",&n);
while(n != 0){
int s=n%10;
n=n/10;
printf("%d",s);
}
}
