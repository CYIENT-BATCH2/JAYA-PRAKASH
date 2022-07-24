#include <stdio.h>
void selection(int [], int, int, int, int);
int main()
{
    int size, i, j;
    printf("Enter the size of the list\n");
    scanf("%d", &size);
    int num_array[size];

    printf("Enter the elements in list\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &num_array[i]);
    }
    selection(num_array, 0, 0, size, 1);
    printf("The sorted list in array elements is\n");
    for (i = 0; i < size; i++)
    {
        printf("%d  ", num_array[i]);
    }
    return 0;
}
void selection(int num_array[], int i, int j, int size, int flag)
{
    int temp;
    if (i < size - 1)
    {
        if (flag)
        {
            j = i + 1;
        }
        if (j < size)
        {
            if (num_array[i] > num_array[j])
            {
                temp = num_array[i];
                num_array[i] = num_array[j];
                num_array[j] = temp;
            }
            selection(num_array, i, j+1, size, 0);
        }
        selection(num_array, i+1, 0, size, 1);
    }
}
