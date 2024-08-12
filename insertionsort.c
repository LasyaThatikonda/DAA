#include <stdio.h>

void insertionSort(int arr[], int n) 
{
	int i;
    for (i = 1; i < n; i++) 
	{
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) 
		{
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int size) 
{
	int i;
    for (i = 0; i < size; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() 
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int i,arr[n];

    printf("Enter the elements: \n");
    for (i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }
    printf("Unsorted array: \n");
    printArray(arr, n);
    insertionSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}

