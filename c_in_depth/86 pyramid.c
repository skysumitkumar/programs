#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,space,rows;
    printf("Enter for rows: ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(space=1;space<=rows-i;space++)
        printf(" ");
        for(j=1;j<=i;j++)
        printf("*");
        printf("\n");
    }
}
