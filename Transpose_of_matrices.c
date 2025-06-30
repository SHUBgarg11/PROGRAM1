#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],i,j,r,c;
    printf("\nEnter rows and columns of matrix\n");
    scanf("%d%d",&r,&c);
    printf("\nEnter elements of %d rows and %d columns\n ",r,c);
    for(i=0;i<r;i++)
for(j=0;j<c;j++)
scanf("%d",&a[i][j]);
/*Getting Transpose of a matrix*/
for(i=0;i<r;i++)
for(j=0;j<c;j++)
b[i][j]=a[j][i];
printf("\nOriginal matrix is ...\n");
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    printf("\n%d\t",a[i][j]);
    printf("\n");
}
printf("\nTranspose of a matrix is \n");
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    printf("%d\t",b[i][j]);
    printf("\n");

}
return 0;

}