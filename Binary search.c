#include<stdio.h>
int main()
{

    int i,l,r,mid,n,key,arr[100];
    printf("Enter the number of element: ");
    scanf("%d",&n);
    printf("Enter element: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);

    }
    printf("Enter the value you want to find: ");
    scanf("%d",&key);

    l=0;
    r=n-1;
    mid=(l+r)/2;

    while(l<=r)
    {
        if(arr[mid]<key){
            l=mid+1;
        }



        else if(arr[mid]==key)
        {
            printf("%d Location found: %d\n",key,mid+1);
            break;
        }
        else
        {
            r=mid-1;

        }
         mid=(l+r)/2;

    }
    if(l>r)
    {
        printf("Element not found");
    }
    return 0;

}

