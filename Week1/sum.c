 #include<stdio.h>
int main()
{
//sum of digits of a number
int s=0,n;
   printf("Enter the value of n: ");
   scanf("%d",&n);
 while(n>=1){
     s=s+n%10;
     n=n/10;
 }
  printf("%d",s);
    return 0;
}
