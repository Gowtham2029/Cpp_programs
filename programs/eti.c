#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a,n;
    printf("enter array size: ");
    scanf("%d",&n);
    a = (int*)malloc(n*sizeof(int));
    
    a[0] = 1;
    a[1] = 1;
    a[2] = 1;
    a[3] = 1;
    a[4] = 1;

    for(int i = 0; i < 7; i++)
    {
        printf("%d\n", a[i]);
    }

}