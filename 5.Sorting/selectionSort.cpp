#include<iostream>
#include<cstdio>
using namespace std;

/**
TIME COMPLEXITY :
Best case : O(N)
Worst case : O(N^2)
Avg case : O(N^2)

SPACE COMPLEXITY : O(1)
**/

void selectionSort(int arr[],int n)
{
    for(int i = 0;i < n-1;i++)
    {
        int min = i;
        /// Finding the minimum element
        for(int j = i+1;j < n;j++)
        {
            if(arr[min] > arr[j]) min = j;
        }
        if(i != min)  /// To avoid swapping of an element with itself
        {
            /// Swap the found minimum element with the first element
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}
int main()
{
    int arr1[] = {0,1,2,3,4,5,6,7,8,9}; /// sorted , best case
    int arr2[] = {9,8,7,6,5,4,3,2,1,0}; /// reverse order , worst case
    int arr3[] = {5,7,2,4,3,6,8,0,9,1}; /// random order , avg case
    selectionSort(arr1,10);
    selectionSort(arr2,10);
    selectionSort(arr3,10);
    for(int i = 0;i < 10;i++){printf("%d  ",arr1[i]);}
    printf("\n");
    for(int i = 0;i < 10;i++){printf("%d  ",arr2[i]);}
    printf("\n");
    for(int i = 0;i < 10;i++){printf("%d  ",arr3[i]);}

    return 0;
}

