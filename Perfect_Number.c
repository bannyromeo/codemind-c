#include<stdio.h>
int main()
{
    int i,c=0, n;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            c=c+i;
        }
        
    }
  if(c==n)
  {
      printf("True");
  }
  else
  {
      printf("False");
  }
}