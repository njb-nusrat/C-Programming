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

//   sum of positive numbers.
   
   int sum = 0; 
   

  for (int i = 0; i < n; i++)
  {
   

    if (a[i] > 0)
    {
         sum = sum+ a[i];
        
    }
    
  }
  printf("%d ", sum);

//   subtraction of negative numbers.

int sum2 = 0; 
   

  for (int i = 0; i < n; i++)
  {
   

    if (a[i] < 0)
    {
         sum2 = sum2 + a[i];
        
    }
    
  }
  printf("%d ", sum2);
  
     

    return 0;
}