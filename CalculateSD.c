#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/**
 * Calculate the standard deviation of 10 numbers.
 * @Author : Sathira Kittisukmongkol
 */
double box[10];
const int size = 10;

double calculateSD( int mean ) {
    double tempAnswer = 0;
    for( int i = 0 ; i < size ; i++ ) {
        tempAnswer = tempAnswer + pow( (box[i] - mean) , 2 );
    }
    return sqrt( tempAnswer/size );
}

double calculateMean() {
    double sum = 0;
    for( int i = 0 ; i < size ; i++ ) sum = sum + box[i];
    return (sum/size);
}

void inputFromUser() {
    for( int i = 0 ; i < size ; i++ ) {
        printf( "Enter no.%d number : " , i+1 );
        scanf( "%lf" , &box[i] );
    }
}

int main() {
    printf( "Calculate the standard deviation of %d numbers.\n" , size );
    inputFromUser();
    double mean = calculateMean();
    double answer = calculateSD( mean );
    printf( "The standard deviation of this 10 data is %f\n" , answer );
}