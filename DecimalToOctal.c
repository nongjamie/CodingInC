#include<stdio.h>
#include<math.h>

/**
 * Convert decimal number to octal number.
 * @Author : Sathira Kittisukmongkol
 */
void findAnswer( int decimalNum ) {
    int count = 0;
    int answer = 0;
    while( decimalNum != 0 ) {
        int q = decimalNum / 8;
        int r = decimalNum % 8;
        printf( "%d = 8( %d ) + %d\n" , decimalNum , q , r );
        answer = answer + ( r * pow( 10 , count ) );
        decimalNum = decimalNum/8;
        count++;
    }
    printf( "The octal number is %d\n" , answer );
}

int main() {
    int inputNum;
    printf( "Convert decimal number to octal number\n" );
    printf( "Enter a decimal number : " );
    scanf( "%d" , &inputNum );
    findAnswer( inputNum );
}