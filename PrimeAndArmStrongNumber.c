#include<stdio.h>
#include <math.h>

/** 
 * Check a number is it prime number or armstrong number.
 * @author : Sathira Kittisukmongkol
 */
int countNum( int inputNum ) {
    if( inputNum == 0 ) return 0;
    return 1 + countNum( inputNum/10 );
}

int checkPrime( int inputNum ) {
    if( inputNum <= 1 ) return 0;
    else {
        for( int i = 2 ; i < inputNum ; i++ ) if( inputNum%i == 0 ) return 0;
        return 1;
    }
}

int checkArmStrong( int inputNum , int power ) {
    int result = inputNum;
    while( inputNum != 0 ) {
        result = result - ( pow( (inputNum%10) , power ) );
        inputNum = inputNum/10 ;
    }
    if( result == 0) return 1;
    else return 0;
}

void checkPrimeAndArmStrong( int n ) {
    int count = countNum( n );
    if( checkPrime( n ) == 1 ) printf( "%d is Prime number.\n" , n );
    else printf( "%d is not Prime number.\n" , n );
    if( checkArmStrong( n , count ) == 1 ) printf( "%d is Armstrong number.\n" , n );
    else printf( "%d is not Armstrong number.\n" , n );
}

int main() {
    int num;
    printf( "Check PrimeNumber and ArmStrongNumber" );
    printf( "Enter a number : " );
    scanf( "%d" , &num );
    checkPrimeAndArmStrong( num );
}