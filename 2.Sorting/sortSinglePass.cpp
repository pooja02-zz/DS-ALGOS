/// Sorting 1's and 0's in a single pass

#include<iostream>
#include<algorithm>

using namespace std;

/// method 1
void sortSinglePass1 ( int arr[], int n )
{
    int lastPositionOfOne = 0;
    for ( int i = 0 ; i < n ; i++ )
    {
        if ( arr[i] == 0 )
        {
            arr[ lastPositionOfOne++ ] = 0;
            arr[i] = 1;
        }
    }
}

/// method 2
void sortSinglePass2 ( int arr[], int n )
{
    int left = 0, right = n - 1;
    while ( left < right )
    {
        if ( arr[left] == 0 )
        {
            left++;
        }
        else if ( arr[right] == 1 )
        {
            right--;
        }
        else        /// ( arr[left] == 1 ) && ( arr[right] == 0)
        {
            ///arr[right] = arr[left] + arr[right] - ( arr[left] = arr[right] );
            swap ( arr[left], arr[right] );
            left++;
            right--;
        }

    }
}

int main()
{
    int testArray[55];
    for ( int i = 0 ; i < 100 ; i++ )
    {
        int N = 1 + rand() % 50;
        int numOnesBefore = 0, numZerosBefore = 0;
        for ( int j = 0; j < N ; j++ )
        {
            testArray[j] = rand() % 2;
            if(testArray[j])
            {
            	numOnesBefore++;
            }
            else
            {
            	numZerosBefore++;
            }
        }
        /// sortSinglePass1 ( testArray, N );
        sortSinglePass2 ( testArray, N );
        int numOnesAfter = 0, numZerosAfter = 0;
        for ( int j = 0; j < N ; j++ )
        {
            cout << testArray[j] << " ";
            if(testArray[j])
            {
            	numOnesAfter++;
            }
            else
            {
            	numZerosAfter++;
            }
        }
        if(!((numOnesBefore==numOnesAfter)&&(numZerosBefore==numZerosAfter)))
        {
            exit(5);
        }
        cout << endl;
    }
    return 0;
}
