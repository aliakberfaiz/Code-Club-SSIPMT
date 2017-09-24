#include <stdio.h>
int main()
{
   char S[100000];
   int i,n,maxLength;
   scanf("%s",S);

   n=strlen(S);
   maxLength=n;
for(i=0;S[0]==S[maxLength-1];i++){
	maxLength--;      
}
    printf("%d",maxLength);
    return 0;
}