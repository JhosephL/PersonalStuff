
// Preprocessor directives
#include <stdio.h>
#include <string.h>
#include <errno.h>



// Global statements


// Prototypes


int main ( ) {

	puts ("\n\n\n") ;


	for ( int i=0 ; i < 43 ; i++ ) {  // i < 135
        fprintf (stderr , "%d: %s\n" , i , strerror(i)) ;
    }


	puts ("\n\n\tALL RIGHT!\n\n\n\n") ;

return 0;
}



// To rest -->      