#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
    func1(10,18);
    printf("\n");
    func2(10,18);
    return 0;
}
void func1(int a,int b)
{
    if(a>b)
        return;
    printf("%d ",a);
    func1(a+1,b);
}
void func2(int a,int b)
{
    if(a>b)
        return;
    func2(a+1,b);
    printf("%d ",a);
}
