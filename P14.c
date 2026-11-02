#include <stdio.h>
int main()
{
    int a[50],n,i,key,frequency =0;
    printf("Enter number of elements:");
    scanf("%d",&n);
    if(n<1||n>50)
    {
        printf("Enter a value from 1to50.\n");
        return 0;
    }
    printf("Enter %d integers:",n);
    for (i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter element to search:");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            printf("Element found at position %d\n",i+1);
            frequency++;
        }
    }
    if(frequency==0)
    printf("Element not found .\n");
        else
        printf("Total frequency =%d\n",frequency);
        return 0;
    }