    #include <stdio.h>
 
void quicksort (int [], int, int);//Declaration
 
int main()
{
    int arr[50];
    int size, i;
 
    printf("Enter the range of Array elements: ");
    scanf("%d", &size); 
    printf("Enter an unsorted sorted:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    } 
    quicksort(arr, 0, size - 1);//Method calling
    printf("After quicksort Our Array is\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
 
    return 0;
}
//Defination
void quicksort(int list[], int low, int high)
{
    int pivot, i, j, temp;
    if (low < high)
    {
        pivot = low;
        i = low;
        j = high;
        while (i < j) 
        {
            while (list[i] <= list[pivot] && i <= high)
            {
                i++;
            }
            while (list[j] > list[pivot] && j >= low)
            {
                j--;
            }
            if (i < j)
            {
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
        temp = list[j];
        list[j] = list[pivot];
        list[pivot] = temp;
        quicksort(list, low, j - 1);
        quicksort(list, j + 1, high);
    }
}

