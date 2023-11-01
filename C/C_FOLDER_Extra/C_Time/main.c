
// PREPROCESSOR DIRECTIVES
//// Input and output stream.
#include <stdio.h>
//// Time operation.
#include <time.h>
//// Time waiting.
#include <unistd.h>

#pragma GCC poison gets



// GLOBAL STATEMENTS


// PROTOTYPES
//// Functions for integer time.
void function_waitingForOperation_IntegerTime ( int secondsToWait ) ;
double function_operationTime_IntegerTime ( void (*pointerToFunction)(int) , int secondsToWait ) ;
//// Functions for double time.
void function_waitingForOperation_DoubleTime ( double secondsToWait ) ;
double function_operationTime_DoubleTime ( void (*pointerToFunction)(double) , double secondsToWait ) ;


// MAIN FUNCTION'S IMPLEMENTATION.

int main ( void ) {

    puts ("\n\n\n") ;


    double double_operationTime = 0.0 ;

    // Functions with integer implementation.
    void ( *pointerToFunction_IntegerTime ) ( int ) = &function_waitingForOperation_IntegerTime ;
    double_operationTime = function_operationTime_IntegerTime ( pointerToFunction_IntegerTime , 5 ) ;
    printf ( "\nTime of operation: %lf\n" , double_operationTime ) ;

    puts("");

    // Functions with double implementation.
    void ( *pointerToFunction_DoubleTime ) ( double ) = &function_waitingForOperation_DoubleTime ;
    double_operationTime = function_operationTime_DoubleTime ( pointerToFunction_DoubleTime , 5.0 ) ;
    printf ( "\nTime of operation: %lf\n" , double_operationTime ) ;


    puts ("\n\n\tALL RIGHT!\n\n\n\n") ;

return 0;
}


// OTHER FUNCTIONS.

double function_operationTime_IntegerTime ( void (*pointerToFunction)(int) , int secs ) {

    double answer = 0.0 ;

    clock_t start = clock() ;

    pointerToFunction ( secs ) ;

    clock_t end = clock() ;

    answer = ( double ) ( (end-start) / CLOCKS_PER_SEC ) ;

return answer ;
}


void function_waitingForOperation_IntegerTime ( int secs ) {

    int counter = 0 ;
    while ( counter < secs ) {

        printf ( "%d seconds.\n" , counter++ ) ;
        sleep ( 1 ) ;
    
    }

}


double function_operationTime_DoubleTime ( void (*pointerToFunction)(double) , double secs ) {

    double answer = 0.0 ;

    clock_t start = clock() ;

    pointerToFunction ( secs ) ;

    clock_t end = clock() ;

    answer = ( double ) ( (end-start) / CLOCKS_PER_SEC ) ;

return answer ;
}


void function_waitingForOperation_DoubleTime ( double secs ) {

    double double_currentTime = 0.0 ;

    int int_waitingTime = ( int ) ( secs * 1000000 ) ;

    while ( 0 < int_waitingTime ) {

        double_currentTime += 0.1 ;

        printf ( "%.1lf seconds.\n" , double_currentTime ) ;

        usleep ( 100000 ) ;

    int_waitingTime -= 100000 ;
    }

}



// TO REST -->      