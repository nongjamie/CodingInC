#include<stdio.h>

/**
 * Check if an integer (entered by the user) can be expressed as 
 * the sum of two prime numbers of all possible combinations 
 * with the use of functions.
 * @Author : Sathira Kittisukmongkol
 */
int checkPrime( int n ) {
    if( n <= 1 ) return 0;
    for( int i = 2 ; i < n ; i++ ) if( n%i == 0 ) return 0;
    return 1;
}

void findAnswer( int num ) {
    int first , second;
    for( int i = 2 ; i <= num/2 ; i++ ) {
        first = i;
        second = num - i;
        if( checkPrime(first) && checkPrime(second) ) printf( "%d = %d + %d\n" , num , first , second );
    }
}

int main() {
    int num;
    printf( "Integer as a Sum of Two Prime Numbers.\n" );
    printf( "Enter a number : " );
    scanf( "%d" , &num );
    if( num > 1 ) findAnswer( num );
    else printf( "Cannot find the answer.\n" );
}