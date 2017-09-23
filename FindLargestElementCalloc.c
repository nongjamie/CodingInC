#include<stdio.h>
#include<stdlib.h>

/**
 * Find the largest element using calloc()
 * @Author: Sathira Kittisukmongkol
 */
int main() {
    int num;
    printf( "Find largest number using calloc()\n" );
    printf( "Enter a number of elements : " );
    scanf( "%d" , &num );
    float* ptr = (float*) calloc( num , sizeof(float) );
    if( ptr == NULL ) {
        printf( "Error occurred , please try again ..." );
        exit( 0 );
    }
    else {
        for( int x = 0 ; x < num ; x++ ) {
            printf( "Enter no.%d number : " , (x+1) );
            scanf( "%f" , (ptr + x) );
        }
        for( int y = 1 ; y < num ; y++ ) {
            if( *ptr < *(ptr+y) ) *ptr = *(ptr+y);
        }
        printf( "The answer is %.2f\n" , *ptr );
        free( ptr );
    }
}