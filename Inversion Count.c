#include <stdio.h>
#include <stdlib.h>
long long int count, *a;
void merge(int,int,int);
void f(int l,int r)
{
  if(l<r)
  {
    int mid=(l+r)/2;
    f(l,mid);
    f(mid+1,r);
    merge(l,mid,r);
  }
}
void merge(int l,int mid,int r)
{
  int temp[r-l+1],i=l,j=mid+1,k=0;
  while(i<=mid && j<=r)
  {
    if(a[i]>a[j] && i<=mid)
    {
      count+=1+mid-i;
      temp[k]=a[j];
      j++;
      k++;
    }
    else
    {
      temp[k]=a[i];
      i++;
      k++;
    }
  }
  while(i<=mid)temp[k++]=a[i++];
  while(j<=r)temp[k++]=a[j++];
  for(i=0;i<=r-l;i++)
  {
    a[l+i]=temp[i];
  }
}
int main()
{
  int t;
  scanf("%d\n", &t);
  while(t--)
  {
    int n;
    count=0;
    scanf("%d",&n );
    a=(long long int*)malloc(sizeof (long long int)*n);
    for(int i=0;i<n;i++)scanf("%lld",&a[i] );
    f(0,n-1);
    printf("%lld\n", count);
  }
}
