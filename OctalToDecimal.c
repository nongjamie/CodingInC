#include<stdio.h>
#include<math.h>

/**
 * Convert octal number to decimal number.
 * @Author : Sathira Kittisukmongkol
 */
int calculate( inputNum ) {
    int count = 0;
    int answer = 0;
    while( inputNum != 0 ) {
        int last = inputNum % 10;
        answer = answer + last * pow( 8 , count );
        count++;
        inputNum = inputNum/10;
    }
    return answer;
}

int main() {
    int inputNum;
    printf( "Octal to Decimal\n" );
    printf( "Enter a octal number : " );
    scanf( "%d" , &inputNum );
    int answer = calculate( inputNum );
    printf( "Octal : %d ==> Decimal : %d\n" , inputNum , answer );
}