
// PACKAGE


// IMPORTS
import java.io.File
import java.io.IOException



/* MAIN FUNCTION DEFINITION */

fun main ( ) {


	val fileName = "text.txt"
	var fileContent = "one\ntwo\nthree\n"

	function_createFile ( fileName )

	function_writeFile ( fileName , fileContent )

	function_readFile ( fileName )

    println ( function() )


}


/* OTHER FUNCTIONS */

fun function_createFile ( fileName:String ) {

	val file = File ( fileName )

	try {

		if ( ! file.exists() ) {
	
			file.createNewFile()
			println ( "The file '${fileName}' has been successfully created." )
			
		} else {
			
			println ( "The file '${fileName}' already exists." )
	
		}
	
	} catch ( fileException:IOException ) {

		println ( "An error has occurred at file creating: ${fileException.message}." )
	
	}

}


fun function_writeFile ( fileName:String , fileContent:String ) {

	val file = File ( fileName )

	try {

		if ( file.exists() ) {
	
			file.writeText ( fileContent )
			println ( "The file '${fileName}' has been successfully written." )
	
		} else {
	
			println ( "The file '${fileName}' does not exist for being written." )
	
		}
		
	} catch ( fileException:IOException ) {

		println ( "An error has occurred at file writing: ${fileException.message}." )
	
	}

}


fun function_readFile ( fileName:String ) {

	val file = File ( fileName )

	try {
	
		if ( file.exists() ) {
	
			val fileContent = file.readText()
			println ( "\n\t- FILE CONTENT -\n" )
			print ( fileContent )
	
		} else {
	
			println ( "The file '${fileName}' does not exist for being read." )
	
		}
	
	} catch ( fileException:IOException ) {

		println ( "An error has occurred at file reading: ${fileException.message}." )
	
	}


}


fun function ( ) : String {

    return "\n\n\t// CODE\n\n"

}




// To rest --->-->->    