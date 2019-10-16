#include<stdio.h>
#include<stdlib.h>
int main()
{
    int array[50], search, i, n,flag=0; 
    printf("enter number of elements: \n");
    scanf("%d", &n); 
    printf("enter %d integer: \n", n); 
    for (i= 0;i<n;i++)
    scanf("%d", &array[i]); 
    printf("enter an element to search: \n");
    scanf("%d", &search);
    for (i=0;i<n;i++)
    {
        if (array[i] == search)   
        {
          printf("%d is present at location %d.\n", search, i+1);
          break;
          flag=1;
        }
        
        else
        {
            printf("%d is absent at location %d.\n", search,i+1);
        }
    }
    return 0;
}
