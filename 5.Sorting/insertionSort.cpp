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

void insertionSort(int arr[],int n)
{
    for(int i = 1;i < n;i++)
    {
        int j,key = arr[i];
        for(j = i-1;j >= 0 && key < arr[j];j--)
        {
            arr[j+1] = arr[j];
        }
        arr[j+1] = key;
    }
}

int main()
{
    int arr1[] = {0,1,2,3,4,5,6,7,8,9}; /// sorted , best case
    int arr2[] = {9,8,7,6,5,4,3,2,1,0}; /// reverse order , worst case
    int arr3[] = {5,7,2,4,3,6,8,0,9,1}; /// random order , avg case
    insertionSort(arr1,10);
    insertionSort(arr2,10);
    insertionSort(arr3,10);
    for(int i = 0;i < 10;i++){printf("%d  ",arr1[i]);}
    printf("\n");
    for(int i = 0;i < 10;i++){printf("%d  ",arr2[i]);}
    printf("\n");
    for(int i = 0;i < 10;i++){printf("%d  ",arr3[i]);}

    return 0;
}

