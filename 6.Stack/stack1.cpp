/// Implement Stack using arrays and structure, without pointers

#include<iostream>
#include<cstdlib>

#define SIZE 10

using namespace std;

/***
    Time Complexity: O(1)
    for all following operations on stack.
***/

typedef struct stack
{
    int arr[SIZE];
    int top;
};

/*** Checks whether stack is full or not.

    1. Methods in which there are no changes made in stack, it can be taken without reference.
    or else 2. We can use const keyword if  there are no changes made in stack.
***/
bool isFull ( const stack &s )
{
    if ( ( ( s.top ) + 1 ) >= SIZE )
    {
        return true;
    }
    return false;
}

/*** Checks whether stack is empty or not. ***/
bool isEmpty ( const stack &s )
{
    if ( s.top == -1 )
    {
        return true;
    }
    return false;
}

/*** Returns the number of elements stored in stack. ***/
int size ( const stack &s )
{
    return ( ( s.top ) + 1 );
}

/*** Returns the last inserted element without removing it. ***/
int top ( const stack &s )
{
    if ( isEmpty ( s ) )
    {
        cout << "Stack empty" ;
        return -1;
    }
    return s.arr[ s.top ];
}

/*** Inserts a new value on top of stack. ***/
void push ( stack &s, int data )
{
    if ( isFull(s) )
    {
        cout << "Stack overflow" ;
        return;
    }
    s.arr[ ++( s.top ) ] = data;
}

/*** Returns top element and removes it from stack. ***/
int pop ( stack &s )
{
    if ( isEmpty(s) )
    {
        cout << "Stack underflow" ;
        return -1;
    }
    int temp = s.arr[ ( s.top )-- ];
    return ( temp );  /// post increment/decrement does not work in return statement
}

void display ( const stack &s )
{
    int temp = s.top;
    for ( int i = temp ; i >= 0 ; i-- )
    {
        cout << s.arr[i] << "-->" ;
    }
    cout << "NULL" ;
}

int main()
{
    stack s;
    s.top = -1;
    int choice, data;
    while(1)
    {
        cout << "\nSTACK IMPLEMENTATION\n1.Push\n2.Pop\n3.Size\n4.Top\n5.Display\n0.Exit\nEnter your choice: ";
        cin >> choice ;
        switch ( choice )
        {
            case 1: cout << endl << "Enter element to be pushed: ";
                    cin >> data;
                    push( s, data );
                    cout << endl ;
                    break;
            case 2: data = pop( s );
                    cout << endl << "Element popped: " << data << endl ;
                    break;
            case 3: data = size( s );
                    cout << endl << "Size of stack: " << data << endl ;
                    break;
            case 4: data = top( s );
                    cout << endl << "Top element is: " << data << endl ;
                    break;
            case 5: cout << endl ;
                    display( s );
                    cout << endl ;
                    break;
            case 0: exit(0);

        }
    }
    return 0;
}

/***
    OUTPUT
    STACK IMPLEMENTATION
    1.Push
    2.Pop
    3.Size
    4.Top
    5.Display
    0.Exit
    Enter your choice: 1
    Enter element to be pushed: 7

    STACK IMPLEMENTATION
    1.Push
    2.Pop
    3.Size
    4.Top
    5.Display
    0.Exit
    Enter your choice: 1
    Enter element to be pushed: 6

    STACK IMPLEMENTATION
    1.Push
    2.Pop
    3.Size
    4.Top
    5.Display
    0.Exit
    Enter your choice: 1
    Enter element to be pushed: 5

    STACK IMPLEMENTATION
    1.Push
    2.Pop
    3.Size
    4.Top
    5.Display
    0.Exit
    Enter your choice: 1
    Enter element to be pushed: 4

    STACK IMPLEMENTATION
    1.Push
    2.Pop
    3.Size
    4.Top
    5.Display
    0.Exit
    Enter your choice: 1
    Enter element to be pushed: 3

    STACK IMPLEMENTATION
    1.Push
    2.Pop
    3.Size
    4.Top
    5.Display
    0.Exit
    Enter your choice: 2
    Element popped: 3

    STACK IMPLEMENTATION
    1.Push
    2.Pop
    3.Size
    4.Top
    5.Display
    0.Exit
    Enter your choice: 3
    Size of stack: 4

    STACK IMPLEMENTATION
    1.Push
    2.Pop
    3.Size
    4.Top
    5.Display
    0.Exit
    Enter your choice: 4
    Top element is: 4

    STACK IMPLEMENTATION
    1.Push
    2.Pop
    3.Size
    4.Top
    5.Display
    0.Exit
    Enter your choice: 5
    4-->5-->6-->7-->NULL

    STACK IMPLEMENTATION
    1.Push
    2.Pop
    3.Size
    4.Top
    5.Display
    0.Exit
    Enter your choice: 0

***/
