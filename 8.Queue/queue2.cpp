/// Implement queue using arrays, Structure , with pointers

#include<iostream>
#include<cstdlib>
#define SIZE 10

using namespace std;

typedef struct queue
{
    int arr[SIZE];
    int front;
    int rear;
};

bool isFull ( const queue *q )
{
    if ( ( q->rear + 1 ) >= SIZE )
    {
        return true;
    }
    return false;
}

bool isEmpty ( const queue *q )
{
    if ( ( q->rear == -1 ) || ( q->rear < q->front ) )
    {
        return true;
    }
    return false;
}

int size ( const queue *q )
{
    if ( isEmpty ( q ) )
    {
        return 0;
    }
    return ( ( q->rear - q->front ) + 1 );
}

int frontElement ( const queue *q )
{
    if ( ( q->rear == -1 ) || ( q->rear < q->front ) )
    {
        cout << "Empty queue" ;
        return -1;
    }
    return ( q->arr[ q->front ] );
}

void enqueue ( queue *q, int data )
{
    if ( isFull ( q ) )
    {
        cout << " Queue overflow " ;
        return;
    }
    if ( q->rear == -1 )
    {
        q->front = 0;
    }
    q->arr[ ++(q->rear) ] = data;
}

int dequeue ( queue *q )
{
    if ( isEmpty ( q ) )
    {
        cout << " Queue underflow " ;
        return -1;
    }
    int temp = q->arr[ q->front ];
    ++( q->front );
    return temp;
}

void display ( const queue *q )
{
    if ( isEmpty ( q ) )
    {
        cout << " Empty queue ";
        return;
    }
    for ( int i = q->front ; i <= q->rear ; i++ )
    {
        cout << q->arr[i] << "<--" ;
    }
    cout << "NULL" << endl;
}

int main()
{
    queue *q = ( queue * ) malloc ( sizeof ( queue ) );
    q->front = q->rear = -1;
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
    cout << endl << "Size of queue = " << size( q );
    cout << endl << "Front element is = " << frontElement ( q );
    cout << endl << "Element dequeued is = " << dequeue( q ) << endl;
    display( q );
    cout << endl << "Size of queue = " << size( q );
    cout << endl << "Front element is = " << frontElement ( q );
    cout << endl << "Element dequeued is = " << dequeue( q ) << endl;
    display( q );
    cout << endl << "Size of queue = " << size( q );
    cout << endl << "Front element is = " << frontElement ( q );
    cout << endl << "Element dequeued is = " << dequeue( q ) << endl;
    display( q );
    cout << endl << "Size of queue = " << size( q ) << endl;

    return 0;
}

/***
    OUTPUT
    1<--NULL

    1<--5<--NULL

    1<--5<--8<--NULL

    1<--5<--8<--9<--NULL

    1<--5<--8<--9<--3<--NULL

    1<--5<--8<--9<--3<--6<--NULL

    1<--5<--8<--9<--3<--6<--8<--NULL

    Size of queue = 7
    Front element is = 1
    Element dequeued is = 1
    5<--8<--9<--3<--6<--8<--NULL

    Size of queue = 6
    Front element is = 5
    Element dequeued is = 5
    8<--9<--3<--6<--8<--NULL

    Size of queue = 5
    Front element is = 8
    Element dequeued is = 8
    9<--3<--6<--8<--NULL

    Size of queue = 4

***/
