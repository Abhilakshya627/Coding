/*
   *
  ***
 *****
*******         (assuming n=7)
 *****
  ***
   *
*/
#include <stdio.h>
void main()
{
    int n,i,j;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            printf("  ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {
        printf("  ");
        for(j=i;j<n;j++)
        {
            printf("  ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}