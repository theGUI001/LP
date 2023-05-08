#include <stdio.h>
#include <stdlib.h>

#define MAX 20

// Merge Sort O(n*log(n)) (Best Sorting Algorithm)
void merge(int arr[], int left[], int leftSize, int right[], int rightSize)
{
    int i = 0, j = 0, k = 0;

    while (i < leftSize && j < rightSize)
    {
        if (left[i] <= right[j])
            arr[k++] = left[i++];
        else
            arr[k++] = right[j++];
    }

    while (i < leftSize)
        arr[k++] = left[i++];

    while (j < rightSize)
        arr[k++] = right[j++];
}

void mergeSort(int arr[], int size)
{
    if (size < 2)
        return;

    int mid = size / 2;

    int left[mid];
    int right[size - mid];

    for (int i = 0; i < mid; i++)
        left[i] = arr[i];

    for (int i = mid; i < size; i++)
        right[i - mid] = arr[i];

    mergeSort(left, mid);
    mergeSort(right, size - mid);
    merge(arr, left, mid, right, size - mid);
}

// Bubble Sort (Easier to make)
void bubbleSort(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[MAX];
    int size = sizeof(arr) / sizeof(arr[0]), i;

    for (i = 0; i < MAX; i++)
    {
        printf("Digite um valor para o vetor[%i]: ", i);
        scanf("%i", &arr[i]);
    }

    mergeSort(arr, size);
    // bubbleSort(arr, size);

    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
