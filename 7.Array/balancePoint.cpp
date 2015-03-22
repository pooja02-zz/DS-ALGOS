/// Balance Point in an array

#include<iostream>
#include<algorithm>

using namespace std;

/***
    Time Complexity: O(N)
    Space Complexity: O(N)  due to use of two extra arrays

    Balance point means that index,
    for which sum of numbers to the left of this index,
    is equal to sum of numbers to the right of this index.
***/
int balancePoint ( int arr[], int n )
{
    int left,right;
    int leftSum[ n ], rightSum[ n ];
    for( int i = 0 ; i < n ; i++ )
    {
        left = i;
        right = n - 1 - i;
        if ( i == 0)
        {
            leftSum[ left ] = 0;
            rightSum[ right ] = 0;
        }
        else
        {
        	leftSum[ left ] = arr[ left - 1 ]+ leftSum[ left - 1 ];
        	rightSum[ right ] = arr[ right + 1 ] +rightSum[right + 1];
        }
    }
    for( int i = 0 ; i < n ; i++ )
    {
        if ( leftSum[ i ] == rightSum[ i ] )
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int testArray[55];
    for ( int i = 0 ; i < 10000 ; i++ )
    {
        int N = 1 + rand() % 25;
        for ( int j = 0; j < N ; j++ )
        {
            testArray[j] = 1+ rand() % 100;
      	}
        int ans = balancePoint ( testArray , N );
        if ( ans != -1 )
        {
	        long long int leftSum = 0, rightSum = 0;
	        for( int j = 0 ; j < ans ; j++ )
	        {
	        	leftSum += testArray[j];
	        }
	        for ( int j = ans + 1 ; j < N ; j++ )
	        {
	        	rightSum += testArray[j];
	        }
	        if( leftSum != rightSum )
	        {
	            cout << "N = "<<N<<" Error : " << "index : " << ans << " LeftSum : " << leftSum << " RightSum : " << rightSum << endl;
	        }
	        else
	        {
	            cout << "N = "<<N<<" LeftSum : " << leftSum << " Balance Point : " << ans << " RightSum : " << rightSum << endl;
	        }
        }
    }

    return 0;
}
