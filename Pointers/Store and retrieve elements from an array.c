#include <stdio.h>
int main()
{
   int arr1[25], n=5;
   printf(" Input 5 number of elements in the array :\n");
   for(int i=0;i<n;i++)
      {
	  printf(" element - %d : ",i);
	  scanf("%d",arr1+i);
	  }
   printf(" The entered elements are : \n");
   for(int i=0;i<n;i++)
      {
	  printf(" element - %d : %d \n",i,*(arr1+i));
	  }
return 0;
}
