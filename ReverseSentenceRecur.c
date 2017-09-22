#include<stdio.h>

/**
 * Reverse the sentence using recursion.
 * @Author : Sathira Kittisukmongkol
 */
void reverseSentence() {
    char c;
    scanf( "%c" , &c );
    if( c != '\n' ) {
        reverseSentence();
        printf( "%c" , c );
    }
}

int main() {
    printf( "Enter the sentence : " );
    reverseSentence();
    printf( "\n" );
}