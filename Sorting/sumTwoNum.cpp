/// Check in a random array if, sum of two numbers is equal to the given sum

#include<iostream>
#include<algorithm>

using namespace std;

/***
    Time Complexity: O(N^2)
***/
bool bruteForce(int arr[], int sum, int N)
{
    for ( int i = 0; i < N ; i++ )
    {
        for ( int j = i + 1; j < N ; j++ )
        {
            if ( arr[i] + arr[j] == sum )
            {
                return true;
            }
        }
    }
    return false;
}

/***
    Time Complexity: O(N log n)
***/
bool isSumOfTwoNumbersPresent ( int arr[], int N, int sum )
{
    sort ( arr, arr + N );
    int left = 0, right = N - 1;
    while (left < right)
    {
        int currSum = arr[left] + arr[right];
        if (currSum < sum)
        {
            left++;
        }
        else if (currSum > sum)
        {
            right--;
        }
        else
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int testArray[55];
    for ( int i = 0 ; i < 10000; i++ )
    {
        int N = 1 + rand() % 50;
        for ( int j = 0; j < N ; j++ )
        {
            testArray[j] = rand() % 1000;
        }
        int sum = rand() % 1000;
        bool a = bruteForce(testArray, sum, N);
        bool b = isSumOfTwoNumbersPresent ( testArray, N, sum );
        if (a != b)
        {
	           exit(5);
        }

    }
    cout << "Passed all cases!!" << endl;
    return 0;
}
