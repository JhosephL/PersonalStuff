
// PREPROCESSOR DIRECTIVES.
#include <iostream> // For 'cout' and 'endl' functions.
#include <fstream> // For 'ifstream' and 'ofstream' classes.

using namespace std ;



// GLOBAL STATEMENTS.


// PROTOTYPES.
//// Functions for file handling.
bool function_fileExists ( const string string_fileName ) ;
void function_createFile ( const string string_fileName ) ;
void function_writeFile ( const string string_fileName , const string string_fileContent ) ;
void function_readFile ( const string string_fileName ) ;
void function_appendFile ( const string string_fileName , const string string_fileContent ) ;



/* MAIN FUNCTION DEFINITION */

int main ( void ) {

	cout << "\n\n\n" << endl ;


	const string string_fileName = "note.txt" ;
	const string string_fileContent = "one\ntwo\nthree\0" ;

	function_createFile ( string_fileName ) ;

	function_writeFile ( string_fileName , string_fileContent ) ;

	function_readFile ( string_fileName ) ;

	string string_newFileContent = "\nfour\nfive\0" ;

	function_appendFile ( string_fileName , string_newFileContent ) ;

	function_readFile ( string_fileName ) ;


	cout << "\n\n\n\tALL RIGHT!\n\n\n\n" << endl ;

return 0;
}


// OTHER FUNCTION DEFINITIONS.

bool function_fileExists ( const string string_fileName ) {

	fstream file ( string_fileName ) ;

	bool boolean_fileExists = file.is_open() ;

	file.close() ;

return ( boolean_fileExists ) ;
}


void function_createFile ( const string string_fileName ) {

	const bool boolean_fileExists = function_fileExists ( string_fileName ) ;

	if ( ! boolean_fileExists ) {

		fstream file ( string_fileName , ios::out ) ;

		file.close() ;

		cout << "The file '" << string_fileName << "' has been successfully created." << endl ;

	} else {

		cout << "The file '" << string_fileName << "' already exist." << endl ;

	}

}


void function_writeFile ( const string string_fileName , const string string_fileContent ) {

	fstream file ( string_fileName , ios::out ) ;

	if ( file.good() ) {

		file << string_fileContent << flush ;

		file.close() ;

		cout << "The file '" << string_fileName << "' has been successfully written." << endl ;

	} else {

		cout << "Error at writing file." << endl ;

	}

}


void function_readFile ( const string string_fileName ) {

	fstream file ( string_fileName , ios::in ) ;

	string string_fileContent = "" ;

	if ( file.good() ) {

		string string_aux = "" ;
		
		while ( getline (file,string_aux) ) {
	
			string_fileContent += string_aux + "\n" ;
	
		}

		file.close() ;

		cout << "The file '" << string_fileName << "' has been successfully read." << endl ;

		cout << "\n\t- FILE CONTENT -\n" ;
		cout << string_fileContent << endl ;
	
	} else {

		cout << "Error at reading file." << endl ;
	
	}

}


void function_appendFile ( const string string_fileName , const string string_newFileContent ) {

	fstream file ( string_fileName , ios::app ) ;

	if ( file.good() ) {

		file << string_newFileContent << flush ;

		file.close() ;
	
	} else {

		cout << "Error at appending new content to file." << endl ;
	
	}

}




// To rest --->        