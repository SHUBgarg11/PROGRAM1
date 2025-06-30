#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("\nEnter a string\n");
    gets(str);
    printf("\nEntered String is %s",str);
    printf("\nIn lowercase entered string is %s",strlwr(str));
    return 0;
}