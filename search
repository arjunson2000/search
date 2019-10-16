#include <stdio.h>
 
void sort(int *k,int n)
{
int z,x, got,gab=1;
 got = 0;
 while(gab == 1)
 {gab = 0;
 for (z = 1; z < n; z++)
      {
	  if (k[got]>=k[z])
       {
	   x = k [z];
       k[z] = k [got];
       k[got] = x;
       got++;
       gab == 1;
  }
      else
       got++;
      
  }
     

}

}

int main()

{
   int z, first, last, middle, n, search, array[100];
 
   printf("enter number of elements you want to store: \n");
   scanf("%d",&n);
 
   printf("enter %d integers: \n", n);
 
   for (z = 0; z < n; z++)
      scanf("%d",&array[z]);
 
   printf("enter value to find: \n");
   scanf("%d", &search);
   
   sort(array,n);
 
   first = 0;
   last = n - 1;
   middle = (first+last)/2;
 
   while (first <= last) {
      if (array[middle] < search)
         first = middle + 1;    
      else if (array[middle] == search) {
         printf("%d found at location %d.\n", search, middle+1);
         break;
      }
      else
         last = middle - 1;
 
      middle = (first + last)/2;
   }
   if (first > last)
      printf("not found %d isn't present in the input you have given.\n", search);
 
   return 0;  
}
