#include<stdio.h>
#include<math.h>

/**
 * Convert octal number to binary number.
 * @Author : Sathira Kittisukmongkol
 */
int octalToDecimal( int octal ) {
    int count = 0;
    int answer = 0;
    while( octal != 0 ) {
        int last = octal%10;
        answer = answer + last*( pow( 8 , count ) );
        octal = octal/10;
        count++;
    }
    return answer;
}

int decimalToBinary( int decimal ) {
    int count = 0;
    int answer = 0;
    while( decimal != 0 ) {
        int r = decimal%2;
        answer = answer + r*( pow( 10 , count ) );
        decimal = decimal/2;
        count++;
    }
    return answer;
}

int main() {
    int octal , decimal , binary;
    printf( "Convert octal number to binary number\n" );
    printf( "Enter octal number : " );
    scanf( "%d" , &octal );
    decimal = octalToDecimal( octal );
    binary = decimalToBinary( decimal );
    printf( "Octal : %d <==> Binary : %d\n" , octal , binary );
}