#include<stdio.h>
#include<stdlib.h>

/**
 * Find the maximum number in the array.
 * @Author : Sathira Kittisukmongkol
 */
int findMax( int box[] , int size ) {
    int answer = box[0];
    for( int i = 0 ; i < size ; i++ ) {
        if( box[i] > answer ) answer = box[i];
    }
    return answer;
}

int inputNumberFromUser( int size ) {
    int box[size];
    for( int i = 0 ; i < size ; i++ ) {
        printf( "Enter no.%d number : " , (i+1) );
        scanf( "%d" , &box[i] );
    }
    return findMax( box , size );
}

int main() {
    printf( "Find largest number in the array\n" );
    printf( "Enter size of the array (0-100) : " );
    int size;
    scanf( "%d" , &size );
    while( size < 0 || size > 100 ) {
        printf( "The size is invalid , please try again ...\n" );
        printf( "Enter size of the array : " );
        scanf( "%d" , &size );
    }
    int answer = inputNumberFromUser( size );
    printf( "The max number in the array is %d\n" , answer );
}