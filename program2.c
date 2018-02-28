#include<stdio.h>
#include<conio.h>
void main()
{
    int n1,n2,c;
    clrscr();
    printf("enter the number :");
    scanf("%d %d",&n1,&n2);
    c=n1+n2;
    if(c%2==0)
    {
        printf("even number");
    }
    else
    {
        printf("odd number");
    }
    getch();
}
