#include<stdio.h>
int length(char *);
void reverse(char *,int);
int main()
{
    int l;
    char a[40];
    printf("enter a string:\n");
    fgets(a,40,stdin);
    l=length(a);
    reverse(a,l);
    return 0;
}
int length(char b[])
{
    int i;
    for(i=0;b[i];i++);
    return i-1;
}
void reverse(char c[],int l)
{
    int i;
    char t;
    for(i=0;i<l/2;i++)
    {
      t=c[i];
      c[i]=c[l-i-1];
      c[l-i-1]=t;
    }
    puts(c);
}