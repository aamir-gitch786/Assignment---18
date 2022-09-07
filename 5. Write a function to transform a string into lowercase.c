/******************************************************************************
5. Write a function to transform a string into lowercase

*******************************************************************************/

#include<stdio.h>
void transform(char a[]);
int main()
{
    char a[100];
    transform(a);
    return 0;
}
void transform(char a[])
{  int i;
    printf("Enter the string .\n");
    fgets(a,100,stdin);
    for(int j=0;a[j];j++)
    {
        if(a[j]>=65 && a[j]<=90)
        {
            a[j]+=32;
        }
    }
    printf("Lower case string are :\n ");
    for(int j=0;a[j];j++)
    printf("%c",a[j]);
    
}