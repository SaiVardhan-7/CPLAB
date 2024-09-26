#include<stdio.h>
int main(){
int a,b,c,d;
printf("Enter the values of a,b,c and d\n");
scanf("%d%d%d%d",&a,&b,&c,&d);
 int max,min;
 max=a;
 if(max<b){
           max=b;
           }
if(max<c){
          max=c;
          }
if(max<d){
          max=d;
          }
   min=a;
  if(min>b){
           min=b;
           }
if(min>c){
          min=c;
          }
if(min>d){
          min=d;
          }
          printf("Among a,b,c and d the maxmium number is %d and minimum number is %d",max,min);
                    
}
