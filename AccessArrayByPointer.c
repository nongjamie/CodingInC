#include<stdio.h>

/**
 * Access Array By using Pointer.
 * @Author : Sathira Kittisukmongkol
 */
int main() {
    int box[3][3];
    printf( "Access Array By using Pointer.\n" );
    printf( "--> Input number to array 3x3 <--\n" );
    for( int x = 0 ; x < 3 ; x++ ) {
        for( int y = 0 ; y < 3 ; y++ ) {
            printf( "no.%d%d number : " , x+1 , y+1 );
            scanf( "%d" , (box[x] + y) );
        }
    }
    printf( "--> Result <--\n" );
    for( int i = 0 ; i < 3 ; i++ ) {
        for( int j = 0 ; j < 3 ; j++ ) {
            printf( "%d" , *(box[i]+j) );
            printf("  ");
        }
        printf( "\n" );
    }
}