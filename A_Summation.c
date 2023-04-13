// Given a number N and an array A of N numbers. Print the absolute summation of these numbers.

// absolute value : means to remove any negative sign in front of a number .

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    int sum=0;
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum=sum+ar[i]; 
        
    } 
    if (sum>0)
        {
            printf("%d\n",sum);
        }
        else
        {
            printf("%d\n",sum*-1);
        }

    return 0;
}