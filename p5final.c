#include <stdio.h>
#include <math.h>

float input()
{
  float n;
  printf ("Enter a number: \t");
  scanf ("%f",&n);
  return n;
}

float my_sqrt(float x)
{
  float guess=x/2;
  float next=x/guess;
  while (fabs(guess-next)>0.000001)
    {
      guess=(guess+next)/2;
      next=x/guess;
    }
  return guess;
}

void output(float n,float sqrt_result)
{
  printf("Square root of %f is %f",n,sqrt_result);
}

int main()
{
  float a,b;
  a=input();
  b=my_sqrt(a);
  output(a,b);
  return 0;
}

