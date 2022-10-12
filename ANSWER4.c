#include<stdio.h>
void stringupr(char *);
int main()
{
    char a[40];
    printf("enter a string:\n");
    fgets(a,40,stdin);
    stringupr(a);
    puts(a);
   return 0;
}
void stringupr(char b[])
{
   int i,l;
   for(i=0;b[i];i++);
   l=i-1;
   for(i=0;i<l;i++)
   {
      if((b[i]>=65)&&(b[i]<=90))
      continue;
      else
       b[i]=b[i]-32;
   }
}
