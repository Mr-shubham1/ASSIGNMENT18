#include<stdio.h>
int length(char *);
int stringcmp(char *,char *,int,int);
int main()
{
    int l1,l2;
   char a[40],b[40];
   printf("enter string A:\n");
   fgets(a,40,stdin);
   printf("enter string B:\n");
   fgets(b,40,stdin);
   l1=length(a);
   l2=length(b);
   printf("%d",stringcmp(a,b,l1,l2));
   return 0;
}

int length(char a[])
{
    int i;
    for(i=0;a[i];i++);
    return i-1;
}

int stringcmp(char a[],char b[],int l1,int l2)
{
    int l,i;
   l=l1>l2?l1:l2;
    for(i=0;i<l;i++)
       {
        if((a[i])==(b[i]))
        continue;
        else
         break;
    }
    if(i==l)
    return 0;
    else
    {
        if((a[i])>(b[i]))
        return 1;
        else
        return -1;
    }

}