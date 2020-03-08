#include<stdio.h>
void enque ( int [100] );
void deque ( int [100] );
void display ( int [100] );
int front = -1, rear = -1;
main()
{
    int a[100], ch;
    do
    {
        printf ( "\n\n Enter the choice that you need \n" );
        printf ( "\t1.ENQUE(insertion)\n\t2.DEQUE(deletion)\n\t3.DISPLAY\n\t4.EXIT\n\n" );
        scanf ( "%d", &ch );
        switch ( ch )
        {
        case 1:
            enque ( a );
            break;
        case 2:
            deque ( a );
            break;
        case 3:
            display ( a );
            break;
        default:
            printf ( "\n\n\t Thank You!!!\n\n" );
            break;
        }
    }
    while ( ch < 4 );
}
void enque ( int a[100] )
{
    int item;
    if ( front > 100 )
        printf ( "\n\n |QUEUE OVERFLOW| \n" );
    else
    {
        printf ( "\n Enter element into the Queue: " );
        scanf ( "%d", &item );
        if ( rear == -1 )
            front = 0;
        rear++;
        a[rear] = item;
    }
}
void deque ( int a[100] )
{
    if ( front == rear + 1 )
        printf ( "\n |QUEUE UNDERFLOW| \n" );
    else
    {
        printf ( "\n Deleted element is %d \n", a[front] );
        front++;
    }
}
void display ( int a[100] )
{
    int i;
    if ( rear == -1 )
        printf ( "\n\n Queue is Empty \n\n" );
    else
    {
        for ( i = front; i <= rear; i++ )
            printf ( "\n\t%d", a[i] );
        printf ( "\n\n" );
    }
}

