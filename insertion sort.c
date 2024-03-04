#include<stdio.h>
int main()
{

    int n,i,j,temp,a[1000];
    printf("Enter the value number: ");
    scanf("%d",&n);
    printf("Enter the value: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int x=0;
    temp=0;
    for(i=0; i<n; i++)
    {
        x=a[i];
        for(j=i-1; j>=0; j--)
        {
            if(x<a[j])
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Value are insertion sorted: \n");
    for(i=0; i<n; i++)
    {
        printf("%d\n",a[i]);
    }

}
