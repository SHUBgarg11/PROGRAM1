#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20],s2[20];
    printf("\nEnter any string\n");
    gets(s1);
    strcpy(s2,s1);
    strrev(s2);
    puts(s2);
    if((strcmp(s1,s2))==0)
    {
        printf("\nString %s is palindrome\n",s1);
    }
    else
    {
        printf("\nString %s is not palindrome\n",s1);
    }
    return 0;
    
}