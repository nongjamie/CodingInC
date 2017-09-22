#include<stdio.h>

int FindGCD( int n1 , int n2 ) {
    if( n2 != 0 ) return FindGCD( n2 , n1%n2 ); 
    return n1;
}

int main() {
    printf( "Enter two integer numbers : " );
    int num1 , num2 ;
    scanf( "%d %d" , &num1 , &num2 );
    printf( "G.C.D. of %d and %d is %d.\n" , num1 , num2 , FindGCD( num1 , num2 ) );
}