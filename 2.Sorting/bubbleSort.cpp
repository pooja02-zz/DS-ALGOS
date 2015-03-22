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

void bubbleSort(int arr[],int n)
{
    for(int i = 0;i < n-1;i++)
    {
        int flag = 0;
        for(int j = 0;j < n-1-i;j++)  ///Last i elements are already in place
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;
            }
        }
        if(flag == 0){return;} /// If no two elements were swapped by inner loop, then return
    }
}

int main()
{
    int arr1[] = {2,0,1,2,3,4,5,6,7,8,9}; /// sorted , best case
    int arr2[] = {9,8,7,6,5,4,3,2,1,0}; /// reverse order , worst case
    int arr3[] = {5,7,2,4,3,6,8,0,9,1}; /// random order , avg case
    bubbleSort(arr1,2);
    bubbleSort(arr2,10);
    bubbleSort(arr3,10);
    for(int i = 0;i < 10;i++){printf("%d  ",arr1[i]);}
    printf("\n");
    for(int i = 0;i < 10;i++){printf("%d  ",arr2[i]);}
    printf("\n");
    for(int i = 0;i < 10;i++){printf("%d  ",arr3[i]);}

    return 0;
}
