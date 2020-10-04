// heart pattern using c with name 
#include <stdio.h>
#include <string.h>
 
int main()
{
    int i, j, n;
    char name[50];
    int len;

    printf("Enter your name: ");
    gets(name);
 
    printf("Enter value of n : ");
    scanf("%d", &n);

    len = strlen(name);

    // Print upper part of the heart shape
    for(i=n/2; i<=n; i+=2)
    {
        for(j=1; j<n-i; j+=2)
        {
            printf(" ");
        }
 
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
 
        for(j=1; j<=n-i; j++)
        {
            printf(" ");
        }
 
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
 
        printf("\n");
    }
 
