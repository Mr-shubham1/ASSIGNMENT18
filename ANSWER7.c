#include<stdio.h>
void checkplndrm(char *);
int main()
{
    char a[40];
    printf("enter a string:\n");
    fgets(a,40,stdin);
    checkplndrm(a);
    return 0;
}
void checkplndrm(char b[])
{
    int i,l;
    for(i=0;b[i];i++);
    l=i-1;
    for(i=0;i<l/2;i++)
    {
        if(b[i]==b[l-1-i])
        continue;
        else
        break;
    }
    if(i==l/2)
    printf("string is palindrome");
    else
    printf("string s not palindrome");
}