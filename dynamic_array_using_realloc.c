#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int *array;
    size_t used;
    size_t size;
} Array;

void initArray(Array *a, size_t initialSize)
{
    a->array = malloc(initialSize * sizeof(int));
    a->used = 0;
    a->size = initialSize;
}

void insertArray(Array *a, int element)
{
    if (a->used == a->size)
    {
        a->size *= 2;
        a->array = realloc(a->array, a->size * sizeof(int));
    }
    a->array[a->used++] = element;
}

void freeArray(Array *a)
{
    free(a->array);
    a->array = NULL;
    a->used = a->size = 0;
}

int main()
{
    Array a;
    int i, n, var, m;
    char c;
    printf("Enter the number of Elements: \n");
    scanf("%d", &n);

    printf("Do you want to resize? press 'y' to resize else 'n': \n");
    scanf("%s", &c);
    if (c == 'y')
    {
        printf("Enter the resized number of Elements: \n");
        scanf("%d", &m);
        initArray(&a, m);
        printf("Enter the Elements: \n");
        for (i = 0; i < m; i++)
            insertArray(&a, scanf("%d", &var));
    }
    else
    {
        initArray(&a, n);
        printf("Enter the Elements: \n");
        for (i = 0; i < n; i++)
            insertArray(&a, scanf("%d", &var));
    }
    printf("The Number of size used for the array: %d\n", a.used);
    freeArray(&a);
}