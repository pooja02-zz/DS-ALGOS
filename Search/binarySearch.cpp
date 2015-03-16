/// BINARY SEARCH

#include<iostream>
#include<algorithm>

using namespace std;

/***
    Time Complexity : O(N)
***/

int linearSerarch ( int arr[], int key, int N)
{
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == key) { return i; }
    }
    return -1;
}

/***
	Time Complexity: O(log n)
***/

int binarySearchIterative ( int arr[], int key, int N )
{
    int low = 0, high = N - 1, mid;
    while ( low <= high )
    {
        mid = (low + high) / 2;
        if ( arr[mid] == key )
        {
            return mid;
        }
        else if ( key < arr[mid] )
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1; /// element not found
}

int binarySearchRecursive ( int arr[], int low , int high, int key )
{
	if ( low > high ) { return -1; }
    int mid = (low + high) / 2;
    if ( arr[mid] == key )
    {
        return mid;
    }
    else if ( key < arr[mid] )
    {
        return binarySearchRecursive ( arr, low, mid - 1, key);
    }
    else
    {
        return binarySearchRecursive ( arr, mid + 1, high , key);
    }
}

int main()
{
    int testArray[55];
    for ( int i = 0; i < 1000; i++ )
    {
        int N = 1 + rand() % 50;

        for ( int j = 0; j < N ; j++ )
        {
            testArray[j] = rand() % 1000;
        }
        int key = rand() % 1000;
        sort ( testArray, testArray + 55 );
        int a = linearSerarch (testArray, key, N );
        int b = binarySearchIterative( testArray, key, N );
        if ( a != b )
        {
            if ( a < 0 && b >= 0 )
            {
                exit(1);
            }
            else if ( a >= 0 && b < 0 )
            {
                exit(2);
            }
            else if ( testArray[a] != testArray[b] )
            {
                exit(3);
            }
        }
        int c = binarySearchRecursive ( testArray, 0, N - 1, key );
        if ( a != c )
        {
            if ( a < 0 && c >= 0 )
            {
                exit(1);
            }
            else if (a >= 0 && c < 0)
            {
                exit(2);
            }
            else if ( testArray[a] != testArray[c] )
            {
                exit(3);
            }
        }
    }
    cout << "Passed all cases!!" << endl;
    return 0;
}
