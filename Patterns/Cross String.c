#include<stdio.h>
#include<string.h>
main()
{
 int len,i,j;
 char str[100];
 printf("Enter a string to get X Pattern\n");
 gets(str);
 len=strlen(str);
 for(i=0;i<len;i++)
 {
  for(j=0;j<len;j++)

  {
   if(i==j || i+j==len-1)
  // if(j==i || j== (len+1-i))
   {
    printf("%c",str[i]);
   }
   else{
    printf(" ");
   }
  }
  printf("\n");
 }
}
