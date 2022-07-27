#include <stdio.h>
void insertionSort(int arr[], int n)
{
    int i, temp, j;
    for (i = 1; i < n; i++)
    {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
}
void selectionSort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
    }
}
void main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int a;
    printf("Enter the type of the sorting algorithm you want to perform:\n1 for insertion sort\n2 for selection sort\n3 for bubble sort\n4 for merge sort\n5 for quick sort\nInput: ");
    scanf("%d", &a);
    if (a == 1)
    {
        insertionSort(arr, n);
        printf("The array after performing insertion sort is: \n");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    else if (a==2){
        selectionSort(arr,n);
        printf("The array after performing selection sort is: \n");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }
}