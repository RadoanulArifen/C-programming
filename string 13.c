#include <stdio.h>
int main(){
    char s1[30]="bangladesh";
    char s2[30]="Win worldcup";
    char temp[30];
    printf("%s ",s1);
    printf("%s\n",s2);

    strcpy(temp,s1);
    strcpy(s1,s2);
    strcpy(s2,temp);

    printf("%s ",s1);
    printf("%s\n",s2);
return 0;
}
