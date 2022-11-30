#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int a;
        scanf("%d",&a);
        int j,c=0,f=1;
        for(j=0;j<a;j++)
        {
            c=a-j;
            f=f*c;
        }
        printf("%d
",f);
    }
   
}