// Given a number N and an array A of N numbers. Print the array after doing the following operations:

// Replace every positive number by 1.
// Replace every negative number by 2.

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
       scanf("%d",&ar[i]);
       if(ar[i]>0)
      {
         printf("%d ",ar[i]=1);
      }
      else if(ar[i]<0)
      {
        printf("%d ",ar[i]=2);
      }
      else
      {
        printf("%d ",ar[i]=0);
      }
    }
    
    return 0;
}