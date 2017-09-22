#include<stdio.h>

/*
 * Print all prime numbers between input number interval.
 * @author : Sathira Kittisukmongkol
 */
int firstNumber , secondNumber , count;

int checkPrimeNumber( int number ) {
    if( number <= 1 ) return 0;
    else {
        for( int i = 2 ; i < number  ; i++ ) {
            if( ( number % i ) == 0 ) return 0;
        }
        return 1;
    }
}

void printPrimeNumberList( int first , int last ) {
    count = 0;
    for( int i = first ; i <= last ; i++ ) {
        if( checkPrimeNumber( i ) == 1 ) {
            count++;
            printf( "%d " , i );
        }
    }
    printf( "\nThe prime number between %d to %d is %d numbers.\n" , first , last , count );
}

int main() {
    int num1 , num2 ;
    printf( "Check Prime Number Between Number Intervals.\n" );
    printf( "Enter the first number of interval : " );
    scanf( "%d" , &num1 );
    printf( "Enter the second number of interval : " ); 
    scanf( "%d" , &num2 );
    if( num1 < num2 ) {
        firstNumber = num1;
        secondNumber = num2;
    }
    else {
        firstNumber = num2;
        secondNumber = num1;
    }
    printPrimeNumberList( firstNumber , secondNumber );
}