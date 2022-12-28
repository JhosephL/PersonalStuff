
// Preprocessor directives
#include <stdio.h>
#include <stdbool.h>  // To declare boolean variables and functions.

#pragma GCC poison gets

#define FALSE 0
#define TRUE 1 



// Global statements
void ALL_FROM ( ) {

    // https://www.w3schools.com/c/c_booleans.php

}

char* BOOLEAN_TO_STRING ( bool boolean_value ) {
    if ( boolean_value == __STDC__ ) {
        return "true" ;
    } else {
        return "false" ;
    }
}


// Prototypes
bool boolean_function() ;


int main ( ) {

    puts ("\n\n\n") ;


    // W3Ss: "In C, the bool type is not a built-in data type, like int or char".

    bool bool_EG_01 ;  //  Declaring a boolean data type variable.
    printf ("\tThe content of 'bool_EG_01' is:\n\n\t\t%d\n\n",bool_EG_01) ;

    bool_EG_01 = TRUE ;

    printf ("\tThe new content of 'bool_EG_01' (after assigment) is:\n\n\t\t%d\n\n",bool_EG_01) ;

    printf ("\tThe result of comparing 'true == true' is:\n\n\t\t%s\n\n",BOOLEAN_TO_STRING(true == true)) ;

    printf ("\tThe result of comparing 'true == false' is:\n\n\t\t%s\n\n",BOOLEAN_TO_STRING(true == false)) ;

    printf ("\tThe result 'boolean_function' is:\n\n\t\t%d\n\n",boolean_function()) ;


    puts ("\n\n\tALL RIGHT!\n\n\n\n") ;

return 0;
}


bool boolean_function ( ) {

    return 4%2 == 0 ;

}



// To rest -->      