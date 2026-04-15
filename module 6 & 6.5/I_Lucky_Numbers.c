#include<stdio.h>
int main ()
{

    int n;
    scanf("%d", &n);
    if (n>=10 && n<=99)
    {
       int left = n/10; 
       int right= n%10;
       
       if (right != 0 && left%right==0)
       {
        printf("YES");
       }

       else if (left != 0 && right%left==0)
       {
        printf("YES");
       }
       
       else
       {
        printf("NO");
       }
       

    }
    
    return 0;
}