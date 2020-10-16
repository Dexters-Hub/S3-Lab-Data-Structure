#include <stdio.h>
int main()
{
    int n, i;
    int head = 0;
    printf("No of Students:\n");
    scanf("%d", &n);
    int data[n];
    int address_of_data[n];
    int *next;
    printf("Enter Marks:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &data[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (data[head] != -1)
        {
            address_of_data[head] = &data[i];
        }
        else
        {
            break;
        }
        head++;
    }
    next = address_of_data[0];
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(next + i));
    }
    return 0;
}