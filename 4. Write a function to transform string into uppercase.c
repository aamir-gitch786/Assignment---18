/******************************************************************************
4. Write a function to transform string into uppercase

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
        if(a[j]>=97 && a[j]<122)
        {
            a[j]-=32;
        }
    }
    printf("Upper case string are :\n ");
    for(int j=0;a[j];j++)
    printf("%c",a[j]);
    
}