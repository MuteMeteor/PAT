#include<stdio.h>  
int facii(int n)  
{  
  int a[]={0,1};  
  int i=0,x1=0,x2=1,x3=0;  
  
  if(n<2)    
      return a[n];  
         
  for(i=2;i<=n;i++)  
  {  
    x3=x1+x2;  
    x1=x2;  
    x2=x3;  
  }  
  return x3;  
}  
  
int main()  
{  
  int n,y;  
  scanf("%d",&n);  
  y=facii(n);  
  printf("%d\n",y);  
}
