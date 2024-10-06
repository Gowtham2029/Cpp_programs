#include<stdio.h>
#include<stdlib.h>

struct array{
    int *A;
    int size;
    int length;
};
   void display(struct array hero)
   {
      printf("\n elements are: ");
      for(int i = 0; i<hero.length; i++)
      {
        printf("%d", hero.A[i]);
      }
   }

int main()
{
   struct array arr;
   int n;
   printf("enter the size of array: ");
   scanf("%d", &arr.size);
   arr.A = (int*)malloc(arr.size*sizeof(int));
   arr.length = 0;
   printf("enter the number of elements in the array: ");
   scanf("%d", &n);
   printf("enter array elements: ");
   for(int i = 0; i<n; i++)
   {
    scanf("%d", &arr.A[i]);
   }
   arr.length = n;
   display(arr.length);
}