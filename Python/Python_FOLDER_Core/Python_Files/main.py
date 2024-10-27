
# IMPORTS



# MAIN FUNCTION DECLARATION
def main ( ) :

    print ("\n\n\n\n")


    function_createFile ( "note.txt" )
    function_writeFile ( "note.txt" , "one\ntwo\nthree" )
    function_readFile ( "note.txt" )

    function_01()


    print ("\n\n\n\n")


# OTHER FUNCTIONS
def function_createFile ( string_fileName ) :

    print ( "FILE CREATION\n" )

    try :

        inStreamFile_createFile = open ( string_fileName , "x" )
        inStreamFile_createFile.close()
        print ( f"\tThe file '{string_fileName}' was successfully created." )

    except FileExistsError :

        print ( f"\tThe file '{string_fileName}' already exists." )

    except Exception as e :

        print ( f"\tAn error occurred while creating the file: {e}." )

    print ( '\n' )


def function_writeFile ( string_fileName , string_fileContent ) :

    print ( "FILE WRITING\n" )

    try :

        outStreamFile_writeFile = open ( string_fileName , "w" )
        outStreamFile_writeFile.write ( string_fileContent )
        outStreamFile_writeFile.close()
        print ( f"\tThe file '{string_fileName}' was successfully written." )

    except FileNotFoundError :

        print ( f"\tThe file '{string_fileName}' does not exist." )

    except Exception as e :

        print ( f"\tAn error occurred while writing the file: {e}." )

    print ( '\n' )


def function_readFile ( string_fileName ) :

    print ( "FILE READ\n" )

    try :

        inStreamFile_readFile = open ( string_fileName , "r" )
        string_fileContent = inStreamFile_readFile.read()
        print ( string_fileContent )
        inStreamFile_readFile.close()
        print ( f"\n\tThe file '{string_fileName}' was successfully read." )

    except FileNotFoundError :

        print ( f"\tThe file '{string_fileName}' does not exist." )

    except Exception as e :

        print ( f"\tAn error occurred while reading the file: {e}." )

    print ( '\n' )


def function_01 ( ) :

    print ("# CODE")



# MAIN FUNCTION IMPLEMENTATION
if __name__ == "__main__" :
    main()




# To rest -->       
