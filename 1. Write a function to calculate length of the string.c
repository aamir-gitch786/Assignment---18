/******************************************************************************

 1. Write a function to calculate length of the string

*******************************************************************************/

#include <stdio.h>
int length(char []);
int main()
{
    char a[100];
    printf("Length of string is : %d",length(a));

    return 0;
}
int length(char a[])
{   int i;
    printf("Enter the strings : \n");
    fgets(a,100,stdin);
    for( i=0;a[i];i++);
    return i;
}
