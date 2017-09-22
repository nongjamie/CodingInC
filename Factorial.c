#include<stdio.h>

/**
 * Factorial
 * @author : Sathira Kittisukmongkol
 */
int Factorial( int num ) {
    if( num < 0 ) return 0;
    else if( num == 0 ) return 1;
    return num * Factorial( num - 1 );
}

int main() {
    int inputNum;
    printf( "Enter a number : " );
    scanf( "%d" , &inputNum );
    int answer = Factorial( inputNum );
    printf( "The factorial of %d is %d.\n" , inputNum , answer );
}