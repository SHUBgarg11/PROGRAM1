#include<stdio.h>           
int main()
{   
    int a[10][10],b[10][10],c[10][10],i,j,k,r1,r2,c1,c2;
    printf("\nEnter the  number of rows and columns of 1st matrix\n");
    scanf("%d%d",&r1,&c1);
    printf("\nEnter the number of rows and columns of 2nd matrix\n");
    scanf("%d%d",&r2,&c2);
    if(c1==r2)
    {
        printf("\nEnter the elements of 1st matrix\n");
        for(i=0;i<r1;i++)
for(j=0;j<c1;j++)
scanf("%d",&a[i][j]);
printf("\nEnter the elements of 2nd matrix\n");
for(i=0;i<r2;i++)
for(j=0;j<c2;j++)
scanf("%d",&b[i][j]);
/*Calculate the product of two matrices*/
for(i=0;i<r1;i++)
{
    for(j=0;j<c1;j++)
    {
        c[i][j]=0;
        for(k=0;k<c1;k++)
        c[i][j]=c[i][j]+a[i][k]*b[k][j];

    }
}
printf("\nProduct of two matrices is....\n");
for(i=0;i<r1;i++)
{
    for(j=0;j<r1;j++)
printf("%d\t",c[i][j]);
printf("\n");
}
    }
    else
    {
        printf("\nMatrix multipication is not possible\n");

    }
    return 0;
}