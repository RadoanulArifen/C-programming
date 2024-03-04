#include<stdio.h>
int main(){
 int n,i,j,temp,a[1000];
    printf("Enter the value number: ");
    scanf("%d",&n);
    printf("Enter the value: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n-1;i++){
        for(j=0;j<n-1;j++){
            if(a[j]>a[i+1]){
                temp=a[j];
                a[j]=a[i+1];
                a[i+1]=temp;
            }
        }
    }

    printf("element are sorted: \n");
    for(i=0;i<n;i++){
        printf("%d\n",a[i])
    }

}
