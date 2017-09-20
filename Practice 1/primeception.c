#include <stdio.h>

int main()
{
    char A[1000];
    int primes[10000],limit=10000;
    int i,j,k;
     for (i = 2;i < limit; i++)
        primes[i] = 1;
 
    for (i = 2;i < limit; i++)
        if (primes[i])
            for (j = i;i * j < limit; j++)
                primes[i * j] = 0;
    scanf("%[^\n]s",A);
    for(int k=0;k<strlen(A);k++)
    {
        if(primes[k]!=0 && primes[A[k]]!=0)
        printf("%d %c\n",k,A[k]);
    }
    return 0;
}
