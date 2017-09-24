#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * Count numbers of vowels ,consonants ,digits ,and whitespace in the sentence.
 * @Author : Sathira Kittisukmongkol
 */
int findVowel( char sentence[] ) {
    int count = 0;
    char vowel[] = {'a', 'e', 'i', 'o', 'u'};
    for( int i = 0 ; sentence[i] != '\0' ; i++ ) {
        for( int j = 0 ; vowel[j] != '\0' ; j++ ) {
            if( sentence[i] == vowel[j] ) count++;
        }
    }
    return count;
}

int findConsonant( char sentence[] ) {
    int countTotal = 0;
    int noCount = 0;
    char notCount[] = {'a', 'e', 'i', 'o', 'u', ' '};
    for( int i = 0 ; sentence[i] != '\0' ; i++ ) {
        for( int j = 0 ; notCount[j] != '\0' ; j++ ) if( sentence[i] == notCount[j] ) noCount++;
        countTotal++;
    }
    return (countTotal - noCount);
}

int findDigit( char sentence[] ) {
    int temp1 = 0;
    int temp2 = 0;
    int times = strlen( sentence );
    for( int i = 0 ; sentence[i] != '\0' ; i++ ) {
        if( sentence[i] == ' ' ) {
            if( temp1 < temp2 ) temp1 = temp2;
            temp2 = 0;
        }
        else temp2++;
    }
    if( temp1 < temp2 ) temp1 = temp2;
    return temp1;
}

int findWS( char sentence[] ) {
    int count = 0;
    for( int i = 0 ; sentence[i] != '\0' ; i++ ) if( sentence[i] == ' ' ) count++;
    return count;
}

int main() {
    char sentence[999999];
    printf( "This program will count the numbers of vowel, consonant, digit, and white space.\n" );
    printf( "Enter the sentence : " );
    gets( sentence );
    int numVowel = findVowel( sentence );
    printf( "Vowels : %d\n" , numVowel );
    int numConsonant = findConsonant( sentence );
    printf( "Consonants : %d\n" , numConsonant );
    int numDigit = findDigit( sentence );
    printf( "Digits : %d\n" , numDigit );
    int numWS = findWS( sentence );
    printf( "WhiteSpace : %d\n" , numWS );
}
