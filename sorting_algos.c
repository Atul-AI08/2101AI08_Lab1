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
void bubbleSort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
    }
}
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}
int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high]; 
    int i = (low - 1);
    int temp;
    for (int j = low; j <= high - 1; j++) 
    {
        if (arr[j] < pivot) 
        { 
            i++;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        } 
    } 
    temp = arr[i+1];
    arr[i+1] = arr[high];
    arr[high] = temp; 
    return (i + 1); 
} 
void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        int pi = partition(arr, low, high); 
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
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
    else if (a == 2)
    {
        selectionSort(arr, n);
        printf("The array after performing selection sort is: \n");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    else if (a == 3)
    {
        bubbleSort(arr, n);
        printf("The array after performing bubble sort is: \n");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    else if (a == 4)
    {
        mergeSort(arr, 0, n-1);
        printf("The array after performing merge sort is: \n");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    else if (a == 5)
    {
        quickSort(arr, 0, n-1);
        printf("The array after performing quick sort is: \n");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }
}