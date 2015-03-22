/// Circular Queue

#include<iostream>
#define SIZE 10

using namespace std;

typedef struct queue
{
    int arr[SIZE];
    int front;
    int rear;
};

bool isFull ( const queue &q )
{
    if ( ( q.front == 0 && q.rear == SIZE-1 ) || ( q.rear == q.front-1 ) )
    {
        return true;
    }
    return false;
}

bool isEmpty ( const queue &q )
{
    if ( q.front == -1 )
    {
        return true;
    }
    return false;
}

int size ( const queue &q )
{
    if ( isEmpty ( q ) )
    {
        return 0;
    }
    if( q.front <= q.rear)
    {
        return ( ( q.rear - q.front ) + 1 );
    }
    return ( SIZE - ( q.front - q.rear + 1 ) );
}

void enqueue( queue &q, int data )
{
    if ( isFull ( q ) )
    {
        cout << "Queue overflow" ;
        return;
    }
    if ( q.front == -1)
    {
        q.front = 0;
    }
    if ( q.rear == ( SIZE - 1 ) )
    {
        q.rear = -1;
    }
    q.arr[ ++(q.rear) ] = data;
}

int dequeue ( queue &q )
{
    if ( isEmpty ( q ) )
    {
        cout << "Queue underflow" ;
        return -1;
    }
    int temp = q.arr[ q.front ];
    if ( q.front == q.rear )
    {
        q.front = q.rear = -1;
    }
    else if( q.front == ( SIZE - 1 ) )
    {
        q.front = 0;
    }
    else
    {
        ++( q.front );
    }
    return temp;
}

void display ( queue &q )
{
    if ( isEmpty ( q ) )
    {
        cout << "Empty circular queue" ;
        return;
    }
    if ( q.front <= q.rear )
    {
        for( int i = ( q.front ) ; i <= q.rear ; i++ )
        {
            cout << q.arr[i] << "--";
        }
    }
    else
    {
        for(int i = ( q.front ) ; i <= ( SIZE - 1 ) ; i++ )
        {
            cout << q.arr[i] << "--" ;
        }
        for(int i = 0;i <= q.rear;i++)
        {
            cout << q.arr[i] << "--" ;
        }
    }

    cout << "START" << endl ;
}

int main()
{
    queue q;
    q.front = q.rear = -1;
    enqueue( q, 1 );
    cout << endl ;
    display( q );
    enqueue( q, 5 );
    cout << endl ;
    display( q );
    enqueue( q, 8 );
    cout << endl ;
    display( q );
    enqueue( q, 9 );
    cout << endl ;
    display( q );
    enqueue( q, 3 );
    cout << endl ;
    display( q );
    enqueue( q, 6 );
    cout << endl ;
    display( q );
    enqueue( q, 8 );
    cout << endl ;
    display( q );
    enqueue( q, 5 );
    cout << endl ;
    display( q );
    enqueue( q, 3 );
    cout << endl ;
    display( q );
    enqueue( q, 1 );
    cout << endl ;
    display( q );
    enqueue( q, 9 );
    cout << endl ;
    display( q );
    enqueue( q, 4 );
    cout << endl ;
    display( q );
    cout << endl << "Size of circular queue = " << size( q );
    cout << endl << "Element dequeued is = " << dequeue( q ) << endl;
    display( q );
    cout << endl << "Size of circular queue = " << size( q );
    cout << endl << "Element dequeued is = " << dequeue( q ) << endl;
    display( q );
    cout << endl << "Size of circular queue = " << size( q );
    cout << endl << "Element dequeued is = " << dequeue( q ) << endl;
    display( q );
    cout << endl << "Size of circular queue = " << size( q );
    cout << endl << "Element dequeued is = " << dequeue( q ) << endl;
    display( q );
    cout << endl << "Size of circular queue = " << size( q );
    cout << endl << "Element dequeued is = " << dequeue( q ) << endl;
    display( q );
    enqueue( q, 1 );
    cout << endl ;
    display( q );
    enqueue( q, 2 );
    cout << endl ;
    display( q );
    enqueue( q, 3 );
    cout << endl ;
    display( q );
    enqueue( q, 4 );
    cout << endl ;
    display( q );
    enqueue( q, 5 );
    cout << endl ;
    display( q );
    enqueue( q, 6 );
    cout << endl ;
    display( q );
    enqueue( q, 7 );
    cout << endl ;
    display( q );
    cout << endl << "Size of circular queue = " << size( q );
    cout << endl << "Element dequeued is = " << dequeue( q ) << endl;
    display( q );
    cout << endl << "Size of circular queue = " << size( q );
    cout << endl << "Element dequeued is = " << dequeue( q ) << endl;
    display( q );
    cout << endl << "Size of circular queue = " << size( q );
    cout << endl << "Element dequeued is = " << dequeue( q ) << endl;
    display( q );
    cout << endl << "Size of circular queue = " << size( q );
    cout << endl << "Element dequeued is = " << dequeue( q ) << endl;
    display( q );
    cout << endl << "Size of circular queue = " << size( q );
    cout << endl << "Element dequeued is = " << dequeue( q ) << endl;
    display( q );
    cout << endl << "Size of circular queue = " << size( q );
    cout << endl << "Element dequeued is = " << dequeue( q ) << endl;
    display( q );
    cout << endl << "Size of circular queue = " << size( q );
    cout << endl << "Element dequeued is = " << dequeue( q ) << endl;
    display( q );
    cout << endl << "Size of circular queue = " << size( q );
    cout << endl << "Element dequeued is = " << dequeue( q ) << endl;
    display( q );
    cout << endl << "Size of circular queue = " << size( q );
    cout << endl << "Element dequeued is = " << dequeue( q ) << endl;
    display( q );
    cout << endl << "Size of circular queue = " << size( q );
    cout << endl << "Element dequeued is = " << dequeue( q ) << endl;
    display( q );
    cout << endl << "Size of circular queue = " << size( q );
    cout << endl << "Element dequeued is = " << dequeue( q ) << endl;
    display( q );
    cout << endl << "Size of circular queue = " << size( q );
    cout << endl << "Element dequeued is = " << dequeue( q ) << endl;
    display( q );
    cout << endl << "Size of circular queue = " << size( q );
    cout << endl << "Element dequeued is = " << dequeue( q ) << endl;
    display( q );
    cout << endl << "Size of circular queue = " << size( q ) << endl;

    return 0;
}

/***
    OUTPUT
    1--START

    1--5--START

    1--5--8--START

    1--5--8--9--START

    1--5--8--9--3--START

    1--5--8--9--3--6--START

    1--5--8--9--3--6--8--START

    1--5--8--9--3--6--8--5--START

    1--5--8--9--3--6--8--5--3--START

    1--5--8--9--3--6--8--5--3--1--START
    Queue overflow
    1--5--8--9--3--6--8--5--3--1--START
    Queue overflow
    1--5--8--9--3--6--8--5--3--1--START

    Size of circular queue = 10
    Element dequeued is = 1
    5--8--9--3--6--8--5--3--1--START

    Size of circular queue = 9
    Element dequeued is = 5
    8--9--3--6--8--5--3--1--START

    Size of circular queue = 8
    Element dequeued is = 8
    9--3--6--8--5--3--1--START

    Size of circular queue = 7
    Element dequeued is = 9
    3--6--8--5--3--1--START

    Size of circular queue = 6
    Element dequeued is = 3
    6--8--5--3--1--START

    6--8--5--3--1--1--START

    6--8--5--3--1--1--2--START

    6--8--5--3--1--1--2--3--START

    6--8--5--3--1--1--2--3--4--START

    6--8--5--3--1--1--2--3--4--5--START
    Queue overflow
    6--8--5--3--1--1--2--3--4--5--START
    Queue overflow
    6--8--5--3--1--1--2--3--4--5--START

    Size of circular queue = 8
    Element dequeued is = 6
    8--5--3--1--1--2--3--4--5--START

    Size of circular queue = 7
    Element dequeued is = 8
    5--3--1--1--2--3--4--5--START

    Size of circular queue = 6
    Element dequeued is = 5
    3--1--1--2--3--4--5--START

    Size of circular queue = 5
    Element dequeued is = 3
    1--1--2--3--4--5--START

    Size of circular queue = 4
    Element dequeued is = 1
    1--2--3--4--5--START

    Size of circular queue = 5
    Element dequeued is = 1
    2--3--4--5--START

    Size of circular queue = 4
    Element dequeued is = 2
    3--4--5--START

    Size of circular queue = 3
    Element dequeued is = 3
    4--5--START

    Size of circular queue = 2
    Element dequeued is = 4
    5--START

    Size of circular queue = 1
    Element dequeued is = 5
    Empty circular queue
    Size of circular queue = 0Queue underflow
    Element dequeued is = -1
    Empty circular queue
    Size of circular queue = 0Queue underflow
    Element dequeued is = -1
    Empty circular queue
    Size of circular queue = 0Queue underflow
    Element dequeued is = -1
    Empty circular queue
    Size of circular queue = 0

***/
