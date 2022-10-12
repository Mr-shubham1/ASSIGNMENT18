#include<stdio.h>
void stringlwr(char *);
int main()
{
    char a[40];
    printf("enter a string:\n");
    fgets(a,40,stdin);
    stringlwr(a);
    puts(a);
    return 0;
}
void stringlwr(char b[])
{
    int i,l;
    for(i=0;b[i];i++);
    l=i-1;
    for(i=0;i<l;i++)
    {
        if((b[i]>=97)&&(b[i]<=122))
        continue;
        else
        b[i]=b[i]+32;
    }
}