
// Preprocessor directives
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



// Global statements


// Prototypes


int main ( ) {

	puts ("\n\n\n") ;
	

	// WRITE
	FILE* file_pointer_W = fopen("note.txt","w") ;
	if ( file_pointer_W == NULL ) { puts ("\tERROR!"); } else { puts ("\tNICE!"); }

	int int_result = fputs ("one\ntwo\nthree\0",file_pointer_W) ;
	printf ("\n\t%d\n\n",int_result) ;

	fclose(file_pointer_W) ;

	// READ
	FILE* file_pointer_R = fopen("note.txt","r") ;
	if ( file_pointer_R == NULL ) { puts ("\tERROR!"); } else { puts ("\tNICE!"); }

	char** char_matrix = calloc(1,sizeof(char*)) ;
	// printf ("\n\n%hx --- %hx --- %d\n",&char_matrix,char_matrix,*char_matrix) ;

	char* temp_pointer ;
	// printf ("%hx --- %d\n\n",&temp_pointer,temp_pointer) ;

	int lines_number = 0 ;
	while ( !feof(file_pointer_R) ) {

		temp_pointer = (char*) calloc(100,1) ;
		// printf ("1). %hx --- %hx --- %hx\n",&temp_pointer,temp_pointer,*temp_pointer) ;

		fgets(temp_pointer,100,file_pointer_R) ;
		// printf ("2). %hx --- %hx --- %s\n",&temp_pointer,temp_pointer,temp_pointer) ;

		char_matrix[lines_number] = (char*) calloc(strlen(temp_pointer),1) ;
		// printf ("3). %hx --- %hx --- %c\n",&char_matrix,char_matrix,*char_matrix) ;

		strcpy(char_matrix[lines_number],temp_pointer) ;
		// printf ("4). %hx --- %hx --- %s\n",&char_matrix,char_matrix,char_matrix[lines_number]) ;
 
		char_matrix = realloc(char_matrix,lines_number+2) ;

	lines_number++;
	} free(temp_pointer) ;

	puts("");
	for ( int counter=0 ; counter < lines_number ; counter++ ) {
		printf ("%s",char_matrix[counter]) ;
	}
	puts("");

	// free(char_matrix) ;

	fclose(file_pointer_R) ;


	puts ("\n\n\tALL RIGHT!\n\n\n\n") ;

}



// To rest -->		