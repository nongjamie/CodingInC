#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * Find frequency of some character in the sentence.
 * @Author : Sathira Kittisukmongkol
 */
int findFrequencyChar( char sentence[] , char c ) {
    int count = 0;
    int lengthOfSenc = strlen( sentence );
    for( int i = 0 ; i < lengthOfSenc-1 ; i++ ) {
        if( sentence[i] == c ) count++; 
    }
    return count;
}

int main() {
    char senc[99999];
    char findChar;
    printf( "Find the frequency of characters in string.\n" );
    printf( "Enter a sentence : " );
    gets( senc );
    printf( "Enter a character to find : " );
    scanf( "%c" , &findChar );
    int frequency = findFrequencyChar( senc , findChar );
    printf( "The frequency of %c in sentence is %d\n" , findChar , frequency );
}
