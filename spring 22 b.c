#include <stdio.h>
#include<string.h>
int main(){
    char str[1001],count=0;
    gets(str);
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]=='o' && str[i+1]=='k')
            count++;
            i++;
    }
   printf("%d",count);

return 0;
}
