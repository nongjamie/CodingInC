#include<stdio.h>
#include<stdlib.h>

/**
 * Calculate the average of the numbers in array.
 * @Author : Sathira Kittisukmongkol
 */
void printAnswer( int box[] , int size ) {
    double sum = 0;
    for( int i = 0 ; i < size ; i++ ) sum = sum + box[i];
    printf( "The answer is %.2f\n" , (sum/size) );
}

void inputFromUser( size ) {
    int box[size];
    for( int i = 0 ; i < size ; i++ ) {
        printf( "Enter no.%d number : " , (i+1) );
        scanf( "%d" , (box + i) );
    }
    printAnswer( box , size );
}

int main() {
    int size;
    printf( "Calculate average from the input number.\n" );
    printf( "Enter the number of element : " );
    scanf( "%d" , &size );
    while( size<0 || size>100 ) {
        printf( "Error , please try again ...\n" );
        printf( "Enter the number of element : " );
        scanf( "%d" , &size );
    }
    inputFromUser( size );
}