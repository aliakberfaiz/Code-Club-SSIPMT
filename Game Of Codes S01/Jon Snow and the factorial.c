#include <stdio.h>
int findTrailingZeros(int  n)
{
    int count = 0;
    for (int i=5; n/i>=1; i *= 5)
          count += n/i;
    return count;
}
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t-->0){
    
    scanf("%d",&n);
    printf("%d\n",findTrailingZeros(n));
    }
    return 0;
}