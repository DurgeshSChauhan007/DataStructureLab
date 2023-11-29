#include <stdio.h>
int recursiveBinarySearch(int array[], int Low, int High, int Key)
{
   if (High >= Low)
    {
      int middle = (Low + High)/2;
      if (array[middle] == Key)
         return middle;
   else
    {
         if (array[middle] > Key)
         return recursiveBinarySearch(array, Low , middle-1, Key);
        else
          return recursiveBinarySearch(array, middle+1, High , Key);
   }
    }
   return -1;
}
int main(void){
   int A[10000],n,Key;
   printf("Enter the Number of elements in the array:\n");
   scanf("%d",&n);
   printf("Enter the Array:\n");
   for (int i = 0 ; i < n ; i++)
   {
      scanf("%d",&A[i]);
   }
   printf("\n\n");
   /**************/
   printf("Enter the Element to bo search:\n");
   scanf("%d",&Key);
   /*****************/
   int found_index = recursiveBinarySearch(A, 0, n-1, Key);
   if(found_index == -1 ) {
      printf("Element not found in the array ");
   }
   else {
      printf("Element found at index : %d",found_index);
   }
   return 0;
}
