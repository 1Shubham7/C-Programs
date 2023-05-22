#include <stdio.h>
#include <string.h>
int main()
{
 char s1[1000],s2[1000];

 printf("Enter the string: ");
 gets(s1); 
 strcpy(s2,s1); 
 strrev(s2);
 if(!strcmp(s1,s2))
 printf("This is palindrome");
 else
 printf("This is not palindrome");


 return 0;
}
