
// Preprocessor directives
#include <stdio.h>      // For working with computer resources like keyboard and console; and, for using FILE functions.
#include <stdlib.h>     // For calling ASCII to numbers convertion; for using 'qsort(...)'; and, for using Memory Management Functions.
#include <string.h>     // For using functions related with string handling.



// Global statements


// Prototypes
void string_modules() ;
void string_library() ;
void qsort_implementation() ; int qsort_implementation_aux(const void* num_01,const void* num_02) ;
void malloc_implementation() ; void calloc_implementation() ; void realloc_implementation() ; void free_implementation() ;


int main ( ) {




    printf ("\n\n\n\n\nc c c c c c c c c c c c c c c c c c c c c c c c c\tTHIS IS SOLOLEARN'S C PROGRAMMING LANGUAGE COURSE\tc c c c c c c c c c c c c c c c c c c c c c c c c\n\n\n\n\n") ;




    printf ("  - - - - -  >\tESCAPE CHARACTERS") ;
    printf ("\n\n\n") ;

    printf (
    
        "\t\t -------------- --------------------------\t\t\n"
        "\t\t|   CHARACTER  |       FUNCTIONALITY      |\t\t\n" 
        "\t\t -------------- -------------------------- \t\t\n"
        "\t\t|      \\a      |    Alarm or beep.        |\n"
        "\t\t|      \\b      |    Backspace.            |\n"
        "\t\t|      \\f      |    Form feed.            |\n"
        "\t\t|      \\n      |    New line.             |\n"
        "\t\t|      \\r      |    Carriage return.      |\n"
        "\t\t|      \\t      |    Horizontal tab.       |\n"
        "\t\t|      \\v      |    Vertical tab.         |\n"
        "\t\t|      \\\\      |    Backslash.            |\n"
        "\t\t|      \\'      |    Single quote.         |\n"
        "\t\t|      \\\"      |    Double quote.         |\n"
        "\t\t|      \\?      |    Question mark.        |\n"
        "\t\t|      \\ooo    |    Octal number.         |\n"
        "\t\t|      \\xhh    |    Hexadecimal number.   |\n"
        "\t\t|      \\0      |    Null.                 |\n"
        "\t\t -------------- -------------------------- \t\t"
        
    ) ;


    printf ("\n\n\n\n") ;


    printf ("  - - - - -  >\tDATA TYPES") ; // Use 'sizeof(<data type>)' in order to know the size of a data type variable.
    printf ("\n\n\n") ;

    printf (
    
        "\t\t ------------- ------------------ ------------------------------------------------- \t\t\n"
        "\t\t|     TYPE    |   STORAGE SIZE   |                   VALUE RANGE                   |\t\t\n"
        "\t\t ------------- ------------------ ------------------------------------------------- \t\t\n"
        "\t\t|    char     |      1 byte      |            -128 to 127 or 0 to 255              |\n"
        "\t\t|    short    |      2 bytes     |                -32,768 to 32,767                |\n"
        "\t\t|    int      |   2 or 4 bytes   |        -2,147,483,648 to 2,147,483,647          |\n"
        "\t\t|    long     |      8 bytes     |   -9223372036854775808 to 9223372036854775807   |\n"
        "\t\t|    float    |      4 bytes     |               1.2E-38 to 3.4E+38                |\n"    // 6 decimal places
        "\t\t|    double   |      8 bytes     |              2.3E-308 to 1.7E+308               |\n"    // 15 decimal places
        "\t\t ------------- ------------------ ------------------------------------------------- \t\t"
        
    ) ; // https://www.tutorialspoint.com/cprogramming/c_data_types.htm


    printf ("\n\n\n\n") ;


    printf ("  - - - - -  >\tABOUT VARIABLES") ;
    printf ("\n\n\n") ;

    printf ("\t\t* The C programming language is case-sensitive, so my_Variable and my_variable are two different identifiers. *\n\n") ;

    printf (

        "\t\tIn order to initialize a constant variable:\n\n"  // Outside functions.
        "\t\t\tconst <constant's data type> <CONSTANT'S NAME> = <contant's value> ;\n\n"
    
    );  // const double PI = 3.1415926535 ;

    printf (

        "\t\tIn order to initialize a defined global object:\n\n"  // Outside functions.
        "\t\t\t#define <GLOBAL'S NAME> <global's value>\n\n" // Without semicolon.
    
    );  // #define PI 3.1415926535 ;

    printf (

        "\t\tIn order to initialize a undefined global variable:\n\n"  // Outside functions.
        "\t\t\t<data type> <global variable's name> = <global variable's value> ;\n\n"
    
    );  // float global_PI = 3.1415926535 ;

    printf (

        "\t\tIn order to initialize a undefined global variable, also accessible from other files:\n\n"  // Outside functions.
        "\t\t\textern <data type> <global variable's name> = <global variable's value> ;\n\n"

    );

    printf (

        "\t\tIn order to initialize a static variable:\n\n"  // In or out statements.
        "\t\t\tstatic <data type> <static variable's name> = <static variable's value> ;"
    
    );  // static int counter = 0 ;


    printf ("\n\n\n\n") ;


    printf ("  - - - - -  >\tFORMATTING STRINGS") ;
    printf ("\n\n\n") ;

    printf (
    
        "\t\t -------------- ------------------------\t\t\n"
        "\t\t|   CHARACTER  |       DATA TYPE        |\t\t\n"
        "\t\t -------------- ------------------------ \t\t\n"
        "\t\t|      %%c      |    Char                |\n"
        "\t\t|      %%d      |    Decimal.            |\n"  // or Integer.
        "\t\t|      %%u      |    Unsigned Decimal.   |\n"
        "\t\t|      %%f      |    Float.              |\n"  // '%e', '%E', '%g', '%G' also work for float data type.
        "\t\t|      %%l      |    Long.               |\n"
        "\t\t|      %%lf     |    Double.             |\n"
        "\t\t|      %%s      |    String.             |\n"
        "\t\t|      %%p      |    Pointer.            |\n"
        "\t\t|      %%o      |    Octal.              |\n"  // representation
        "\t\t|      %%x      |    Hexadecimal.        |\n"  // '%X' also works for hexadecimal representation.
        "\t\t|      %%n      |    Prints nothing.     |\n"
        "\t\t -------------- ------------------------ \t\t"
        
    ) ;

    printf ("\n\n\t\t•  An asterisk will skip the input field.") ; // %*<character>
    printf ("\n\n\t\t•  A number is used to separate field width.") ; // %<# of width><character>
    printf ("\n\n\t\t•  A period is used to separate field width and precision (for decimal part).") ; // %<# of width>.<# of precision><character>

    /*
        https://www.tutorialspoint.com/format-specifiers-in-c
        https://www.geeksforgeeks.org/format-specifiers-in-c/
    */


    printf ("\n\n\n\n") ;


    printf ("  - - - - -  >\tINPUTS") ;
    printf ("\n\n\n") ;

    printf ("\t\t•  To store the next single character.\n\t\t... = getchar()\n\n") ;
    printf ("\t\t•  To store string.\n\t\tgets(<char array variable>)\n\n") ;  // STRONGLY NO RECOMMENDED TO BE USED.
    printf ("\t\t•  To store string by specifying limit of characters.\n\t\tfgets (<char array variable>,<# of characters>,stdin)\n\n") ;  // 'stdin' to specify keyboard input.
    printf ("\t\t•  To store next matching specified format.\n\t\tscanf(<string formatting>,<char array variable>)\n\n") ;  // 'scanf()' function stops reading as soon as it encounters a space.
    printf ("\t\t•  To store next matching specified format.\n\t\tscanf(<string formatting>,&<other data type variables>)\n\n") ;  // <string formatting> for reading space characters: "%[^\n]s".


    printf ("\n\n\n\n") ;


    printf ("  - - - - -  >\tOUTPUTS") ;
    printf ("\n\n\n") ;

    printf ("\t\t•  To display a single character.\n\t\tputchar(<variable>)\n\n") ;
    printf ("\t\t•  To display a string.\n\t\tputs(<char array>)\n\n") ;
    printf ("\t\t•  To display a string allocated by a pointer.\n\t\tfputs(<variable>,stdout)") ;  // 'stdout' to specify keyboard output.
    printf ("\t\t•  To display a string with format.\n\t\tprintf(<string formatting>,<variables>)") ;


    printf ("\n\n\n\n") ;


    printf ("  - - - - -  >\tCASTING") ;
    printf ("\n\n\n") ;

    printf ("\t\t... = (<destination data type>) (<operation>) ;") ;


    printf ("\n\n\n\n") ;


    printf ("  - - - - -  >\tSOMETHING ABOUT OPERATORS") ;
    printf ("\n\n\n") ;

    printf ("\t\t•  Prefix increment.\n\t\t++<variable>\n\n") ;
    printf ("\t\t•  Postfix increment.\n\t\t<variable>++\n\n") ;
    printf ("\t\t•  Prefix decrement.\n\t\t--<variable>\n\n") ;
    printf ("\t\t•  Postfix decrement.\n\t\t<variable>--") ;


    printf ("\n\n\n\n") ;


    printf ("  - - - - -  >\tSINGLE LINE CONDITION") ;
    printf ("\n\n\n") ;

    printf ("\t\t... = (<condition>) ? <true case value> : <false case value> ;") ;


    printf ("\n\n\n\n") ;


    printf ("  - - - - -  >\tSWITCH STATEMENT") ;
    printf ("\n\n\n") ;

    printf (
    
        "\t\tswitch (<evaluated variable>) {\n\n"
        "\t\t\tcase <variable values> :\n"
        "\t\t\t\t<statements>\n"
        "\t\t\t\tbreak;\n"
        "\t\t\tdefault :\n"
        "\t\t\t\t<statements>\n"
        "\n\t\t}"

    ) ;


    printf ("\n\n\n\n") ;


    printf ("  - - - - -  >\tDO WHILE STATEMENT") ;
    printf ("\n\n\n") ;

    printf (
    
        "\t\tdo {\n\n"
        "\t\t\t<statements>\n"
        "\n\t\t} while ( <condition> ) ;"

    ) ;


    printf ("\n\n\n\t\tE.G.:") ;

    int integer_eg_01 = 0 ;  // Declaring an integer data type.
    printf ("\n\n\t\t\tThe value which 'integer_eg_01' is initialized with is: %d",integer_eg_01) ; 

    printf ("\n\n\t\t\tWhereas 'DO-WHILE' sentence is opering:") ;
    do {
        printf (" %d",++integer_eg_01) ;
    } while (integer_eg_01<=5) ;
    
    printf ("\n\n\t\t\tNow. the value of 'integer_eg_01' is: %d",integer_eg_01) ;


    printf ("\n\n\n\n") ;


    printf ("  - - - - -  >\tCONTINUE STATEMENT") ;
    printf ("\n\n\n") ;

    printf ("\t\t\"When you want to remain in the loop, but skip ahead to the next iteration, you use the continue statement.\"\n\n\t\t\tcontinue ;") ;


    printf ("\n\n\n\n") ;


    printf ("  - - - - -  >\tFUNCTION STATEMENT") ;
    printf ("\n\n\n") ;

    printf (

        "\t\t- Prototype, signature or declaration -\n\n"  // Before 'main()' function.

        "\t\t\t<data type> <function name> ( <prototype's parameters> ) ;\n\n"  // These parameters are also called formal parameters.

        // The prototype's parameters can be declared with whatever name, but their data type has to be coherent with the function's definition parameters.

    ) ;
    
    printf (

        "\t\t- Implementation, invocation or calling -\n\n"  // Inside a function.

        "\t\t\t<data type> <function name> ( <arguments> ) ;\n\n"  // These arguments are also called actual parameters.

        // The functions implementation can be assigned to a variable.

    ) ;

    printf (

        "\t\t- Definition -\n\n"  // Like the same 'main()' function; separetly from others.

        "\t\t\t<data type> <function name> ( <parameters> ) {\n"
        "\t\t\t\t<statements>\n"  // include possible return sentences.
        "\t\t\t}"

    ) ;

    // If function's definition is done before 'main()' function, no prototype is needed.
    // A VOID data type function can contain a 'return' statement, however, this cannot return anything.


    printf ("\n\n\n\n") ;


    printf ("  - - - - -  >\tARRAYS") ;
    printf ("\n\n\n") ;


    int array_eg_01[5] ;  // Declaring a 5-length integer-data-type array.

    printf ("\t\tThe content of 'array_eg_01[5]' is:") ;
    for ( int counter_01=0 ; counter_01 < (sizeof(array_eg_01)/sizeof(int)) ; counter_01++ ) {
        printf (" %d",array_eg_01[counter_01]) ;
    }
    printf ("\n\t\tThese elements are called \"garbage\", because they are not initialized nor assigned values.") ;
    // S.L.: "Trying to access a member that isn't occupying the memory location gives unexpected results".


    printf ("\n\n") ;


    int array_eg_02[5] = {1,2,3,4,5} ;  // Declaring another 5-length integer-data-type array.

    printf ("\t\tThe content of 'array_eg_02[5]' is:") ;
    for ( int counter_01=0 ; counter_01 < (sizeof(array_eg_01)/sizeof(int)) ; counter_01++ ) {
        printf (" %d",array_eg_02[counter_01]) ;
    }
    printf ("\n\t\tThese elements are initialized values.") ;


    printf ("\n\n") ;


    int array_eg_03[5] = {1,2} ;  // Declaring another 5-length integer-data-type array.

    printf ("\t\tThe content of 'array_eg_03[5]' is:") ;
    for ( int counter_01=0 ; counter_01 < (sizeof(array_eg_01)/sizeof(int)) ; counter_01++ ) {
        printf (" %d",array_eg_03[counter_01]) ;
    }
    printf ("\n\t\tThese elements are partially initialized values, because some of them are \"garbage\" values.") ;


    printf ("\n\n\n\n") ;


    printf ("  - - - - -  >\tMATRIXES") ;
    printf ("\n\n\n") ;

    int matrix_eg_01[2][3] ;  // Declaring a 2-by-3 integer-data-type matrix.

    printf ("\t\tThe content of 'matrix_eg_01[2][3]' is:\n\n") ;
    for ( int row=0 ; row < (sizeof(matrix_eg_01)/sizeof(matrix_eg_01[0])) ; row++ ) {

        printf ("\t\t\t") ;
        for ( int column=0 ; column < (sizeof(matrix_eg_01[row])/sizeof(int)) ; column++ ) {

            printf ("%d\t\t",matrix_eg_01[row][column]) ;

        }
        printf ("\n") ;

    }


    printf ("\n") ;


    int matrix_eg_02[2][3] = { {1,2,3} , {4,5,6} } ;  // Declaring another 2-by-3 integer-data-type matrix.

    printf ("\t\tThe content of 'matrix_eg_02[2][3]' is:\n\n") ;
    for ( int row=0 ; row < (sizeof(matrix_eg_02)/sizeof(matrix_eg_02[0])) ; row++ ) {

        printf ("\t\t\t") ;
        for ( int column=0 ; column < (sizeof(matrix_eg_02[row])/sizeof(int)) ; column++ ) {

            printf ("%d\t",matrix_eg_02[row][column]) ;

        }
        printf ("\n") ;

    }


    printf ("\n") ;


    int matrix_eg_03[2][3] = { {1,2} , {4} } ;  // Declaring another 2-by-3 integer-data-type matrix.

    printf ("\t\tThe content of 'matrix_eg_03[2][3]' is:\n\n") ;
    for ( int row=0 ; row < (sizeof(matrix_eg_03)/sizeof(matrix_eg_03[0])) ; row++ ) {

        printf ("\t\t\t") ;
        for ( int column=0 ; column < (sizeof(matrix_eg_03[row])/sizeof(int)) ; column++ ) {

            printf ("%d\t",matrix_eg_03[row][column]) ;

        }
        printf ("\n") ;

    }


    printf ("\n\n\n\n") ;


    printf ("  - - - - -  >\tWORKING WITH STRINGS") ;
    printf ("\n\n\n") ;

    string_modules();  // Function below.


    printf ("\n\n\n\n") ;


    printf ("  - - - - -  >\tMORE ABOUT STRING LIBRARY") ;
    printf ("\n\n\n") ;

    string_library();  // Function below.


    printf ("\n\n\n\n") ;


    printf ("  - - - - -  >\tFROM STRING TO NUMBER") ;
    printf ("\n\n\n") ;

    printf ("\t\tConverting \"%s\" string to an integer data type:\t%d\n\n","0123",atoi("0123")) ;
    printf ("\t\tConverting \"%s\" string to a float data type:\t\t%0.1f\n\n","0123",atof("0123")) ;
    printf ("\t\tConverting \"%s\" string to a long integer data type:\t%ld","0123",atol("0123")) ;


    printf ("\n\n\n\n") ;


    printf ("  - - - - -  >\tPOINTERS") ;
    printf ("\n\n\n") ;

    printf (

        "\t\t- Declaration and definition -\n\n"  // (In C language programming) Both happend at the same time.

        "\t\t\t<data type>* <pointer name> ;\n\n"

        // Pointers can be declared with whatever data type, but it has to be coherent with assignment's return.

    ) ;
    
    printf (

        "\t\t- Initialization and assignment -\n\n"

        "\t\t\t... = <variable> ;\n\n"  // Direction(&), indirection (*), or "nothing" are needed before '<variable>' in order to make the correct variable assignment.
        
        // 'void' pointer data type can be initialized or assigned to whatever other data type. However, it must be casted through the appropriate pointer data type.

    ) ;

    printf (

        "\t\t- Implementation, invocation or calling -\n\n"

        "\t\t\t&<pointer's name>\n"  // In order to get direction, or the address of the variable which the pointer is pointing to.
        "\t\t\t*<pointer's name>\n"  // In order to get indirection, or the content of the variable which the pointer is pointing to.

        "\n\t\t- ... if a void pointer is called ... -\n\n"

        "\t\t\t( (<corresponding data type>*) <pointer's name> )"

        // Direction(&), indirection (*), or "nothing" are needed before pointer calling in order to make it correct.

    ) ;

    // ACCORDING TO S.L.: "You cannot perform pointer arithmetic with void pointers".


    printf ("\n\n\n\n") ;


    printf ("  - - - - -  >\tFUNCTION POINTERS") ;
    printf ("\n\n\n") ;

    printf (

        "\t\t- Declaration, definition and assignment -\n\n"

        "\t\t\t<function's return data type> (*<pointer's name>) (function's parameters) = &<name of the function to point to> ;\n\n"  // This line can break in two lines, because of the assignment.

        // It is optional to put '&' symbol. Because, every function acts a pointer; a pointer can be assigned to another pointer, or to an address.

    ) ;

    printf (

        "\t\t- Implementation, invocation or calling -\n\n"

        "\t\t\t<pointer's name> ( <function's arguments> ) ;"
        
        // The implementation can be assigned to a variable.

    ) ;


    printf ("\n\n\n\n") ;


    printf ("  - - - - -  >\tARRAY OF FUNCTION POINTERS") ;
    printf ("\n\n\n") ;

    printf (

        "\t\t- Declaration, definition and assignment -\n\n"

        "\t\t\t<function's return data type> (*<pointer's name>[<length's array>]) (function's parameters) = &<name of the function to point to> ;\n\n"  // This line can break in two lines, because of the assignment.

        // It is optional to put '&' symbol. Because, every function acts a pointer; a pointer can be assigned to another pointer, or to an address.

    ) ;

    printf (

        "\t\t- Implementation, invocation or calling -\n\n"

        "\t\t\t<pointer's name>[<index>] ( <function's arguments> ) ;"
        
        // The implementation can be assigned to a variable.

    ) ;


    printf ("\n\n\n\n") ;


    printf ("  - - - - -  >\tQSORT FUNCTION") ;
    printf ("\n\n\n") ;

    qsort_implementation();  // Function below.


    printf ("\n\n\n\n") ;


    printf ("  - - - - -  >\tSTRUCTURES") ;  // S.L.: "A structure is also called a composite or aggregate data type. Some languages refer to structures as records".
    printf ("\n\n\n") ;

    printf (

        "\t\t- Declaration, definition and initialization -\n\n"
        
        "\t\t\tstruct <structure's name> {\n\n"
        "\t\t\t\t<members or fields> ;\n\n"
        "\t\t\t} ;\n\n"
        
    ) ;

    printf (

        "\t\t- Declaration, definition, initialization and instantiation -\n\n"  // This statement also works for creating other objects.
        
        "\t\t\tstruct <structure's name> {\n\n"
        "\t\t\t\t<members or fields> ;\n\n"
        "\t\t\t} <object's name> ;\n\n"
        
    ) ;

    printf (

        "\t\t- Instantiation -\n\n"
        
        "\t\t\tstruct <structure's name> <object's name> ;\n\n"
        
    ) ;

    printf (
        
        "\t\t- General assignment -\n\n"
        
        "\t\t\t<object's name> = (struct <structure's name>){ <field's values> } ;\n\n"
        
    ) ;

    printf (
        
        "\t\t- Partial assignment -\n\n"
        
        "\t\t\t<object's name>.<field's name> = <field's value> ;\n\n"
        
    ) ;

    printf (
        
        "\t\t- Instantiation and general assignment -\n\n"
        
        "\t\t\tstruct <structure's name> <object's name> = { <field's values> } ;\n\n"
        
    ) ;

    printf (
        
        "\t\t- Optional allocation of values -\n\n"
        
        "\t\t\t... { .<field's name>=<field's value> } ;\n\n"
        
    ) ;

    /*
        1. The order of 'values of the fields' matters.
        2. Fields allocation must be separated with commas.
    */

   printf (
        
        "\t\t- Implementation, invocation or calling -\n\n"
        
        "\t\t\t- To interact between objects -\n\n"
        "\t\t\t\t<object's name>\n\n"
        "\t\t\t- To interact between object's fields -\n\n"
        "\t\t\t\t<object's name>.<field's name>"
        
    ) ;


    printf ("\n\n\n\n") ;


    printf ("  - - - - -  >\tSTRUCTURES WITH 'TYPEDEF' KEYWORD") ;  // Only few changes to read easier code, made by the absence of 'struct' keyword.
    printf ("\n\n\n") ;

    printf (

        "\t\t- Declaration, definition and initialization -\n\n"
        
        "\t\t\ttypedef struct {\n\n"
        "\t\t\t\t<members or fields> ;\n\n"
        "\t\t\t} <structure's name> ;\n\n"
        
    ) ;

    printf (

        "\t\t- Instantiation -\n\n"
        
        "\t\t\t<structure's name> <object's name> ;\n\n"
        
    ) ;

    printf (
        
        "\t\t- General assignment -\n\n"
        
        "\t\t\t<object's name> = (<structure's name>){ <field's values> } ;\n\n"
        
    ) ;

    printf (
        
        "\t\t- Instantiation and general assignment -\n\n"
        
        "\t\t\t<structure's name> <object's name> = { <field's values> } ;\n\n"
        
    ) ;

    // The rest of "missing information" is in the ordinary structure section.


    printf ("\n\n\n\n") ;


    printf ("  - - - - -  >\tNOTES OF STRUCTURES") ;
    printf ("\n\n\n") ;

    printf (

        "\t\t- For nested structures' fields allocation -\n\n"
        
        "\t\t\t... { <primary structure's fields> , {<secondary structure's fields>} , <primary structure's fields> } ;\n\n"
        
    ) ;

    printf (

        "\t\t- For nested structures' fields calling -\n\n"
        
        "\t\t\t<object's name>.<primary object's field>.<secondary object's field>\n\n"  // This line can be used to allocate another value.
        
    ) ;

    printf (

        "\t\t- For object pointers' fields allocation -\n\n"
        
        "\t\t\t<pointer's name> = &<object's name>\n\n"
        
    ) ;

    printf (

        "\t\t- For object pointers' fields calling -\n\n"
        
        "\t\t\t*(<pointer's name>).<field's name of the object which is the pointer is pointing to>\n"  // This line can be used to allocate another value.
        "\t\t\t<pointer's name> -> <field's name of the object which is the pointer is pointing to>"    // This line can be used to allocate another value.
        
    ) ;


    printf ("\n\n\n\n") ;


    printf ("  - - - - -  >\tUNIONS") ;  // S.L.: "Unions are used for memory management. The largest member data type is used to determine the size of the memory to share and then all members use this one location".
    printf ("\n\n\n") ;

    printf (

        "\t\t- Declaration, definition and initialization -\n\n"
        
        "\t\t\tunion <union's name> {\n\n"
        "\t\t\t\t<members or fields> ;\n\n"
        "\t\t\t} ;\n\n"
        
    ) ;

    printf (

        "\t\t- Declaration, definition, initialization and instantiation -\n\n"  // This statement also works for creating other objects.
        
        "\t\t\tunion <union's name> {\n\n"
        "\t\t\t\t<members or fields> ;\n\n"
        "\t\t\t} <object's name> ;\n\n"
        
    ) ;

    printf (

        "\t\t- Instantiation -\n\n"
        
        "\t\t\tunion <union's name> <object's name> ;\n\n"
        
    ) ;

    printf (
        
        "\t\t- Assignment -\n\n"
        
        "\t\t\t<object's name> = (union <union's name>){ <field's value> } ;\n\n"
        "\t\t\t<object's name>.<field's name> = <field's value> ;\n\n"
        
    ) ;

    printf (
        
        "\t\t- Instantiation and assignment -\n\n"
        
        "\t\t\tunion <union's name> <object's name> = { <field's value> } ;\n\n"
        
    ) ;

    printf (
        
        "\t\t- Optional allocation of values -\n\n"
        
        "\t\t\t... { .<field's name>=<field's value> } ;\n\n"
        
    ) ;

   printf (
        
        "\t\t- Implementation, invocation or calling -\n\n"
        
        "\t\t\t- To interact between objects -\n\n"
        "\t\t\t\t<object's name>\n\n"
        "\t\t\t- To interact between object's fields -\n\n"
        "\t\t\t\t<object's name>.<field's name>"
        
    ) ;


    printf ("\n\n\n\n") ;


    printf ("  - - - - -  >\tUNIONS WITH 'TYPEDEF' KEYWORD") ;  // Only few changes to read easier code, made by the absence of 'union' keyword.
    printf ("\n\n\n") ;

    printf (

        "\t\t- Declaration, definition and initialization -\n\n"
        
        "\t\t\ttypedef union {\n\n"
        "\t\t\t\t<members or fields> ;\n\n"
        "\t\t\t} <union's name> ;\n\n"
        
    ) ;

    printf (

        "\t\t- Instantiation -\n\n"
        
        "\t\t\t<union's name> <object's name> ;\n\n"
        
    ) ;

    printf (
        
        "\t\t- Assignment -\n\n"
        
        "\t\t\t<object's name> = (<union's name>){ <field's value> } ;\n\n"
        
    ) ;

    printf (
        
        "\t\t- Instantiation and assignment -\n\n"
        
        "\t\t\t<union's name> <object's name> = { <field's value> } ;\n\n"
        
    ) ;

    // The rest of "missing information" is in the ordinary union section.


    printf ("\n\n\n\n") ;


    printf ("  - - - - -  >\tNOTES OF UNIONS") ;
    printf ("\n\n\n") ;

    printf (

        "\t\t- For nested unions' declaration, definition and initialization -\n\n"
        
        "\t\t\t<primary statement> {\n"
        "\t\t\t\t...\n"
        "\t\t\t\tunion {\n"
        "\t\t\t\t\t<members or fields> ;\n"
        "\t\t\t\t} <union's name> ;\n"
        "\t\t\t\t...\n"
        "\t\t\t} ;\n\n"
        
    ) ;  // Without unions instanstiation.

    printf (

        "\t\t- For nested unions' fields allocation -\n\n"
        
        "\t\t\t... { <primary statement's fields> , .<union's name as field>.<union's field>=<field's value> , <primary statement's fields> } ;\n"
        "\t\t\t... { <primary statement's fields> , .<union's name as field>={.<union's field>=<field's value>} , <primary statement's fields> } ;\n\n"
        
    ) ;

    printf (

        "\t\t- For nested unions' fields calling -\n\n"
        
        "\t\t\t<object's name>.<primary object's field>.<secondary object's field>\n\n"  // This line can be used to allocate another value.
        
    ) ;

    printf (

        "\t\t- For object pointers' fields allocation -\n\n"
        
        "\t\t\t<pointer's name> = &<object's name>\n\n"
        
    ) ;

    printf (

        "\t\t- For object pointers' fields calling -\n\n"
        
        "\t\t\t*(<pointer's name>).<field's name of the object which is the pointer is pointing to>\n"  // This line can be used to allocate another value.
        "\t\t\t<pointer's name> -> <field's name of the object which is the pointer is pointing to>"    // This line can be used to allocate another value.
        
    ) ;

    // NOTE: Structures and unions can nest together.


    printf ("\n\n\n\n") ;


    printf ("  - - - - -  >\tMEMORY MANAGEMENT") ;
    printf ("\n\n\n") ;

    /*
        Stack: memory allocated during Compile Time. Variable size known.
        Heap: memory allocated during Run Time.  Variable size unknown.

        Always check if pointers are NULL.

        S.L.: "A simple two-dimensional array requires (rows*columns)*sizeof(datatype) bytes of memory".
    */
    
    puts("\t\t- MALLOC -\n");
    malloc_implementation();    // Function below.

    printf("\n\n");

    puts("\t\t- CALLOC -\n");
    calloc_implementation();    // Function below.

    printf("\n\n");

    puts("\t\t- REALLOC -\n");
    realloc_implementation();   // Function below.

    printf("\n\n");

    puts("\t\t- FREE -\n");
    free_implementation();      // Function below.


    printf ("\n\n\n\n") ;


    printf ("  - - - - -  >\tFILES") ;
    printf ("\n\n\n") ;

    printf (

        "\t\t1). Create a file pointer.\n\n"
        "\t\t\tFILE* <pointer's name> ;\n\n"

        "\t\t2). Open file with the file pointer.\n\n"
        "\t\t\t<file pointer> = fopen(<file's name and path between \">,<mode bewteen \">) ;\n\n"
        "\t\t\t\t\t- MODES -\n"
        "\t\t\t\tr: reading (file must exist).\n"
        "\t\t\t\tw: writing (file need not exist).\n"
        "\t\t\t\ta: append (file need not exist).\n"
        "\t\t\t\tr+: reading and writing from beginning.\n"
        "\t\t\t\tw+: reading and writing, overwriting file.\n"
        "\t\t\t\ta+: reading and writing, appending to file.\n\n"

        // The last steps can be done in one single line of code.

        "\t\t3). Handle the file's content.\n\n"
        "\t\t\t• Always check whether the file pointer is NULL.\n"
        "\t\t\t• EOF (end of file) is a macro-character that determines where is the final of a file.\n"
        "\t\t\t• 'fgetc()', 'fgets()', and 'fscanf()' are functions to read files.\n"
        "\t\t\t• 'fputc()', 'fputs()', and 'fprintf()' are functions to write files.\n"
        "\t\t\t• 'feof()' returns 0 when the end of the file stream has been reached.\n"
        "\t\t\t• One pointer for each task is needed.\n\n"

        "\t\t4). Close the file.\n\n"
        "\t\t\tfclose(<file pointer's name>) ;"
        // S.L.: "Closing a file when you are done using it is a good programming practice".
    
    ) ;


    printf ("\n\n\n\n") ;


    printf ("  - - - - -  >\tBINARY FILE I/O") ;
    printf ("\n\n\n") ;

    printf (

        "\t\t1). Create a file pointer.\n\n"
        "\t\t\tFILE* <pointer's name> ;\n\n"

        "\t\t2). Open file with the file pointer.\n\n"
        "\t\t\t<file pointer> = fopen(<file's name and path between \">,<mode bewteen \">) ;\n\n"
        "\t\t\t\t\t- MODES -\n"
        "\t\t\t\trb open for reading (file must exist).\n"
        "\t\t\t\twb open for writing (file need not exist).\n"
        "\t\t\t\tab open for append (file need not exist).\n"
        "\t\t\t\trb+ open for reading and writing from beginning.\n"
        "\t\t\t\twb+ open for reading and writing, overwriting file.\n"
        "\t\t\t\tab+ open for reading and writing, appending to file.\n\n"

        // The last steps can be done in one single line of code.

        "\t\t3). Handle the file's content.\n\n"
        "\t\t\t• Always check whether the file pointer is NULL.\n"
        "\t\t\t• 'fread()' function to read files.\n"
        "\t\t\t• 'fwrite()' is a function to write files.\n"
        "\t\t\t• 'feof()' returns 0 when the end of the file stream has been reached.\n"
        "\t\t\t• EOF macro-character is returned if there is an error in closing.\n"
        "\t\t\t• One pointer for each task is needed.\n"
        "\t\t\t• 'ftell()' returns file pointer position in number of bytes from the start of the file.\n"  // Returns a long int.
        "\t\t\t• 'fseek()' moves the file pointer position by \"n\" bytes relative to a contant position.\n\n"
        "\t\t\t\t\t- CONSTANTS -\n"
        "\t\t\t\tSEEK_SET (start of file);\n"
        "\t\t\t\tSEEK_CUR (current position);\n"
        "\t\t\t\tSEEK_END (end of file);\n\n"

        "\t\t4). Close the file.\n\n"
        "\t\t\tfclose(<file pointer's name>) ;"
        // S.L.: "Closing a file when you are done using it is a good programming practice".
    
    ) ;


    printf ("\n\n\n\n") ;


    printf ("  - - - - -  >\tEXCEPTION HANDLING") ;
    printf ("\n\n\n") ;

    printf (

        "\t\t• You can't control user input, but you can check to be sure that the user entered valid input.\n"
        "\t\t• Use the exit(<macros>) statement to gracefully end program execution. You may not be able to control if a file is available for reading, but you don't need to allow the problem to crash your program.\n"
        "\t\t• You can return any value through an exit statement, but 0 for success and -1 for failure are typical. The predefined 'stdlib.h' macros EXIT_SUCCESS and EXIT_FAILURE are also commonly used.\n\n"
    
    ) ;

    printf (

        "\t\t- errno -\n\n"  // integer data type
        "\t\t\t• Requires '#include <errno.h>' in order to be used.\n"  // Without using '#include': extern int errno ;
        "\t\t\t• It is no need to declared; by default, 'errno' can be called and its value is 0.\n"
        "\t\t\t• When using 'errno' you should set it to 0 (each time) before calling a library function.\n"  // errno = 0 ;
        "\t\t\t• Requires 'fprintf (stderr , <string error msg> , errno) ;' in order to be printed on screen.\n"  // Using stderr is a matter of convention and a good programming practice.
        "\t\t\t• Can be set to the defined macro value EDOM when a domain is out of range.\n"  // With 'math.h' library.
        "\t\t\t• Can be set to the defined macro value ERANGE when there is a range error.\n"  // With 'math.h' library.
        // To check error through a conditional statement: if ( errno == <EDOM || ERANGE> ) { ... }
    
    ) ;

    printf (

        "\n\t\t- perror(<string error msg>) -\n\n"  // string.h
        "\t\t\t• It must include a string that will precede the actual error message.\n"  // It shows: "<msg>: <standard error>"
        "\t\t\t• It implicitly obtain the 'errno' value in order to show (in console) the actual error message.\n"
        "\t\t\t• If '<string error msg>' is empty, it just print the standard error.\n"
        "\t\t\t• It does not return anything.\n"
    
    ) ;

    printf (
        "\n\t\t- strerror(<number of error: errno>) -\n\n"  // string.h
        "\t\t\t• It returns the error message corresponding to its parameter.\n"
        /*
            // To print the list of 'strerror(<#>)' string messages ...
            for ( int i=0 ; i < 135 ; i++ ) {
                fprintf ( stderr , "\t\t\t%d: %s\n" , i , strerror(i) ) ;
            }
        */
    ) ;

    printf (

        "\n\t\t- ferror(<pointer's name>) -\n\n"
        "\t\t\t• Returns a nonzero value if there is an error, 0 for no error.\n"
    
    ) ;

    printf (

        "\n\t\t- feof(<pointer's name>) -\n\n"
        "\t\t\t• Returns a nonzero value if the end of stream has been reached, 0 otherwise. 'feof()' also sets EOF.\n"
    
    ) ;

    // The 'fprintf (stderr , <"String error msg"> , stderror(errno)) ;' is the best option.


    printf ("\n\n\n\n") ;


    printf ("  - - - - -  >\tPREPROCESSOR DIRECTIVES") ;
    printf ("\n\n\n") ;

    printf (

        "\t\t• They make substitutions in program source code before compilation.\n"
        "\t\t• Directives pertaining to the compiler are called header files.\n"
        "\t\t• Directives created by user are called user-defined header files.\n"
        "\t\t• They use the number sign, hash or pound sign (#) in order to operate.\n"
        "\t\t• They expect diamont brackets (<>) around the header filename if the file should be searched for in the compiler include paths.\n"
        "\t\t• They expect quotation marks (\"\") around the header filename if the file is searched for in the source code directory.\n"
        "\t\t• It is preferable to use \".h\" for \"C p.l.\", and \".hpp\" for \"C++ p.l.\".\n"
        "\t\t• They DO NOT USE semicolon (;) at the end of each statement.\n\n\n"
    
    ) ;

    printf (

        "\t\t#include\n\t\t- Including header files. -\n\n"

    ) ;

    printf (

        "\t\t#define\n\t\t#undef\n\t\t- Defining and undefining macros. -\n"
        "\t\t- Try to use upper case. -\n"
        "\t\t- It is used to create object-like macros for constants based on values or expressions. -\n"  // object-like macros like variables and functions.
        "\t\t- The '\\' character is used to make and identate a continious statement. -\n"
        "\t\t- It can return whatever kind of datatype. Hence, the casting or output format must be specified. -\n"
        "\t\t- It is called like another normal variable or function. -\n"
        "\t\t\t#define <define statement's name> <define statement's value>\n\n"
        "\t\t\t#define <define statement's name>(<parameters>) (\\\n"
        "\t\t\t\t<statements> \\\n"  // Each value or variable inside parentheses.
        "\t\t\t)\n\n"

    ) ;

    printf (  // Predefined macro definitions.

        "\t\t__DATE__\n\t\t- The current date as a string in the format Mm dd yyyy. -\n"
        "\t\t__TIME__\n\t\t- The current time as a string in the format hh:mm:ss. -\n"
        "\t\t__FILE__\n\t\t- The current filename as a string. -\n"
        "\t\t__LINE__\n\t\t- The current line number as an int value. -\n"
        "\t\t__STDC__\n\t\t- The number 1 as an int value. -\n\n"

    ) ;

    printf (

        "\t\t#ifdef\n\t\t#ifndef\n\t\t#if\n\t\t#else\n\t\t#elif\n\t\t#endif\n"
        // '#ifdef' and '#ifndef' stands for "whether a MACRO is defined".
        "\t\t- Conditional compilation. -\n"
        "\t\t- All conditional statements end with '#endif'. -\n\n"

        "\t\t#pragma\n"
        "\t\t- Implementation and compiler specific. -\n"
        "\t\t- It also can be used for suppressing warnings, and optimizing compilation. -\n\n"
        "\t\t\t#pragma GCC poison <keyword>\n\n"  // In order to output an error when <keyword> appears explicitly in code.
        "\t\t\t#pragma GCC optimize(\"<a defined parameter>\")\n\n"  // Each parameter has a specific function.

        "\t\t#error <string message>\n\t\t#warning <string message>\n"  // The <string message> comes without double quotes ("").
        "\t\t- It causes the compiler (or preprocessor) to output an error or warning message. -"

    ) ;


    printf ("\n\n\n\n") ;


    printf ("  - - - - -  >\tTHE # OPERATOR") ;
    printf ("\n\n\n") ;

    printf (

        "\t\t#define <define statement's name>(<define statement's parameter>) #<define statement's parameter>\n"
        "\t\t- It converts a parameter to a string constant. -\n\n"
        /*
            It just work with explicit values, but not with variables.
            If a variable is passed as argument, the macro will return the name of that variable.
        */

    ) ;

    printf (

        "\t\t#define <define statement's name>(<define statement's parameters>) <define statement's parameters>##<define statement's parameters>\n"
        "\t\t- Double hash or \"token pasting\" operator appends tokens together. -"

    ) ;


    printf ("\n\n\n\n") ;


    printf ("  - - - - -  >\tTRYING  . . .") ;
    printf ("\n\n\n") ;

    printf ("\t\t// CODE") ;
    // printf ("\n\n\n") ;
    // printf ("%20.5s%20s| %d\n\n","QWERTY_asdf","",strlen("QWERTY_asdf")) ;
    // printf ("%20s%-20.5s| %d","","QWERTY_asdf",strlen("QWERTY_asdf")) ;
    // printf ("\n\n\n") ;
    // printf ("\t\t// CODE") ;




    printf ("\n\n\n\n\nc c c c c c c c c c c c c c c c c c c c c c c c c\tTHIS IS SOLOLEARN'S C PROGRAMMING LANGUAGE COURSE\tc c c c c c c c c c c c c c c c c c c c c c c c c\n\n\n\n\n\n") ;




return 0;
}


void string_modules ( ) {

    // A way to declare a string.
    char string_EG_01[] = "Qwerty\0" ;

    // Another way to declare a string.
    char string_EG_02[] = {'A','s','d','f','\0'} ;

    // IT IS ALWAYS BETTER TO PUT '\0' (NULL) CHARACTER AFTER EACH STRING DECLARED.
    
    printf ("\t\tThe content of 'string_EG_01' is: %s\n",string_EG_01) ;
    printf ("\t\tThe content of 'string_EG_02' is: %s\n\n",string_EG_02) ;

    // For the next 'str' functions it is mandatory to '#include <string.h>'.
    printf ("\t\t\tThe result of checking if both string are equal is: %d\n",strcmp(string_EG_01,string_EG_02)) ;
    printf ("\t\t\tThe length of 'string_EG_01' is: %d\n",strlen(string_EG_01)) ;  // It does not count the NULL character.
    printf ("\t\t\tThe result of concatenating 'string_EG_01' with 'string_EG_02' is: %s\n",strcat(string_EG_01,string_EG_02)) ;
    printf ("\t\t\tThe result of copying 'string_EG_02' into 'string_EG_01': %s\n",strcpy(string_EG_01,string_EG_02)) ;
    printf ("\t\t\tThe result of upper-casing 'string_EG_01' is: %s\n",strupr(string_EG_01)) ;
    printf ("\t\t\tThe result of lower-casing 'string_EG_01' is: %s\n",strlwr(string_EG_01)) ;
    printf ("\t\t\tThe result of reversing 'string_EG_01' is: %s\n\n",strrev(string_EG_01)) ;

    printf ("\t\tThe content of 'string_EG_01' is: %s\n",string_EG_01) ;
    printf ("\t\tThe content of 'string_EG_02' is: %s\n",string_EG_02) ;

    
    printf ("\n\n") ;


    int int_EG_01 = 1 ;
    char char_EG_01 = 'a' ;
    float float_EG_01 = 0.1 ;
    double double_EG_01 = 0.01 ;

    char string_EG_03[100] ;

    sprintf (  // The function 'sprintf (<string variable destination>,<string content>,<variables>)' stands for "string print function".

        string_EG_03,

        "\t\tThe content of the last 4 local non-string variables is:\n"
        "\t\t\t'int_EG_01' = %d\n"
        "\t\t\t'char_EG_01' = %c\n"
        "\t\t\t'float_EG_01' = %0.2f\n"
        "\t\t\t'double_EG_01' = %0.2lf\0",

        int_EG_01,char_EG_01,float_EG_01,double_EG_01

    ) ;

    printf ("%s",string_EG_03) ;

    
    printf ("\n\n") ;

    
    int int_EG_02 ;
    char char_EG_02 ;
    float float_EG_02 ;
    double double_EG_02 ;

    char string_EG_04[] = "2,b,0.2,0.02\0" ;
    
    sscanf (  // The function 'sscanf (<string variable source>,<string format>,<target variables>)' stands for "string scan function".

        string_EG_04,

        "%d,%c,%f,%lf",

        &int_EG_02,&char_EG_02,&float_EG_02,&double_EG_02

    ) ;

    printf (
        
        "\t\tThe content of the last 4 local non-string variables is:\n"
        "\t\t\t'int_EG_02' = %d\n"
        "\t\t\t'char_EG_02' = %c\n"
        "\t\t\t'float_EG_02' = %0.2f\n"
        "\t\t\t'double_EG_02' = %0.2lf\0",

        int_EG_02,char_EG_02,float_EG_02,double_EG_02
        
    ) ;

}


void string_library ( ) {

    char string_EG_01[] = "Qwerty\0" ;
    char string_EG_02[] = "Asdf\0" ;
    char* pointer_EG_01 ;
    
    printf ("\t\tThe content of 'string_EG_01' is: %s\n",string_EG_01) ;
    printf ("\t\tThe content of 'string_EG_02' is: %s\n",string_EG_02) ;
    pointer_EG_01 = strncat ( string_EG_01 , string_EG_02 , 2 ) ;
    printf ("\t\tThe content of the pointer is: %c. And, its memory address is: %d.\n",*pointer_EG_01,pointer_EG_01) ;
    printf ("\t\tThe content of 'string_EG_01' is: %s\n",string_EG_01) ;
    printf ("\t\tThe content of 'string_EG_02' is: %s",string_EG_02) ;

    puts("\n\n");

    char string_EG_03[] = "Qwerty\0" ;
    char string_EG_04[] = "Asdf\0" ;
    char* pointer_EG_02 ;
    
    printf ("\t\tThe content of 'string_EG_03' is: %s\n",string_EG_03) ;
    printf ("\t\tThe content of 'string_EG_04' is: %s\n",string_EG_04) ;
    pointer_EG_02 = strncpy ( string_EG_03 , string_EG_04 , 2 ) ;
    printf ("\t\tThe content of the pointer is: %c. And, its memory address is: %d.\n",*pointer_EG_02,pointer_EG_02) ;
    printf ("\t\tThe content of 'string_EG_03' is: %s\n",string_EG_03) ;
    printf ("\t\tThe content of 'string_EG_04' is: %s",string_EG_04) ;

    puts("\n\n");

    char string_EG_05[] = "Qwerty\0" ;
    char string_EG_06[] = "Asdf\0" ;
    int int_return_01 ;
    
    printf ("\t\tThe content of 'string_EG_05' is: %s\n",string_EG_05) ;
    printf ("\t\tThe content of 'string_EG_06' is: %s\n",string_EG_06) ;
    int_return_01 = strncmp ( string_EG_05 , string_EG_06 , 0 ) ;
    printf ("\t\tThe content of the comparison is: %d.\n",int_return_01) ;
    printf ("\t\tThe content of 'string_EG_05' is: %s\n",string_EG_05) ;
    printf ("\t\tThe content of 'string_EG_06' is: %s",string_EG_06) ;

    puts("\n\n");

    char string_EG_07[] = "Asdf\0" ;
    char string_EG_08[] = "Qwerty\0" ;
    int int_return_02 ;
    
    printf ("\t\tThe content of 'string_EG_07' is: %s\n",string_EG_07) ;
    printf ("\t\tThe content of 'string_EG_08' is: %s\n",string_EG_08) ;
    int_return_02 = strncmp ( string_EG_07 , string_EG_08 , 1 ) ;
    printf ("\t\tThe content of the comparison is: %d.\n",int_return_02) ;
    printf ("\t\tThe content of 'string_EG_07' is: %s\n",string_EG_07) ;
    printf ("\t\tThe content of 'string_EG_08' is: %s",string_EG_08) ;

    puts("\n\n");

    char string_EG_09[] = "Qwerty\0" ;
    char string_EG_10[] = "Asdf\0" ;
    int int_return_03 ;
    
    printf ("\t\tThe content of 'string_EG_09' is: %s\n",string_EG_09) ;
    printf ("\t\tThe content of 'string_EG_10' is: %s\n",string_EG_10) ;
    int_return_03 = strncmp ( string_EG_09 , string_EG_10 , 1 ) ;
    printf ("\t\tThe content of the comparison is: %d.\n",int_return_03) ;
    printf ("\t\tThe content of 'string_EG_09' is: %s\n",string_EG_09) ;
    printf ("\t\tThe content of 'string_EG_10' is: %s",string_EG_10) ;

    puts("\n\n");

    char string_EG_11[] = "yQwerty\0" ;
    char* pointer_EG_03 ;
    
    printf ("\t\tThe content of 'string_EG_11' is: %s\n",string_EG_11) ;
    pointer_EG_03 = strchr ( string_EG_11 , 'y' ) ;
    printf ("\t\tThe content of the pointer is: %c. And, its memory address is: %d.\n",*pointer_EG_03,pointer_EG_03) ;
    printf ("\t\tThe content of the pointer's next position is: %c. And, its memory address is: %d.",*(pointer_EG_03+1),pointer_EG_03) ;

    puts("\n\n");

    char string_EG_12[] = "yQwerty\0" ;
    char* pointer_EG_04 ;
    
    printf ("\t\tThe content of 'string_EG_12' is: %s\n",string_EG_12) ;
    pointer_EG_04 = strrchr ( string_EG_12 , 'y' ) ;
    printf ("\t\tThe content of the pointer is: %c. And, its memory address is: %d.\n",*pointer_EG_04,pointer_EG_04) ;
    printf ("\t\tThe content of the pointer's previous position is: %c. And, its memory address is: %d.",*(pointer_EG_04-1),pointer_EG_04) ;

    puts("\n\n");

    char string_EG_13[] = "Qwerty Asdf Qwerty\0" ;
    char* pointer_EG_05 ;
    
    printf ("\t\tThe content of 'string_EG_13' is: %s\n",string_EG_13) ;
    pointer_EG_05 = strstr ( string_EG_13 , "Asdf" ) ;
    printf ("\t\tThe content of the pointer is: %c. And, its memory address is: %d.\n",*pointer_EG_05,pointer_EG_05) ;
    printf ("\t\tThe content of the pointer's next position is: %c. And, its memory address is: %d.",*(pointer_EG_05+1),pointer_EG_05) ;

}


void qsort_implementation ( ) {

    // BEGINNING ...
    int int_array_EG_01[] = { 1,3,2,5,4 } ;  // Declaring and initializing an integer-data-type array.

    int int_array_size = ( sizeof(int_array_EG_01) / sizeof(int_array_EG_01[0]) ) ;  // Declaring and initilizing an integer in order to know what is the size of the array.
    printf ("\t\tAccording to 'int_array_size' initialization, the size of 'int_array_EG_01[]' is: %d\n",int_array_size) ;

    printf ("\t\tThe content of 'int_array_EG_01[]' is: ") ;
    for ( int positions=0 ; positions < int_array_size ; positions++ ) {
        printf ("%d ",int_array_EG_01[positions]) ;
    }

    int int_array_byte = sizeof(int_array_EG_01[0]) ;  // Declaring and initializing an interger in order to know what is the size of one array's position.
    printf ("\n\t\tAccording to 'int_array_byte' initialization, the size of one index of 'int_array_EG_01[]' is: %d",int_array_byte) ;

    // DEVELOPMENT ...
    qsort ( ((void*) int_array_EG_01) , int_array_size , int_array_byte , qsort_implementation_aux ) ;
    // The last argument of this function can have whatever name, however it has to have the same syntax (the function/last parameter) which is defined in.

    // END ...
    printf ("\n\n\t\tThe final content of 'int_array_EG_01[]' is: ") ;
    for ( int positions=0 ; positions < int_array_size ; positions++ ) {
        printf ("%d ",int_array_EG_01[positions]) ;
    }

}

int qsort_implementation_aux ( const void* first_number , const void* second_number ) {

    if ( *( (int*)first_number ) == *( (int*)second_number ) ) {
        return 0 ;
    } else if ( *( (int*)first_number ) < *( (int*)second_number ) ) {
        return -1 ;  // 1 for reversing.
    } else {
        return 1 ;  // -1 for reversing.
    }

}


void malloc_implementation ( ) {
    
    int int_char_array_size = 10 ;
    char* charPointer = (char*) malloc(int_char_array_size*sizeof(char)) ;
    /*
        Allocates a block of size bytes of memory, returning a pointer to the beginning of the block.
        The content of the newly allocated block of memory is not initialized, remaining with indeterminate values.
        Newly allocated bytes are uninitialized.

        Parameters:  
            1). size of the memory block, in bytes.

        Returns NULL when sufficient memory is not available in the Heap.
    */
   
    int int_to_ascii = 65 ;
    for ( int counter=0 ; counter < int_char_array_size ; counter++ ) {
        *(charPointer+counter) = (char) int_to_ascii++ ;
    } charPointer[10] = '\0' ;
    

    printf ("\t\t\tThe content of the new memory addresses which 'charPointer' is pointing to is:\n\n\t\t\t\t") ;
    for ( int counter=0 ; *charPointer!='\0' ; counter++ ) {
        printf ("[%d]=%c ",counter,*(charPointer++)) ;
    }

}

void calloc_implementation ( ) {

    int int_char_array_size = 10 ;
    char* charPointer = (char*) calloc(int_char_array_size,sizeof(char)) ;
    /*
        Allocates a block of memory for an array of "n" elements, each of them "s" bytes long, and initializes all its bits to zero.
        The effective result is the allocation of a zero-initialized memory block of ("n" * "s") bytes.

        Parameters:  
            1). number of elements to allocate; and,
            2). size of each element.

        Returns NULL when sufficient memory is not available in the Heap.
    */

    int int_to_ascii = 65 ;
    for ( int counter=0 ; counter < int_char_array_size ; counter++ ) {
        *(charPointer+counter) = (char) int_to_ascii++ ;
    } charPointer[10] = '\0' ;
    
    printf ("\t\t\tThe content of the new memory addresses which 'charPointer' is pointing to is:\n\n\t\t\t\t") ;
    for ( int counter=0 ; *charPointer!='\0' ; counter++ ) {
        printf ("[%d]=%c ",counter,*(charPointer++)) ;
    }

}

void realloc_implementation ( ) {

    // Same process with 'calloc(...)' to make the example.'
    int int_char_array_size = 10 ;
    char* charPointer = (char*) calloc(int_char_array_size,sizeof(char)) ;
    char* backup_charPointer = charPointer ;
   
    int int_to_ascii = 65 ;
    for ( int counter=0 ; counter < int_char_array_size ; counter++ ) {
        *(charPointer+counter) = (char) int_to_ascii++ ;
    } charPointer[int_char_array_size] = '\0' ;

    printf ("\t\t\tThe content of the new memory addresses which 'charPointer' is pointing to is:\n\n\t\t\t\t") ;
    for ( int counter=0 ; *charPointer!='\0' ; counter++ ) {
        printf ("[%d]=%c ",counter,*(charPointer++)) ;
    }


    puts("\n");
    printf ("\t\t\tThe address of 'charPointer' is: %hx\n",charPointer) ;
    // Now because, 'charPointer' has been lost ...
    charPointer = backup_charPointer ;
    printf ("\t\t\tThe new address of 'charPointer' is: %hx\n\t\t\tAnd, its correspondent dereferencing is: %c",charPointer,*charPointer) ;
    puts("\n");


    // Now, the 'realloc(...)' part.
    int int_char_reallocation_size = 5 ;
    char* charPointer_realloc = (char*) realloc(charPointer,int_char_reallocation_size*sizeof(char)) ;
    /*
        Changes the size of the memory block pointed to by ptr.
        The function may move the memory block to a new location (whose address is returned by the function).
        Newly allocated bytes are uninitialized.

        Parameters:  
            1). Pointer to a memory block previously allocated with malloc(), calloc() or realloc(); and,
            2). new size for the memory block, in bytes.

        Returns NULL when sufficient memory is not available in the Heap.
    */

    int int_to_ascii_reallocation = 75 ;
    for ( int counter=int_char_array_size ; counter < int_char_array_size+int_char_reallocation_size ; counter++ ) {
        *(charPointer_realloc+counter) = (char) int_to_ascii_reallocation++ ;
    } charPointer_realloc[int_char_array_size+int_char_reallocation_size] = '\0' ;

    printf ("\t\t\tThe content of the new memory addresses which 'charPointer_realloc' is pointing to is:\n\n\t\t\t\t") ;
    for ( int counter=0 ; *charPointer_realloc!='\0' ; counter++ ) {
        printf ("[%d]=%c ",counter,*(charPointer_realloc++)) ;
    }

}

void free_implementation ( ) {

    // Same process with 'calloc(...)' to make the example.'
    int int_char_array_size = 10 ;
    char* charPointer = (char*) calloc(int_char_array_size,sizeof(char)) ;
    char* backup_charPointer = charPointer ;
   
    int int_to_ascii = 65 ;
    for ( int counter=0 ; counter < int_char_array_size ; counter++ ) {
        *(charPointer+counter) = (char) int_to_ascii++ ;
    } charPointer[int_char_array_size] = '\0' ;

    printf ("\t\t\tThe content of the new memory addresses which 'charPointer' is pointing to is:\n\n\t\t\t\t") ;
    for ( int counter=0 ; *charPointer!='\0' ; counter++ ) {
        printf ("[%d]=%c ",counter,*(charPointer++)) ;
    }


    puts("\n");
    printf ("\t\t\tThe address of 'charPointer' is: %hx\n",charPointer) ;
    // Now because, 'charPointer' has been lost ...
    charPointer = backup_charPointer ;
    printf ("\t\t\tThe new address of 'charPointer' is: %hx\n\t\t\tAnd, its correspondent dereferencing is: %c",charPointer,*charPointer) ;
    puts("\n");


    // Now, the 'realloc(...)' part.
    free(charPointer);
    /*
        Releases the block of memory pointed to by "pointer".
        A block of memory previously allocated by a call to malloc(), calloc() or realloc() is deallocated, making it available again for further allocations.
        If "pointer" does not point to a block of memory allocated with the above functions, it causes "undefined behavior".
        If "pointer" is a null pointer, the function does nothing.
        When you no longer need a block of allocated memory, use the function free() to make the block available to be allocated again.

        Parameters:
            1). Pointer to a memory block previously allocated with malloc(), calloc() or realloc().

        Returns none value.
    */
    printf ("\t\t\tAfter releasing some memory, the address of 'charPointer' is: %hx\n",charPointer) ;
    printf ("\t\t\tAfter releasing some memory, the new address of 'charPointer' is: %hx\n\t\t\tAnd, its correspondent dereferencing is: %d",charPointer,*charPointer) ;
    // ASCII-16 stands for DLE: Data Link Escape. (non-printable character).

}



// To rest -->      