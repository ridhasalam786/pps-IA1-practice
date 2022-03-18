#include <stdio.h>

struct complex
{
  float real,img;
};
typedef struct complex complex;

complex input()
{
  complex a;
  printf ("Enter the real & imaginary part of the complex number: \n");
  scanf ("%f %f",&a.real,&a.img);
  return a;
}

complex add(complex a,complex b)
{
  complex sum;
  sum.real=a.real+b.real;
  sum.img=a.img+b.img;
  return sum;
}

void output(complex a,complex b,complex sum)
{
  printf("Complex number 1:%f+i%f \n",a.real,a.img);
  printf("Complex number 2:%f+i%f \n",b.real,b.img);
  printf("Sum of the Complex numbers:%f+i%f \n",sum.real,sum.img);
}

int main()
{
  complex x,y,z;
  x=input();
  y=input();
  z=add(x,y);
  output(x,y,z);
  return 0;
}
