#include<stdio.h>
#include<math.h>

/**
 * Convert decimal numbeer to binary number.
 * @Author : Sathira Kittisukmongkol
 */
void findAnswer( int decimalNum ) {
    int count = 0;
    int answer = 0;
    while( decimalNum != 0 ) {
        int q = decimalNum / 2;
        int r = decimalNum % 2;
        printf( "%d = 2( %d ) + %d\n" , decimalNum , q , r );
        answer = answer + ( r * pow( 10 , count ) );
        decimalNum = decimalNum/2;
        count++;
    }
    printf( "The answer is %d\n" , answer );
}

int main() {
    int inputNum;
    printf( "Convert decimal number to binary number\n" );
    printf( "Enter a number : " );
    scanf( "%d" , &inputNum );
    findAnswer( inputNum );
}