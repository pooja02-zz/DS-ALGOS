///  Implement stack using class and arrays

#include<iostream>
#include<cstdlib>
#define SIZE 10

using namespace std;

class stack
{
    int arr[SIZE];
    int top;

    public:

    /***
        Time Complexity: O(1)
        for all following operations on stack.
    ***/

    /// constructor to assign initial value to top
    stack()
    {
        top = -1;
    }

    bool isFull()
    {
        if ( ( top + 1 ) >= SIZE )
        {
            return true;
        }
        return false;
    }

    bool isEmpty()
    {
        if ( top == -1 )
        {
            return true;
        }
        return false;
    }

    int size()
    {
        return ( top + 1 );
    }

    int topElement()
    {
        if ( isEmpty () )
        {
            cout << "Stack empty" ;
            return -1;
        }
        return arr[ top ];
    }

    void push ( int data )
    {
        if ( isFull () )
        {
            cout << "Stack overflow" ;
            return;
        }
        arr[ ++( top) ] = data;
    }

    int pop ()
    {
        if ( isEmpty () )
        {
            cout << "Stack underflow" ;
            return -1;
        }
        int temp = arr[ ( top )-- ];
        return ( temp );
    }

    void display ()
    {
        int temp = top;
        for ( int i = temp ; i >= 0 ; i-- )
        {
            cout << arr[i] << "-->" ;
        }
        cout << "NULL" ;
    }
};

int main()
{
    stack s;
    int choice, data;
    while(1)
    {
        cout << "\nSTACK IMPLEMENTATION\n1.Push\n2.Pop\n3.Size\n4.Top\n5.Display\n0.Exit\nEnter your choice: ";
        cin >> choice ;
        switch ( choice )
        {
            case 1: cout << endl << "Enter element to be pushed: ";
                    cin >> data;
                    s.push( data );
                    cout << endl ;
                    break;
            case 2: data = s.pop();
                    cout << endl << "Element popped: " << data << endl ;
                    break;
            case 3: data = s.size();
                    cout << endl << "Size of stack: " << data << endl ;
                    break;
            case 4: data = s.topElement();
                    cout << endl << "Top element is: " << data << endl ;
                    break;
            case 5: cout << endl ;
                    s.display();
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
