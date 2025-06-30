#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],s[10][10],r,c,i,j;
    printf("\nEnter the number of rows and column of 2 matrices\n");
    scanf("%d%d",&r,&c);
    printf("\nEnter the elements of first matrix\n");
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    scanf("%d",a[i][j]);
    printf("\nEnter the elements of second matrix\n");
   for(i=0;i<r;i++)
    for(j=0;j<c;j++)\
    scanf("%d",&b[i][j]);
    /*Sum of two matrices*/
for(i=0;i<r;i++)
for(j=0;j<c;j++)
s[i][j]=a[i][j]+b[i][j];
printf("\nSum of two matrices is....\n");
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    printf("%d\t",s[i][j]);
    printf("\n");
}
return 0;

}