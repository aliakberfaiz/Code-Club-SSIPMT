#include <stdio.h>
int main()
{
   char S[100000];
   int i,n,maxLength;
   scanf("%s",S);
   n=strlen(S);
   maxLength=n;
for(;S[0]==S[maxLength-1];maxLength--);
    printf("%d",maxLength);
    return 0;
}