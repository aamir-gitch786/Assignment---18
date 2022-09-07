/******************************************************************************

 2. Write a function to reverse a string.
*******************************************************************************/

#include <stdio.h>
void reverse(char []);
int main()
{
    char a[100];
    reverse(a);

    return 0;
}
void reverse(char a[])
{   int i,j;
   char tem;
    printf("Enter the strings : \n");
    fgets(a,100,stdin);
    for( i=0;a[i];i++);//length
    
    for(j=0;j<i/2;j++)
    {
        tem=a[j];
        a[j]=a[i-1-j];
        a[i-1-j]=tem;
    }
    for(j=0;a[j];j++)
    printf("%c",a[j]);
    
}