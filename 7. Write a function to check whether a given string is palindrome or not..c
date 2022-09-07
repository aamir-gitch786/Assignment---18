/******************************************************************************

7. Write a function to check whether a given string is palindrome or not.
*******************************************************************************/

#include<stdio.h>
void palindrome(char a[],char b[]);
int main()
{
    char a[100],b[100];
    palindrome(a,b);
}
void palindrome(char a[],char b[])
{  int i,n,j,c=0,r;
   char tem;
   printf("Enter the stirng \n");
   fgets(a,100,stdin);
   for(n=0;a[n];n++);
   n=n-1;//finding length 
   for(j=0;a[j];j++ )// copy string into  array b.
   {
      b[j]=a[j]; 
   }
  r=((n-1)%2==0)?n:n-1;
  for( j=0;j<r/2;j++)
  { 
      tem=a[j];
      a[j]=a[n-j-1];
      a[n-j-1]=tem;
  }
  for(j=0;a[j];j++)
  {   
      if(a[j]==b[j])
      {
          c++;
      }
  }
  if(c==j)
  printf("Yes it is palindrome string .");
  else
  printf("No it not a palindrome string.");
}