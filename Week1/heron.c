#include<stdio.h>
#include<math.h>
int main()
{
  //Area of triangle by using heron's formula
  float a,b,c,s,A;
  printf("Enter the values of a,b and c");
  scanf("%f%f%f",&a,&b,&c);
  s=(a+b+c)/2;
  A=sqrt(s*(s-a)*(s-b)*(s-c));

  printf("Area of triangle is %f",A);
}
