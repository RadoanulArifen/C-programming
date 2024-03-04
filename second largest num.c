#include<stdio.h>
int main()
{
    int a[1000],i,n,largest,sec_largest;
    printf("Enter array size:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    largest=a[0];
    sec_largest=a[1];
    for(i=0;i<n;i++){
        if(a[i]>largest){
            sec_largest=largest;
            largest=a[i];
        }
        else if(a[i]>sec_largest && a[i]!=largest){
            sec_largest=a[i];
        }


    }
    printf("%d\n",sec_largest);
    printf("%d",largest);


    return 0;
}

