#include<stdio.h>
int countword(char[]);
int main()
{
    int c;
    char a[200];
    printf("enter a string:\n");
    fgets(a,200,stdin);
    c=countword(a);
    printf("no. of words in string is %d",c);
    return 0;

}
int countword(char b[])
{
  int count=0;
    for(int i=0;b[i];i++)
    {
        if((b[i]==' ')||(b[i]=='\n'))
        {
           count++;
        }
    }
    return count;
}