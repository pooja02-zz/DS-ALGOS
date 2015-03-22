/// Link List

#include<iostream>
#include<cstdlib>

using namespace std;

struct node
{
    int data;
    node *next;
};

node *addNode ( node *head, int item )
{
    node *newNode = ( node *) malloc ( sizeof(node) ) ;
    newNode->data = item ;
    newNode->next = NULL ;

    if ( head == NULL )
    {
        return newNode ;
    }
    node *temp = head ;
    while ( temp->next != NULL )
    {
        temp = temp->next ;
    }
    temp->next = newNode ;
    return head ;
}

void voidAdd ( node **head, int item )
{
    node *newNode = ( node *) malloc ( sizeof(node) ) ;
    newNode->data = item ;
    newNode->next = NULL ;
    if( *head == NULL)
    {
        *head = newNode ;
        return;
    }
    node *temp = *head ;
    while ( temp->next != NULL )
    {
        temp = temp->next ;
    }
    temp->next = newNode;
}

int getLength ( node *head )
{
    int len = 0 ;
    node *temp = head ;
    while ( temp != NULL )
    {
        temp = temp->next ;
        len++;
    }
    return len;
}

void display ( node *head )
{
    node *temp = head ;
    while ( temp != NULL )
    {
        cout << temp->data << "-->" ;
        temp = temp->next ;
    }
    cout << "NULL" << endl ;
}

int main()
{
    node *head=NULL;

    for( int i = 0 ; i < 10 ; i++ )
    {
        /// method 1
        head = addNode( head, i) ;
        display ( head ) ;
    	cout << "Length of link list : " << getLength ( head ) << endl ;
    }

    cout << endl << endl ;

    node *head2 = NULL;
    for( int i = 0 ; i < 10 ; i++ )
    {
    	/// method 2
        voidAdd ( &head2, i ) ;
        display ( head2 ) ;
    	cout << "Length of link list : " << getLength ( head2 ) << endl ;
    }

    return 0;
}
