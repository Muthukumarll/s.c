#include<stdio.h>
3include<conio.h>
int main()
{
    int n,num;
    clrscr();
    scanf("%d",&num);
    n=num+1;
    while(n!=0)
    {
        if(n%10==0)
        {
            printf("%d",n);
            break;
        }
        n++;
    }
    getch();
    return 0;
}
