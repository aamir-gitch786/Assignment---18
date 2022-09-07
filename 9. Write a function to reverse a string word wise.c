/******************************************************************************

9. Write a function to reverse a string word wise  (For example if the given string is
“Mysirg Education Services” then the resulting string should be “Services Education
Mysirg” )

*******************************************************************************/

#include <stdio.h>

int main()
{
    char str[50];
    int i,j , len, flag=0;
    printf("Enter a string : ");
    fgets(str,50,stdin);
    printf("You entered : %s\n", str);
    for(len =0 ; str[len]!='\n' ; len++);

    
    printf("Reverse is : \n");
    for(i = len-1; i>=0;i--)
    {
        if(flag == 0 && str[i] !='\n')
        {
            flag=1;
        }
        
        if(str[i] == ' ' && flag == 1)
        {
            for(j = i + 1 ; str[j] != '\n' && str[j] !=' ';j++)
            {
                printf("%c",str[j]);
            }
            printf(" ");
            flag = 0;
        }
        if(flag == 1 && i == 0)
        {
            for(j = i; str[j] != '\n' && str[j] != ' ' ;j++)
            {
                printf("%c",str[j]);
            }
            flag=0;
        }
    }
   
}
