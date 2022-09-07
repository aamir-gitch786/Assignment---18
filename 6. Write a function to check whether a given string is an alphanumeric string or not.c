/******************************************************************************

6. Write a function to check whether a given string is an alphanumeric string or not.
(Alphanumeric string must contain at least one alphabet and one digit)

*******************************************************************************/

#include <stdio.h>
void al_st(char []);
int main()
{
   char a[100];
   al_st(a);

    return 0;
}
void al_st(char s[])
{  int i,c,k;
    printf("Enter the stirng \n");
    fgets(s,100,stdin);
    
    for(int i=0;s[i];i++)
    {
        if(((s[i]>=65 && s[i]<=90)||(s[i]>=97 && s[i]<=122)))
        {
            c=1;
        }
        else if((s[i]>=48 && s[i]<=57))
        {
            k=1;
        }
        
    }
    if(c==1 && k==1)
    printf("Yes it is alphanumeric string ");
    else
    printf("NO it is not a alphanumeric string");
}