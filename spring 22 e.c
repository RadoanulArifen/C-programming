#include <stdio.h>
long long int fun(int n){
    if(n==3) return 3;
    if(n==2) return 2;
    if(n==1) return 1;
    long long int Ans = fun(n-1)*fun(n-2)*fun(n-3);
return Ans;
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%lld\n", fun(n));
return 0;
}
