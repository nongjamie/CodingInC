#include<stdio.h>

/**
 * Find the sum of natural numbers by using a recursive function.\
 * @Author : Sathira Kittisukmongkol
 */
int findAnswer( int num ) {
    if( num <= 0 ) return 0;
    return num + findAnswer( num - 1 );
}

int main() {
    int num;
    printf( "Sum of natural numbers using recusrion.\n" );
    printf( "Enter a positive number : " );
    scanf( "%d" , &num );
    printf( "The answer is %d.\n" , findAnswer( num ) );

}