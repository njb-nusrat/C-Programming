#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int sum= 0;
    for (int i = 0; i < n; i++)
    {   
       
        sum +=a[i];
        
    }
    if (sum<0)
    {
        int x= sum * -1;
        printf("%d ",x);
    }

    else
    {
       printf("%d",sum);

    }
    
    
    
    return 0;
}