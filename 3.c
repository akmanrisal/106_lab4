#include<stdio.h>
#include<string.h>
int main()
{
    int i;

    char words[200];
    scanf("%s",words);

    int num=strlen(words);

     for(i=0; i<=num; i++)
     {
         if(words[i-1]!=words[i])
         {
             printf("%c",words[i]);
         }
     }

}
