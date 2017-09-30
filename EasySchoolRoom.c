#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/**
 * Simlulate collection data of student in a room by using structure in c.
 * @Author : Sathira Kittisukmongkol 
 */
struct student {
    char nickname[100];
    char name[100];
    char surname[100];
    int idNumber;
    int age;
};

struct student dataOfAllStudents[1000];

int lengthOfData() {
    int count = 0;
    for( int i = 0 ; dataOfAllStudents[i].age != '\0' ; i++ ) {
        count++;
    }
    return count;
}

void collectNewStudent( int count ) {
    int alreadyHave = lengthOfData();
    for( int i = 0 ; i < count ; i++ , alreadyHave++ ) {
        printf( ".. Collect Student no.%d ..\n" , alreadyHave+1 );
        printf( "Nickname : " );
        scanf( "%s" , dataOfAllStudents[alreadyHave].nickname );
        printf( "Name : " );
        scanf( "%s" , dataOfAllStudents[alreadyHave].name );
        printf( "Surname : " );
        scanf( "%s" , dataOfAllStudents[alreadyHave].surname );
        printf( "ID Number : " );
        scanf( "%d" , &dataOfAllStudents[alreadyHave].idNumber );
        printf( "Age : " );
        scanf( "%d" , &dataOfAllStudents[alreadyHave].age );
    }
}

void printAllStudentData() {
    printf( "--> Print All Students Data <--\n" );
    for( int i = 0 ; dataOfAllStudents[i].age != '\0' ; i++ ) {
        printf( "-> Student %d <-\n" , (i+1) );
        printf( "Nickname : %s\n" , dataOfAllStudents[i].nickname );
        printf( "Name : %s\n" , dataOfAllStudents[i].name );
        printf( "Surname : %s\n" , dataOfAllStudents[i].surname );
        printf( "ID Number : %d\n" , dataOfAllStudents[i].idNumber );
        printf( "Age : %d\n" , dataOfAllStudents[i].age );
    }
}

void console() {
    int count = 0;
    int control = 1;
    while( control == 1 ) {
        printf( "How many students do you want to record? " );
        scanf( "%d" , &count );
        if( count >= 1 ) {
            collectNewStudent( count );
            printAllStudentData();
        }
        else if( count == 0 ) {
            printf( "Input cannot be 0.\n" );
        }
        else {
            control = 0;
            printf( "Program exits.\n" );
        }
    }
}

int main() {
    console();
}