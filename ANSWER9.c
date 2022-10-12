#include<stdio.h>
#include<string.h>
void reverse(char[]);
int main()
{
    int j=0;
    char a[200],word[50],res[200];
    printf("enter a sentence:\n");
    fgets(a,200,stdin);
    for(int i=0;a[i]!='\0';i++)
    {
      if((a[i]==' ')||(a[i]=='\n'))
      {
          word[j]='\0';
          j=0;
          reverse(word);
          strcat(res,word);
          strcat(res," ");
      }
      else
      {
           word[j]=a[i];
           j++;
      }
    }
    reverse(res);
    puts(res);
    return 0;
}
void reverse(char b[])
{
   int i;
   char t;
   for(i=0;b[i]!='\0';i++);
   for(int j=0;j<i/2;j++)
   {
     t=b[j];
     b[j]=b[i-j-1];
     b[i-j-1]=t;
   }   

}