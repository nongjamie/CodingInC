#include<stdio.h>

/**
 * Swap numbers with cyclic order.
 * @Author : Sathira Kittisukmongkol
 */

int size , times;
int box[100];

void askElements() {
    for( int i = 0 ; i < size ; i++ ) {
        printf( "Enter no.%d number : " , (i+1)  );
        scanf( "%d" , &box[i] );
    }
}

void printBefore( int *ptr ) {
    printf( "---> Before Swap <---\n" );
    for( int i = 0 ; i < size ; i++ , ptr++ ) {
        printf( "No.%d = %d\n" , (i+1) , (*ptr) );
    }
}

void cyclicOrderSwap( int *ptr ) {
    int temp = *ptr;
    ptr++;
    for( int i = 0 ; i < size ; i++ , ptr++ ) {
        if( i == size-1 ) box[i] = temp;
        else box[i] = *ptr;
    }
}


void printAfter( int *ptr ) {
    printf( "---> After Swap <---\n" );
    for( int i = 0 ; i < size ; i++ , ptr++ ) {
        printf( "No.%d = %d\n" , (i+1) , (*ptr) );
    }
}

int main() {
    printf( "Swap numbers with cyclic order by using pointer\n" );
    printf( "Enter round to swap (positive): " );
    scanf( "%d" , &times );
    printf( "Enter size of number (1 - 100) : " );
    scanf( "%d" , &size );
    if( size >= 1 && size <= 100 && times > 0 ) {
        askElements();
        printBefore( &box );
        for( int i = 1 ; i <= times ; i++ ) cyclicOrderSwap( &box );
        printAfter( &box );
    }
    else printf( "Invalid size..." );
}