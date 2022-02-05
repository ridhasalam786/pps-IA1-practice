#include <stdio.h>

int input()
{
  int a;
  printf ("Enter a number: \t");
  scanf ("%d",&a);
  return a;
}

int cmp(int a,int b,int c)
{
  int lar;
  if(a>b&&a>c)
  lar=a;
  else if(b>c)
  lar=b;
  else
  lar=c;
  return lar;
}

void output(int a,int b,int c,int lar)
{
  printf ("Largest among %d,%d & %d is %d",a,b,c,lar);
}

int main()
{
  int x,y,z,l;
  x=input();
  y=input();
  z=input();
  l=cmp(x,y,z);
  output(x,y,z,l);
  return 0;
}
