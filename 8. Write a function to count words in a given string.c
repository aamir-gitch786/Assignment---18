/******************************************************************************
8. Write a function to count words in a given string
*******************************************************************************/

#include <stdio.h>
int string(char []);
int main()
{
    char a[100];
    printf("Total number of words in this given string is : %d",string(a));

    return 0;
}
int string(char a[])
{   int i=0,words=0;
    printf("Enter the stirng :\n");
    fgets(a,100,stdin);
    if(a[0]!=' ')
        words++;
    while(a[i]!='\0')
    {
        if(a[i]==' ' && a[i+1]!=' ')
        words++;
        
        i++;
    }
    return words;
}