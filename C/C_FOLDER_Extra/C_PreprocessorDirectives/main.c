
// Preprocessor directives
#include <stdio.h>
#include <string.h>
#include <errno.h>

//#define ERROR_NUMBER( ) (\
//	++global_error_counter \
//)



// Global statements
int global_error_counter=!__STDC__ ;


// Prototypes
void global_error_message() ;


int main ( ) {

	puts ("\n\n\n") ;


	void (*error_message_caller) () = global_error_message ;
	error_message_caller() ;


	puts ("\n\n\tALL RIGHT!\n\n\n\n") ;

return 0;
}


void global_error_message ( ) {

	#ifdef ERROR_NUMBER

		fprintf (stderr,"ERROR #%d: %s",ERROR_NUMBER(),strerror(errno)) ;
	
	#else
		
		#warning ERROR_NUMBER undefined.
		
		// Nested
		#if !defined (ERROR_FLAG)
			#define ERROR_FLAG __STDC__
		#else
			#if (ERROR_FLAG==0)
				#undef ERROR_FLAG
			#else
				#define ERROR_FLAG -__STDC__
			#endif
		#endif
		// Nested

		#define ERROR_NUMBER( ) (\
			++global_error_counter \
		)

		fprintf (stderr,"NO ERROR-COUNTER FOUND. Error flag: %d\n%s\n",ERROR_FLAG,strerror(errno)) ;

	#endif // mandatory when '#ifdef' or '#ifndef' is used.

}



// To rest -->      