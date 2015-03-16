/// Power (x,n)

#include<iostream>

using namespace std;

/***
	Time Complexity: O(log n)
***/

int powIterative (int b, int n)
{
    int temp = 1;
    while (n > 0)
    {
        if (n % 2 == 1) { temp = temp * b; }
        b = b * b;
        n = n/2;
    }
    return temp;
}

int powRecursive (int b, int n)
{
    if(b == 0 || b == 1) return b;
    if(n == 0) return 1;
    int temp = powRecursive(b, n/2);
    temp = temp * temp;
    if(n % 2 == 1) temp = temp * b;
    return temp;
}
int main()
{
    int x = 0, n = 1;
    cout << "x = " << x << " " << "n = " << n << " " << "powRecursive(x,n) = " << powRecursive(x, n) << " " << "powIterative(x,n) = " << powIterative(x, n) << endl;
    for ( int i = 0 ; i <= 10 ; i++ )
    {
        x = 2;
        n = i;
        cout << "x = " << x << " " << "n = " << n << " " << "powRecursive(x,n) = " << powRecursive(x, n) << " " << "powIterative(x,n) = " << powIterative(x, n) << endl;
    }

	return 0;
}

/***
    OUTPUT
    x = 0 n = 1 powRecursive(x,n) = 0 powIterative(x,n) = 0
    x = 2 n = 0 powRecursive(x,n) = 1 powIterative(x,n) = 1
    x = 2 n = 1 powRecursive(x,n) = 2 powIterative(x,n) = 2
    x = 2 n = 2 powRecursive(x,n) = 4 powIterative(x,n) = 4
    x = 2 n = 3 powRecursive(x,n) = 8 powIterative(x,n) = 8
    x = 2 n = 4 powRecursive(x,n) = 16 powIterative(x,n) = 16
    x = 2 n = 5 powRecursive(x,n) = 32 powIterative(x,n) = 32
    x = 2 n = 6 powRecursive(x,n) = 64 powIterative(x,n) = 64
    x = 2 n = 7 powRecursive(x,n) = 128 powIterative(x,n) = 128
    x = 2 n = 8 powRecursive(x,n) = 256 powIterative(x,n) = 256
    x = 2 n = 9 powRecursive(x,n) = 512 powIterative(x,n) = 512
    x = 2 n = 10 powRecursive(x,n) = 1024 powIterative(x,n) = 1024

**/
