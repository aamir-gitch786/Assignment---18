/******************************************************************************
3. Write a function to compare two strings.

*******************************************************************************/

#include <stdio.h>
void compare(char [],char []);
int main()
{
    char a[100],b[100];
    compare(a,b);

    return 0;
}
void compare(char a[],char b[])
{   int i,j,c=0;
    printf("Enter the string in first array  : \n");
    fgets(a,100,stdin);
    for(i=0;a[i];i++);
    printf("Enter the string in Seconde array  : \n");
    fgets(b,100,stdin);
    for(j=0;b[j];j++);
    if(i==j)
    { for(int k=0;k<i;k++)
       {
        if(a[k]==b[k])
        { 
            c++;
        }
        else
        break;
      }
      if(c==i)
        printf("String are equal .");
        else
        printf("String are not equal.");
    }  
    else
    printf("String are not equal.");
    
    
    
}
