#include<stdio.h>

/**
 * Find Sum of natural number.
 * @author : Sathira Kittisukmongkol
 */
int FindAnswer( int input ) {
    if( input < 0 ) return 0;
    else if( input == 0 ) return 0;
    else return input + FindAnswer( input - 1 );
}

int main() {
    int inputNum;
    printf( "Enter a number : " );
    scanf( "%d" , &inputNum );
    int answer = FindAnswer( inputNum );
    printf( "The answer is %d\n" , answer );
}