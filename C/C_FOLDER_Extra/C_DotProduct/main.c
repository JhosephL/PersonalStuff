
// PREPROCESSOR DIRECTIVES
#include <stdio.h>		//// I/O streams
#include <stdlib.h>		//// atoi
#include <time.h>  		//// rand , time

#pragma GCC poison gets



// GLOBAL STATEMENTS


// PROTOTYPES
//// Logic of CLI arguments.
void function_showArguments ( const int* raw_argc , const char* const* raw_argv ) ;
int function_validateArguments ( const int* raw_argc , const char* const* raw_argv ) ;
void function_userArguments ( int* int_rowsA , int* int_columnsA , int* int_rowsB , int* int_columnsB , const char* const* raw_argv ) ;
void function_defaultArguments ( int* int_rowsA , int* int_columnsA , int* int_rowsB , int* int_columnsB ) ;
//// Memory allocation and initialization.
int** function_matrixCallocation ( const int* int_rows , const int* int_columns ) ;
//// Random values for matrixes.
void function_randomizeMatrix ( int** intMatrix , const int* int_rows , const int* int_columns ) ;
//// Dot product alg-operation.
void function_dotProduct ( const int* int_rowsA , const int* int_columnsA , const int** intMatrix_a , const int* int_columnsB , const int** intMatrix_b , int** intMatrix_c ) ;
//// Print result.
void function_printMatrix ( const int* size_rows , const int* size_columns , const int** intMatrix ) ;
//// Memory deallocation.
void function_matrixDeallocation ( const int* size_rows , int** intMatrix ) ;


int main ( int argc , char* argv[] ) {

    puts ( "\n\n\t.\t.\t.\t.\tDOT PRODUCT\t.\t.\t.\t.\n" ) ;


	//// Logic of CLI arguments.
    function_showArguments ( &argc , (const char* const*)argv ) ;

	int bool_validArguments = function_validateArguments ( &argc , (const char* const*)argv ) ;

	int int_rowsA , int_columnsA , int_rowsB , int_columnsB ;

	if ( bool_validArguments )
		function_userArguments ( &int_rowsA , &int_columnsA , &int_rowsB , &int_columnsB , (const char* const*)argv ) ;
	else
		function_defaultArguments ( &int_rowsA , &int_columnsA , &int_rowsB , &int_columnsB ) ;

	//// Memory allocation and initialization.
	int** intMatrix_a = function_matrixCallocation ( &int_rowsA , &int_columnsA ) ;
	int** intMatrix_b = function_matrixCallocation ( &int_rowsB , &int_columnsB ) ;
	int** intMatrix_c = function_matrixCallocation ( &int_rowsA , &int_columnsB ) ;

	//// Random values for matrixes.
	srand(time(NULL)) ;
	function_randomizeMatrix ( intMatrix_a , &int_rowsA , &int_columnsA ) ;
	function_randomizeMatrix ( intMatrix_b , &int_rowsB , &int_columnsB ) ;

	//// Dot product alg-operation.
	function_dotProduct ( &int_rowsA , &int_columnsA , (const int**)intMatrix_a , &int_columnsB , (const int**)intMatrix_b , intMatrix_c ) ;

	//// Print result.
	function_printMatrix ( &int_rowsA , &int_columnsA , (const int**)intMatrix_a ) ;
	printf ( "    DOT PRODUCT\n" ) ;
	function_printMatrix ( &int_rowsB , &int_columnsB , (const int**)intMatrix_b ) ;
	printf ( "\n    RESULT\n\n" ) ;
	function_printMatrix ( &int_rowsA , &int_columnsB , (const int**)intMatrix_c ) ;

	//// Memory deallocation.
	function_matrixDeallocation ( &int_rowsA , intMatrix_a ) ;
	function_matrixDeallocation ( &int_rowsB , intMatrix_b ) ;
	function_matrixDeallocation ( &int_rowsA , intMatrix_c ) ;


    puts ( "\n\t.\t.\t.\t.\tDOT PRODUCT\t.\t.\t.\t.\n" ) ;

return 0;
}


// OTHER FUNCTIONS

void function_showArguments ( const int* raw_argc , const char* const* raw_argv ) {

	printf ( "Total of arguments: %d\n"  ,  *raw_argc ) ;

	for ( int intCounter_i=1 ; intCounter_i < *raw_argc ; intCounter_i++ )
		printf ( "(arg %d)=%s\n"  ,  intCounter_i+1,*(raw_argv+intCounter_i) ) ;

	printf ("\n") ;

}

int function_validateArguments ( const int* raw_argc , const char* const* raw_argv ) {

	if ( *raw_argc != 5 ) {
		printf ( "The number of arguments is %d, different of 5.\n\n"  ,  *raw_argc ) ;
		return 0 ;
	}

	for ( int intCounter_i=1 ; intCounter_i < *raw_argc ; intCounter_i++) {
		int int_atoi = atoi ( *(raw_argv+intCounter_i) ) ;
		if ( int_atoi == 0 ) {
			printf ( "An argument cannot be 0: (arg %d)=%d\n\n"  ,  intCounter_i,int_atoi ) ;
			return 0 ;
		}
	}

	int int_rowsNewMatrix = atoi(*(raw_argv+2)) ;
	int int_columnsNewMatrix = atoi(*(raw_argv+3)) ;

	if ( int_rowsNewMatrix != int_columnsNewMatrix ) {
		printf ( "This arguments have to be equal: (2)=%d | (3)=%d.\n\n"  ,  int_rowsNewMatrix,int_columnsNewMatrix ) ;
		return 0 ;
	}

return 1 ;
}

void function_userArguments ( int* int_rowsA , int* int_columnsA , int* int_rowsB , int* int_columnsB , const char* const* raw_argv ) {

	*int_rowsA = atoi(*(raw_argv+1)) ;
	*int_columnsA = atoi(*(raw_argv+2)) ;
	*int_rowsB = atoi(*(raw_argv+3)) ;
	*int_columnsB = atoi(*(raw_argv+4)) ;

}

void function_defaultArguments ( int* int_rowsA , int* int_columnsA , int* int_rowsB , int* int_columnsB ) {

	*int_rowsA = 2 ;
	*int_columnsA = 3 ;
	*int_rowsB = 3 ;
	*int_columnsB = 4 ;

}

int** function_matrixCallocation ( const int* int_rows , const int* int_columns ) {

	int** intMatrix_return = (int**) calloc ( *int_rows,sizeof(int*) ) ;

	for ( int intCounter_i=0 ; intCounter_i < *int_rows ; intCounter_i++ )
		*(intMatrix_return+intCounter_i) = (int*) calloc ( *int_columns,sizeof(int) ) ;

return intMatrix_return ;
}

void function_randomizeMatrix ( int** intMatrix , const int* int_rows , const int* int_columns ) {

	for ( int i = 0 ; i < *int_rows ; i++ )
		for ( int j = 0 ; j < *int_columns ; j++ )
			*(*(intMatrix+i)+j) = rand() % 10 + 1 ;

}

void function_dotProduct ( const int* size_rowsA , const int* size_columnsA , const int** intMatrix_a , const int* size_columnsB , const int** intMatrix_b , int** intMatrix_c ) {

	for ( int intCounter_i=0 ; intCounter_i < *size_rowsA ; intCounter_i++ )
		for ( int intCounter_j=0 ; intCounter_j < *size_columnsB ; intCounter_j++ )
			for ( int intCounter_k=0 ; intCounter_k < *size_columnsA ; intCounter_k++ )
				*(*(intMatrix_c+intCounter_i)+intCounter_j) +=
				(*(*(intMatrix_a+intCounter_i)+intCounter_k)) * (*(*(intMatrix_b+intCounter_k)+intCounter_j)) ;

}

void function_printMatrix ( const int* size_rows , const int* size_columns , const int** intMatrix ) {

	for ( int intCounter_i=0 ; intCounter_i < *size_rows ; intCounter_i++ ) {
		printf ( "| " ) ;
		for ( int intCounter_j=0 ; intCounter_j < *size_columns ; intCounter_j++ ) {
			printf ( "%d "  ,  *(*(intMatrix+intCounter_i)+intCounter_j) ) ;
		}
		printf ( "|\n" ) ;
	}

}

void function_matrixDeallocation ( const int* size_rows , int** intMatrix ) {

	for ( int intCounter_i=0 ; intCounter_i < *size_rows ; intCounter_i++ )
		free ( *(intMatrix+intCounter_i) ) ;

	free ( intMatrix ) ;

}




// TO REST -->      
