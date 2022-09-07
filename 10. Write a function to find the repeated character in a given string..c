/******************************************************************************

10. Write a function to find the repeated character in a given string.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char s[100],k;
    int tem;
    printf("Enter the string \n");
    fgets(s,100,stdin);
    printf("Repeated character in this given string is : \n");
    for(int i=0;s[i]!='\n';i++)
    { tem=0;
       k=s[i];
       for(int j=i+1;s[j]!='\n' && s[j]!='*';j++)
       {
           if(k==s[j])
           {
               tem=1;
               s[j]='*';
           }
       }
       if(tem==1)
       printf("%c ",s[i]);
       
    }
   
}
