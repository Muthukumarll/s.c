#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,a,b,c;
	clrscr();
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a=pow(2,i);
		if(a>n)
		{
			b=i;
			break;
		}
	}
	c=pow(2,b);
	printf("\n%d",c);
	getch();
	return 0;
}
