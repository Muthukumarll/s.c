#include <stdio.h>
#include<conio.h>
void main()
{
 int n, i, count = 0;                                                                                                                                                                                                                                                                               
clrscr();        
 scanf("%d",&n);
 for(i=0;i<=n/2;i++)
 {
 if(n % i == 0 )
  {
   count = 1;
   break;
  }
 }
 if(count == 0)
  printf("no");
 else
  printf("yes");
 getcH();
}
