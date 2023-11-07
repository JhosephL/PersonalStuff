
// Preprocessor directives
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



// Global statements


// Prototypes


int main ( ) {

	puts ("\n\n\n") ;
	

	puts ("\t- FLAGS -\n") ;
	// WRITE
	FILE* file_pointer_W = fopen("note.txt","w") ;
	if ( file_pointer_W == NULL ) { puts ("ERROR!"); } else { puts ("NICE WRITING!"); }
	// Establish content to write.
	int int_result = fputs ("one\ntwo\nthree\0",file_pointer_W) ;
	printf ("Result of writing in file: %d\n",int_result) ;
	// Close writing pointer.
	fclose(file_pointer_W) ;

	// READ
	FILE* file_pointer_R = fopen("note.txt","r") ;
	if ( file_pointer_R == NULL ) { puts ("ERROR!"); } else { puts ("NICE READING!"); }

	// Assign memory to a matrix of characters for saving file's content.
	char** char_matrix = calloc(1,sizeof(char*)) ;

	// Declare a pointer for temporaly save only one file's line.
	char* temp_pointer ;

	// Initialize an integer for saving the file's lines number.
	int lines_number = 0 ;

	// Read the file while the reading pointer does not find EOF.
	while ( !feof(file_pointer_R) ) {

		// Assign memory to the temporal array or pointer.
		temp_pointer = (char*) calloc(100,sizeof(char)) ;

		// Save in the temporal array, the file's content where the reading pointer is pointing to.
		fgets(temp_pointer,100,file_pointer_R) ;

		// Assign memory to the last row of the matrix, according to temp's length.
		char_matrix[lines_number] = (char*) calloc(strlen(temp_pointer),sizeof(char)) ;

		// Save in the last row of the matrix, the content of the temporal array.
		strcpy(char_matrix[lines_number],temp_pointer) ;
		
		// Release memory of the temporal array.
		free(temp_pointer) ;
		temp_pointer = NULL ;
		
		// Update the number of lines.
		lines_number++ ;

		// Re-Assing memory to the matrix for the whole matrix.
		char_matrix = realloc(char_matrix,(lines_number+1)*sizeof(char*)) ;

	}

	// Adding to the last line of the matrix a null flag.
	char_matrix[lines_number] = NULL ;

	// Close reading pointer.
	fclose(file_pointer_R) ;

	// Printing the matrix's content.
	puts("\n\t- CONTENT -\n");
	for ( int counter=0 ; counter < lines_number ; counter++ ) {
		printf ("%s",char_matrix[counter]) ;
		free(char_matrix[counter]) ;
	}
	puts("");

	// Releasing memory of matrix.
	free(char_matrix) ;
	char_matrix = NULL ;


	puts ("\n\n\tALL RIGHT!\n\n\n\n") ;

}




// To rest -->		
