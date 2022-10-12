#include<stdio.h>
void checkstr(char *);
int main()
{
    char a[40];
    printf("enter a string:\n");
    fgets(a,40,stdin);
    checkstr(a);
    return 0;
}
void checkstr(char b[])
{
    int i,l,alpha=0,dgt=0;
    for(i=0;b[i];i++);
    l=i-1;
    for(i=0;i<l;i++)
    {
        if(((b[i]>=65)&&(b[i]<=90))||((b[i]>=97)&&(b[i]<=122)))
           alpha++;
           else if((b[i]>='0')&&(b[i]<'9'))
           dgt++;
    }
    if((alpha>=1)&&(dgt>=1))
    printf("string is alphanumeric");
    else
    printf("string is NOT alphanumeric");
}