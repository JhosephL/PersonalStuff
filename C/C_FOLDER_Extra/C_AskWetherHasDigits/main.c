
// Preprocessor directives
#include <stdio.h>
#include <string.h>

#pragma GCC poison gets



// Global statements


// Prototypes
int askHasDigits ( char* ) ;


int main ( ) {

    puts ("\n\n\n") ;


    char inputStringValue[1000] ;

    puts ("Type a text string.") ;
    fgets (inputStringValue,1000,stdin) ;

    if ( askHasDigits (inputStringValue) ) {
	    puts ("\nThe string typed has digits.") ;
    } else {
	    puts ("\nThe string typed has no digits.") ;
    }


    puts ("\n\n\tALL RIGHT!\n\n\n\n") ;

return 0;
}


int askHasDigits ( char string[] ) {

	size_t string_size = strlen (string) ;

	for ( int counter_i=0 ; counter_i < string_size ; counter_i++ ) {

		if ( (int)string[counter_i] >= 48 && (int)string[counter_i] <= 57 ) {
			return 1 ;
		}

	}
 
return 0 ;
}




// To rest -->    