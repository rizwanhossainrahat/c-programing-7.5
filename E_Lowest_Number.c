// Given a number N and an array A of N numbers. Print the lowest number and its position.

// Note: if there are more than one answer print first one's position.

#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
     int a[n]; 
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
     int minimum=INT_MAX,position;

     for (int i = 0; i < n; i++)
     {
        if(a[i]<minimum)
        {
            minimum=a[i];
            position=i+1;
        }
     }
     printf("%d %d\n",minimum,position);    
    return 0;
}