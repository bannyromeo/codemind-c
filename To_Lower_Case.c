#include<stdio.h>
int main()
{
    char arr[100];
    scanf("%s",arr);
    for(int i=0;arr[i]!=NULL;i++)
    {
        if(arr[i]>=65 and arr[i]<=90)
        {
            arr[i]+=32;
        }
    }
    printf("%s",arr);
}