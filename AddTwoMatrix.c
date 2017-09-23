#include<stdio.h>

/**
 * Add Two matrix together.
 * @Author : Sathira Kittisukmongkol
 */
void calculate( int row , int column ) {
    printf( "---> 1st Matrix <---\n" );
    int firstBox[row][column];
    for( int i = 0 ; i < row ; i++ ) {
        for( int j = 0 ; j < column ; j++ ) {
            printf( "Enter no.%d%d number : " , i+1 , j+1 );
            scanf( "%d" , &firstBox[i][j] );
        }
    }

    printf( "---> 2nd Matrix <---\n" );
    int secondBox[row][column];
    for( int i = 0 ; i < row ; i++ ) {
        for( int j = 0 ; j < column ; j++ ) {
            printf( "Enter no.%d%d number : " , i+1 , j+1 );
            scanf( "%d" , &secondBox[i][j] );
        }
    }

    printf( "---> Sum of two matrix <---\n" );
    for( int x = 0 ; x < row ; x++ ) {
        for( int y = 0 ; y < column ; y++ ) {
            int temp = firstBox[x][y] + secondBox[x][y];
            printf( "%d  " , temp );
        }
        printf( "\n" );
    }
}

int main() {
    int row , column;
    printf( "Add two matrix\n" );
    printf( "Number of rows : " );
    scanf( "%d" , &row );
    printf( "Number of columns : " );
    scanf( "%d" , &column );
    calculate( row , column );
}