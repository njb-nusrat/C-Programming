#include<stdio.h>
int main ()
{

    long long int n;
    scanf("%lld",&n);
    long long int a[n];


    for (long long int i = 0; i < n; i++)
    {
        scanf("%lld",&a[i]);
    }

    long long int X;
    scanf("%lld", &X);

    long long int notfound = -1;

    for (long long int i = 0; i < n; i++)
    {
        if (a[i]==X)
        {
            notfound = i;
            break;
        }
        
    }
    printf("%lld",notfound);
    
    
    

    return 0;
}