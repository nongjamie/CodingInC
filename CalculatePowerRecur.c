#include<stdio.h>

/**
 * Calculates the power of a number using recursion.
 * @Author : Sathira Kittisukmongkol
 */
int calculate( int n , int p ) {
    if( p == 1) return n;
    else return n * calculate( n , p-1 );
}

void findAnswer( int n , int p ) {
    if( n==0 && p==0 ) printf( "Undefine...\n" );
    else if( p==0 ) printf( "%d to the power of %d is %d\n" , n , p , 1 );
    else printf( "%d to the power of %d is %d\n" , n , p , calculate( n , p ) );
}

int main() {
    int inputNum , inputPower;
    printf( "Calculate The Power using recusrion.\n" );
    printf( "Enter a number : " );
    scanf( "%d" , &inputNum );
    printf( "Enter power number (positive only) : " );
    scanf( "%d" , &inputPower );
    if( inputPower >= 0 ) findAnswer( inputNum , inputPower );
}