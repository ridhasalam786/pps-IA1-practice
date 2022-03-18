#include <stdio.h>

struct complex
{
  float real,img;
};
typedef struct complex complex;

int get_n()
{
  int n;
  printf("Enter array size: \t");
  scanf("%d",&n);
  return n;
}

complex input_complex()
{
  complex c;
  printf ("Enter the real & imaginary part of the complex number: \n");
  scanf ("%f %f",&c.real,&c.img);
  return c;
}

void input_n_complex(int n,complex c[n])
{
  for(int i=0;i<n;i++)
    c[i]=input_complex();
}

complex add(complex a,complex b)
{
  complex sum;
  sum.real=a.real+b.real;
  sum.img=a.img+b.img;
  return sum;
}

complex add_n_complex(int n,complex c[n])
{
  complex result={0,0};
  for(int i=0;i<n;i++)
  {
    result.real+=c[i].real;
    result.img+=c[i].img;
    add(result,c[i]);
  }
  return result;
}

void output(int n,complex c[n],complex result)
{
  for(int i=0;i<n;i++)
    printf("Complex number %d :%f+i%f \n",i+1,c[i].real,c[i].img);
  for(int i=0;i<n-1;i++)
    printf("(%f+i%f)+",c[i].real,c[i].img);
  printf("(%f+i%f)=(%f+i%f) \n",c[n-1].real,c[n-1].img,result.real,result.img);
} 

int main()
{
  int n;
  n=get_n();
  complex c[n];
  input_n_complex(n,c);
  complex result=add_n_complex(n,c);
  output(n,c,result);
  return 0;
}
