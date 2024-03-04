#include<stdio.h>
int main()
{

    int i,j,temp,n,arr[10000];

    printf("Enter element number: ");
    scanf("%d",&n);
    printf("Enter the elements:  \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1; j++)
        {
            if(arr[j]>arr[i+1])
            {
                temp=arr[j];
                arr[j]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }

    for(i=0; i<n; i++)
    {
        printf("Sort : %d\n",arr[i]);
    }
    return 0;


}
