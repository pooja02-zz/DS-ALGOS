/// Find the minimum and maximum element in a stack

#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<climits>
#define SIZE 10

using namespace std;

typedef struct stack
{
    int arr[SIZE];
    int maxArr[SIZE];
    int minArr[SIZE];
    int top;
};

bool isFull ( const stack *s )
{
    if ( ( ( s->top ) + 1 ) >= SIZE )
    {
        return true;
    }
    return false;
}

bool isEmpty ( const stack *s )
{
    if ( s->top == -1 )
    {
        return true;
    }
    return false;
}

int size ( const stack *s )
{
    return ( ( s->top ) + 1 );
}

int top ( const stack *s )
{
    if ( isEmpty ( s ) )
    {
        cout << "Stack empty" ;
        return -1;
    }
    return s->arr[ s->top ];
}

int getMin ( stack *s )
{
    if ( isEmpty ( s ) )
    {
        cout << "Stack empty" ;
        return -1;
    }
    return s->minArr[ s->top ];
}

int getMax ( stack *s )
{
    if ( isEmpty ( s ) )
    {
        cout << "Stack empty" ;
        return -1;
    }
    return s->maxArr[ s->top ];
}

void push ( stack *s, int data )
{
    int existingMin = INT_MAX, existingMax = INT_MIN;
    if ( isFull ( s ) )
    {
        cout << "Stack overflow" ;
        return;
    }
    if ( s->top != -1 )
    {
        existingMax = s->maxArr[ s->top ];
        existingMin = s->minArr[ s->top ];
    }
    ++( s->top);
    s->arr[ s->top ] = data;
    s->maxArr[ s->top ] = max ( data , existingMax ) ;
    s->minArr[ s->top ] = min ( data , existingMin ) ;
}

int pop ( stack *s )
{
    if ( isEmpty ( s ) )
    {
        cout << "Stack underflow" ;
        return -1;
    }
    int temp = s->arr[ ( s->top )-- ];
    return ( temp );
}

void display ( const stack *s )
{
    int temp = s->top;
    for ( int i = temp ; i >= 0 ; i-- )
    {
        cout << s->arr[i] << "-->" ;
    }
    cout << "NULL" ;
}

int main()
{
    stack *s = ( stack * ) malloc ( sizeof ( stack ) );
    s->top = -1;
    int choice, data;
    push( s, 3 );
    cout << endl ;
    display( s );
    push( s, 6 );
    cout << endl ;
    display( s );
    push( s, 2 );
    cout << endl ;
    display( s );
    push( s, 7 );
    cout << endl ;
    display( s );
    push( s, 4 );
    cout << endl ;
    display( s );
    push( s, 9 );
    cout << endl ;
    display( s );
    push( s, 8 );
    cout << endl ;
    display( s );
    push( s, 5 );
    cout << endl ;
    display( s );
    push( s, 1 );
    cout << endl ;
    display( s );
    cout << endl << "Minimum element is : " << getMin( s );
    cout << endl << "\nMaximum element is : " << getMax( s );
    cout << endl << "\nElement popped is : " << pop( s ) << endl ;
    display( s );
    cout << endl << "\nMinimum element is : " << getMin( s );
    cout << endl << "\nMaximum element is : " << getMax( s );
    cout << endl << "\nElement popped is : " << pop( s ) << endl ;
    display( s );
    cout << endl << "\nMinimum element is : " << getMin( s );
    cout << endl << "\nMaximum element is : " << getMax( s );
    cout << endl << "\nElement popped is : " << pop( s ) << endl ;
    display( s );
    cout << endl << "\nMinimum element is : " << getMin( s );
    cout << endl << "\nMaximum element is : " << getMax( s );
    cout << endl << "\nElement popped is : " << pop( s ) << endl ;
    display( s );
    cout << endl << "\nMinimum element is : " << getMin( s );
    cout << endl << "\nMaximum element is : " << getMax( s );
    cout << endl << "\nElement popped is : " << pop( s ) << endl ;
    display( s );
    cout << endl << "\nMinimum element is : " << getMin( s );
    cout << endl << "\nMaximum element is : " << getMax( s );
    return 0;
}

/***
    OUTPUT
    3-->NULL
    6-->3-->NULL
    2-->6-->3-->NULL
    7-->2-->6-->3-->NULL
    4-->7-->2-->6-->3-->NULL
    9-->4-->7-->2-->6-->3-->NULL
    8-->9-->4-->7-->2-->6-->3-->NULL
    5-->8-->9-->4-->7-->2-->6-->3-->NULL
    1-->5-->8-->9-->4-->7-->2-->6-->3-->NULL
    Minimum element is : 1

    Maximum element is : 9

    Element popped is : 1
    5-->8-->9-->4-->7-->2-->6-->3-->NULL

    Minimum element is : 2

    Maximum element is : 9

    Element popped is : 5
    8-->9-->4-->7-->2-->6-->3-->NULL

    Minimum element is : 2

    Maximum element is : 9

    Element popped is : 8
    9-->4-->7-->2-->6-->3-->NULL

    Minimum element is : 2

    Maximum element is : 9

    Element popped is : 9
    4-->7-->2-->6-->3-->NULL

    Minimum element is : 2

    Maximum element is : 7

    Element popped is : 4
    7-->2-->6-->3-->NULL

    Minimum element is : 2

    Maximum element is : 7

***/
