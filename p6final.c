#include <stdio.h>
#include <string.h>

void input(char *a,char *b)
{
  printf("Enter two strings: \t");
  scanf("%s %s",a,b);
}

int cmp(char *a,char *b)
{
  int result=0;
  for (int i=0;a[i]!='\0'&& b[i]!='\0';i++)
  {
    if (a[i]>b[i])
     result=1;
    else if (a[i]<b[i])
     result=-1;
    else 
     continue;

    break;
  }

  if(result==0)
  {
    if(strlen(a)==strlen(b))
      result=0;
    else if(strlen(a)>strlen(b))
      result=1;
    else
      result=-1;
  }
  return result;
}
void output(char *a,char *b,int result)
{
  if(result==0)
  printf("%s is equal to %s \n",a,b);
  else if(result==1)
  printf("%s is greater than %s \n",a,b);
  else
  printf("%s is lesser than %s \n",a,b);
}

int main()
{
  char x[50],y[50];
  int r;
  input(x,y);
  r=cmp(x,y);
  output(x,y,r);
  return 0;
} 

