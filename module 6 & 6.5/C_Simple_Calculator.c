#include<stdio.h>
int main ()
{

    int x,y;
    scanf("%d", &x);
    scanf("%d",&y);
    
   
    printf("%d + %d =%d\n",x,y,x + y);
    printf("%lld * %lld = %lld\n",x,y,x * y);
    printf("%lld - %lld = %lld\n",x,y,x - y);
    
    
    return 0;
}