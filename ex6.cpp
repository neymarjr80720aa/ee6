#include<stdio.h>
int main()
{
    int n,res,fact;
   printf("enter the number");
   scanf("%d",&n);
   printf("/nsquare of%d=%d",n,res);
   printf("/nfactorial of%d=%d",n,fact);
   return 0;
    }
   int factorial(int n)
    {
    int res;
	if(n==0||n==1)
    {
	return 1;
    }
	else
    {
    res=n*factorial(n-1);	
    return res;
    }
}
