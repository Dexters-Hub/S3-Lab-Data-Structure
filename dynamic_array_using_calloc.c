#include <stdio.h>
#include <stdlib.h>
void read(int i, int num, int *ptr)
{
    for (i = 0; i < num; i++)
    {
        scanf("%d", &ptr[i]);
    }
}

void display(int i, int num, int *ptr)
{
    printf("The elements of the array are: ");
    for (i = 0; i < num; i++)
    {
        printf("%d, ", ptr[i]);
    }
}
int main()
{
    int *ptr;
    int n, i;
    printf("Enter number of elements:\n");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else
    {

        printf("Memory successfully allocated using calloc.\n");

        read(i, n, ptr);

        display(i, n, ptr);
    }

    free(ptr);
    return 0;
}