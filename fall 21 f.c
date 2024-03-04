#include<stdio.h>
int main()
{
    char str[1000],ch;
    int i,consonant,vowel;
    gets(str);
    i=vowel=consonant=0;
    while((ch=str[i])!='\0')
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
            vowel++;
        else if(ch>='a' && ch<='z')
            consonant++;



        i++;
    }
    printf(" vowel=%d\n",vowel);
    printf(" consonant=%d\n",consonant);
}
