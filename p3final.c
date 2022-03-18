#include <stdio.h>

int input_n()
{
  int n;
  printf ("Enter the value of n: \t");
  scanf ("%d",&n);
  return n;
}

int sum_n(int n)
{
  int sum=0;
  for(int i=1;i<=n;i++)
  sum+=i;
  return sum;
}

void output(int n,int sum)
{
  for(int i=1;i<n;i++)
  printf ("%d+",i);

  printf ("%d is %d",n,sum);
}

int main()
{
  int a,b;
  a=input_n();
  b=sum_n(x);
  output(x,y);
  return 0;
}
