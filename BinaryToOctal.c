#include<stdio.h>
#include<math.h>

int binaryToDecimal( int inputNum ) {
    int count = 0;
    int answer = 0;
    while( inputNum != 0 ) {
        int last = inputNum % 10;
        answer = answer + last * pow( 2 , count );
        count++;
        inputNum = inputNum/10;
    }
    return answer;
}

int decimalToOctal( int decimalNum ) {
    int count = 0;
    int answer = 0;
    while( decimalNum != 0 ) {
        int q = decimalNum / 8;
        int r = decimalNum % 8;
        answer = answer + ( r * pow( 10 , count ) );
        decimalNum = decimalNum/8;
        count++;
    }
    return answer;
}

int main() {
    int binaryNum , decimalNum , octalNum;
    printf( "Convert binary number to octal number\n" );
    printf( "Enter a binary number : " );
    scanf( "%d" , &binaryNum );
    decimalNum = binaryToDecimal( binaryNum );
    octalNum = decimalToOctal( decimalNum );
    printf( "Binary : %d <==> Octal : %d\n" , binaryNum , octalNum );
}