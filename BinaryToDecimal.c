#include<stdio.h>
#include<math.h>

/**
 * Convert binary number to decimal number.
 * @Author : Sathira Kittisukmongkol
 */
int calculate( inputNum ) {
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

int main() {
    int inputNum;
    printf( "Binary to Decimal\n" );
    printf( "Enter a binary number : " );
    scanf( "%d" , &inputNum );
    int answer = calculate( inputNum );
    printf( "Binary : %d ==> Decimal : %d\n" , inputNum , answer );
}