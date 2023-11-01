
// PREPROCESSOR DIRECTIVES
//// For input and output stream.
#include <stdio.h>
//// For random number generator.
#include <stdlib.h>
//// For current time.
#include <time.h>

#pragma GCC poison gets



// GLOBAL STATEMENTS


// PROTOTYPES
int function_int_random ( int inferiorLimit , int superiorLimit ) ;
float function_float_random ( float inferiorLimit , float superiorLimit ) ;
double function_double_random ( double inferiorLimit , double superiorLimit ) ;
char function_char_random ( int firstASCII , int lastASCII ) ;


// MAIN FUNCTION'S IMPLEMENTATION.

int main ( void ) {

    puts ("\n\n\n") ;


    // Seed for random number generator based on current time.
    srand ( time(NULL) ) ;

    /* Intervals: [ x , y ) */

    int int_randomNumber = function_int_random ( 0 , 6 ) ;
    printf ( "Integer random number: %d\n" , int_randomNumber ) ;

    float float_randomNumber = function_float_random ( 0.0f , 6.0f ) ;
    printf ( "Float random numer: %f\n" , float_randomNumber ) ;

    double double_randomNumber = function_double_random ( 0.0 , 6.0 ) ;
    printf ( "Double random numer: %lf\n" , double_randomNumber ) ;

    char char_random = function_char_random ( 33 , 127 ) ;
    printf ( "Random character: %c\n" , char_random ) ;


    puts ("\n\n\tALL RIGHT!\n\n\n\n") ;

return 0;
}


// OTHER FUNCTIONS IMPLEMENTATION.

int function_int_random ( int inf , int sup ) {

    int answer = 0 ;

    answer = inf + ( rand() % sup ) ;

return answer ;
}


float function_float_random ( float inf , float sup ) {

    float answer = 0.0f ;

    answer = inf + ( rand() * sup / RAND_MAX ) ;

return answer ;
}


double function_double_random ( double inf , double sup ) {

    double answer = 0.0 ;

    answer = inf + ( rand() * sup / RAND_MAX ) ;

return answer ;
}


char function_char_random ( int inf , int sup ) {

    int int_temporalRandomNumber = inf + ( rand() % sup ) ;

    char answer = (char) int_temporalRandomNumber ;
    
return answer ;
}



// TO REST -->      