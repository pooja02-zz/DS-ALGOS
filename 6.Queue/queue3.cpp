/// Implement queue using class, arrays

#include<iostream>
#include<cstdlib>
#define SIZE 10

using namespace std;


class queue
{
    int arr[SIZE];
    int front;
    int rear;

    public:

    /***
        Time Complexity: O(1)
        for all following operations on queue.
    ***/

    /// constructor to assign initial value to top
    queue()
    {
        front = rear = -1;
    }

    bool isFull()
    {
        if ( ( rear + 1 ) >= SIZE )
        {
            return true;
        }
        return false;
    }

    bool isEmpty()
    {
        if ( ( rear == -1 ) || ( rear < front ) )
        {
            return true;
        }
        return false;
    }

    int size()
    {
        if ( isEmpty () )
        {
            return 0;
        }
        return ( ( rear - front ) + 1 );
    }

    void enqueue ( int data )
    {
        if ( isFull () )
        {
            cout << " Queue overflow " ;
            return;
        }
        if ( rear == -1 )
        {
            front = 0;
        }
        arr[ ++(rear) ] = data;
    }

    int frontElement ()
    {
        if ( ( rear == -1 ) || ( rear < front ) )
        {
            cout << "Empty queue" ;
            return -1;
        }
        return ( arr[ front ] );
    }

    int dequeue ()
    {
        if ( isEmpty () )
        {
            cout << " Queue underflow " ;
            return -1;
        }
        int temp = arr[ front ];
        ++( front );
        return temp;
    }

    void display ()
    {
        if ( isEmpty () )
        {
            cout << " Empty queue ";
            return;
        }
        for ( int i = front ; i <= rear ; i++ )
        {
            cout << arr[i] << "<--" ;
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    queue q;
    q.enqueue( 1 );
    cout << endl ;
    q.display();
    q.enqueue( 5 );
    cout << endl ;
    q.display();
    q.enqueue( 8 );
    cout << endl ;
    q.display();
    q.enqueue( 9 );
    cout << endl ;
    q.display();
    q.enqueue( 3 );
    cout << endl ;
    q.display();
    q.enqueue( 6 );
    cout << endl ;
    q.display();
    q.enqueue( 8 );
    cout << endl ;
    q.display();
    cout << endl << "Size of queue = " << q.size();
    cout << endl << "Front element is = " << q.frontElement ();
    cout << endl << "Element dequeued is = " << q.dequeue() << endl;
    q.display();
    cout << endl << "Size of queue = " << q.size();
    cout << endl << "Front element is = " << q.frontElement ();
    cout << endl << "Element dequeued is = " << q.dequeue() << endl;
    q.display();
    cout << endl << "Size of queue = " << q.size();
    cout << endl << "Front element is = " << q.frontElement ();
    cout << endl << "Element dequeued is = " << q.dequeue() << endl;
    q.display();
    cout << endl << "Size of queue = " << q.size() << endl;
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


