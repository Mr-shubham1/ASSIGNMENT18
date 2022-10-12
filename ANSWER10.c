#include<stdio.h>
void sort(char[]);
void rptdchar(char[]);
int main()
{
    char a[50];
    printf("enter a string:\n");
    fgets(a,50,stdin);
    sort(a);
    printf("repeated characters are: ");
    rptdchar(a);
    return 0;
}
void sort(char b[])
{
    int l,i,k;
    char t;
    for(i=0;b[i];i++);
    l=i;
    for(int j=0;j<=l-2;j++)
    {
        for(k=j+1;k<=l-1;k++)
        {
            if(b[j]>b[k])
            {
             t=b[j];
             b[j]=b[k];
             b[k]=t;
            }
        }
    }
}
void rptdchar(char c[])
{
    int i,j,l,count=1,k;
    for(i=0;c[i];i++);
    l=i-1;
    for(j=0;j<=l-2;j=k)
    {
        for(k=j+1;k<=l-1;k++)
        {
            if(c[j]==c[k])
            {
            count++;
            continue;
            }
            else
            break;
        }
             if(count>=2)
             {
                printf("%c ",c[j]);
             }
             count=1;
    }
}