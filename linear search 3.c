#include<stdio.h>
int main()
{
    int i,n,key,arr[1000],pos=-1;

    printf("Enter the element number: ");
    scanf("%d",&n);

    printf("Enter the element: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the element you want to search:  ");
    scanf("%d",&key);

    for(i=0; i<n; i++)
    {
        if(key==arr[i])
        {
            pos=i+1;
            break;
        }
    }

    if(pos==-1)
    {
        printf("Element not found");
    }
    else
    {
        printf("Element position found: %d\n",pos);
    }



}
