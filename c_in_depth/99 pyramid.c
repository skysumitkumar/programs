#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,space,rows,p;
    printf("Enter for rows: ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(space=1;space<=rows-i;space++)
            printf(" ");
        for(j=1;j<=2*i-1;j++)
        printf("* ");
        printf("\n");
    }
    p=rows-1;
     for(i=p;i>=1;i--)
    {
        for(space=1;space<=rows-i;space++)
            printf(" ");
        for(j=1;j<=2*i-1;j++)
        printf("* ");
        printf("\n");
    }

}
