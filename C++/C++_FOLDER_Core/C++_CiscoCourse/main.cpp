
// Preprocessor directives
#include <iostream>  // For 'cout' and 'endl' functions
#include <iomanip>  // For 'setbase(8|10|16)' function.
#include <limits>  // For 'numeric_limits' function.

using namespace std ;



// Global statements


// Prototypes


int main ( void ) {  //  CISCO: "This 'void' data type is a convention derived from C language where the clause () had definitely different meaning."

    cout << "\n\n\n\n+\t+\t+\t+\t+\t+\t+\t+\t+\t\tBEGINNING OF CISCO PROGRAMMING COURSE - C++ ESSENTIALS\t\t+\t+\t+\t+\t+\t+\t+\t+\t+\n\n\n" << endl ;


    
    cout << " •  Because 'using namespace std' is called in this program, the 'cout' function can be used." << endl ;
    std::cout << " •  However, if the preprocessor directive wouldn't have called, 'std::cout' would work as well as 'cout'." << endl ;


    cout << endl ;


    cout <<
        "\n\nSYNTAX OF A FUNCTION\n\n"
            "\tPROTOTYPE OR DECLARATION\n\n"  // It is necessary if the function goes after 'main()' function.
                "\t\t<function's return data type> <function's name> ( <function's formal parameters> ) ;\n\n"
            "\tDEFINITION\n\n"
                "\t\t<function's return data type> <function's name> ( <function's parameters> ) {\n"  // Parameters (separated by commas): <parameter's return data type> <parameter's name>
                "\t\t\t<statements>\n"  // The statements which comprise a function include 'return' statement.
                "\t\t}\n\n"
            "\tIMPLEMENTATION\n\n"
                "\t\t<function's name> ( <function's arguments> ) ;\n\n"  // Depending on the return (data type), it will be necessary to assign the return to a variable.
    << endl ;


    cout << endl ;


    // They all represent integer data types.
    cout << " •  It is possible to use single quotes as separators enhancing integer numbers readability: " << 1'000'000 << endl ;
    cout << " •  It is possible to use a specific notation in order to express a hexadecimal number: " << 0x100 << endl ;
    cout << " •  It is possible to use a specific notation in order to express a binary number: " << 0b0001 << " || " << 0B0001 << endl ;
    cout << " •  It is possible to use a scientific notation in order to express a exponential number: " << 3 * (10*10) << " || " << 3E2 << " || " << scientific << 300 << endl ;


    cout << endl ;


    cout <<
        "\n\nSYNTAX OF VARIABLES\n\n"
            "\tDECLARATION\n\n"
                "\t\t<variable's data type> <variable's name> ;\n\n"
            "\tINITILIZATION\n\n"  // First time with a value given.
                "\t\t<variable's data type> <variable's name> = <variable's value> ;\n\n"
            "\tASSIGNATION\n\n"  // Given values after declaration or initilization.
                "\t\t<variable's data type> <variable's name> = <variable's value> ;\n\n"
    << endl ;


    cout << endl ;


    cout << " •  It is possible to aritmeticaly operate values with '+', '-', '*', '/' and '%'." << endl ;
    cout << " •  It is possible to represent a unary minus number: -<value or variable>." << endl ;
    cout << " •  It is preferable to use 'l' or 'L' after long data type numbers." << endl ;
    cout << " •  It is preferable to use 'f' or 'F' after float data type numbers." << endl ;


    cout << endl ;


    cout <<
        "\n\nSYNTAX OF COMMENTS\n\n"
            "\tSINGLE LINE\n\n"
                "\t\t// <content>\n\n"
            "\tMULTI LINE\n\n"
                "\t\t/*\n"
                "\t\t\t<content>\n"
                "\t\t*/\n\n"
    << endl ;


    cout << endl ;


    char character ;  // Declaring a character data type variable in order to store only one character.

    character = 48 ;  // Assigning the character data type variable with a numeric ASCII's representation.
    cout << " •  Another way to represent a character is " << character << endl ;
    character = '\60' ;  // Assigning the character data type variable with a numeric octal representation.
    cout << " •  Another way to represent a character is " << character << endl ;
    character = '\x30' ;  // Assigning the character data type variable with a numeric hexadecimal representation.
    cout << " •  Another way to represent a character is " << character << endl ;


    cout << endl ;


    cout <<
        "\n\nSYNTAX OF A CONDITIONAL\n\n"
            "\tif ( <condition> ) {\n"
            "\t\t<statements>\n"
            "\t} else if ( <condition> ) {\n" // This part can be used as many times as required.
            "\t\t<statements>\n"
            "\t} else {\n"
            "\t\t<statements>\n"
            "\t}\n"
    << endl ;

    cout << "\t// It is possible to ommit the block syntax when there is just one statement in the condition.\n\n" << endl ;


    cout << endl ;


    int digit = 255 ;  // Initializing a integer data type variable in order to store a digit.

    // Modifing the output stream ...
    cout << " •  Variable represented as a decimal number: " << dec << digit << endl ;
    cout << " •  Variable represented as a octal number: " << oct << digit << endl ;
    cout << " •  Variable represented as a hexadecimal number: " << hex << digit << endl ;
    cout << endl ;
    // Including 'iomanip' library.
    cout << " •  Variable represented as a decimal number: " << setbase(10) << digit << endl ;
    cout << " •  Variable represented as a octal number: " << setbase(8) << digit << endl ;
    cout << " •  Variable represented as a hexadecimal number: " << setbase(16) << digit << endl ;


    cout << endl ;


    cout <<
        "\n\nSYNTAX OF CASTING\n\n"
            "\tSTATIC CASTING\n\n"
                "\t\t... = ( <new data type> ) <value to cast> ;\n\n"
            "\tDYNAMIC CASTING\n\n"  // Inside a data stream.
                "\t\t... << static_cast <(new data type)>(<value to cast>) ... ;"
    << endl ;


    cout << endl ;


    cout <<
        "\n\nSYNTAX FOR INPUTS\n\n"
            "\tWITHOUT MESSAGE\n\n"
                "\t\tcin >> <variable> ;\n\n"
            "\tWITH MESSAGE\n\n"
                "\t\tcout << <string message> << flush , cin >> <variable> ;\n"
    << endl ;

    // The 'flush' function ensures output buffer closure. This function does not include an end line character.



    cout << "\n\n+\t+\t+\t+\t+\t+\t+\t+\t+\t+\t+\t+\t+\t+\t+\t+\t+\t+\t+\t+\t+\t+\t+\t+\t+\t+\t+\n" << endl ;



    cout <<
        "\n\nSIZE MEMORY FOR DATA TYPE ESPECIFICATION\n\n"
    << flush ;

    short short_Variable = numeric_limits<short>::min() ;
    unsigned short unsignedShort_Variable = numeric_limits<short>::max() ;
    int integer_Variable = numeric_limits<int>::min() ;
    unsigned int unsignedInteger_Variable = numeric_limits<int>::max() ;
    long long_Variable = numeric_limits<long>::min() ;
    unsigned long unsignedLong_Variable = numeric_limits<long>::max() ;

    // The 'signed' keyword would not change variables' natural behaviour.

    cout <<
        "\tThe minimum value possible of a short variable is: " << short_Variable << dec << endl <<
        "\tThe maximum value possible of an unsigned short variable is: " << unsignedShort_Variable << dec << endl <<
        "\tThe minimum value possible of an int variable is: " << integer_Variable << dec << endl <<
        "\tThe maximum value possible of an unsigned int variable is: " << unsignedInteger_Variable << dec << endl <<
        "\tThe minimum value possible of a long variable is: " << long_Variable << dec << endl <<
        "\tThe maximum value possible of an unsigned long variable is: " << unsignedLong_Variable << dec << endl
    << endl ;

    double double_Variable = numeric_limits<double>::max() ;  // 8 bytes long
    long double longDouble_Variable = numeric_limits<long double>::max() ;  // 16 bytes long

    cout <<
        "\tThe maximum value possible of a double variable is: " << double_Variable << dec << endl <<
        "\tThe maximum value possible of a long double variable is: " << longDouble_Variable << dec << endl
    << endl ;

    // The larger the bytes, the greater the number of precise digits.

    int char_VariableForInferiorLimit = numeric_limits<char>::min() ;
    int char_VariableForSuperiorLimit = numeric_limits<char>::max() ;
    int unsignedChar_VariableForInferiorLimit = numeric_limits<unsigned char>::min() ;
    int unsignedChar_VariableForSuperiorLimit = numeric_limits<unsigned char>::max() ;

    cout <<
        "\tThe minimum value possible of a char variable is: " << char_VariableForInferiorLimit << dec << endl <<
        "\tThe maximum value possible of a char variable is: " << char_VariableForSuperiorLimit << dec << endl <<
        "\tThe minimum value possible of a char variable is: " << unsignedChar_VariableForInferiorLimit << dec << endl <<
        "\tThe maximum value possible of a char variable is: " << unsignedChar_VariableForSuperiorLimit << dec
    << endl ;

    // The 'char' data type is eight-bit integer value.


    cout << endl ;


    cout <<
        "\n\nWHILE LOOP SYNTAX\n\n"
            "\twhile ( <conditional expression> ) {\n"
            "\t    <statements>\n"
            "\t}"
    << endl ;


    cout << endl ;


    cout <<
        "\n\nDO WHILE LOOP SYNTAX\n\n"
            "\tdo {\n"
            "\t    <statements>\n"
            "\t} while ( <conditional expression> ) ;"
    << flush ;


    cout << endl ;


    cout <<
        "\n\nFOR LOOP SYNTAX\n\n"
            "\tfor ( <initialization> ; <checking> ; <modifying> ) {\n"
            "\t    <statements>\n"
            "\t}"
    << endl ;

    /*
        •  If there is no "checking" specified, the conditional expression returns true.
        •  The 'continue' and 'break' keywords are available for loops.
        •  Conditional expressions can contain: &&, ||, !<expression>.
        •  There are bitwise operators: & (ampersand: bitand), | (bar: bitor), ~ (tilde: compl), and ^ (caret: xor).
        •  Pair of digraphs are used to left (<<) and right (>>) shifting.
    */


    cout << endl ;


    cout <<
        "\n\nSWITCH-CASE CONDITIONAL SYNTAX\n\n"
            "\tswitch ( <switching expression> ) {\n"
            "\t    case n :\n"
            "\t        <statements>\n"
            "\t        break ;\n"
            "\t    default :\n"  // This statement can be used once.
            "\t        <statements>\n"
            "\t        break ;\n"
            "\t}"
    << endl ;



    cout << "\n\n+\t+\t+\t+\t+\t+\t+\t+\t+\t+\t+\t+\t+\t+\t+\t+\t+\t+\t+\t+\t+\t+\t+\t+\t+\t+\t+\n" << endl ;



    cout <<
        "\n\nARRAYS\n\n"
            "\tDECLARATION\n\n"
                "\t\t<array's data type> <array's name>[<array's size>] ;\n\n"
            "\tSIMULTANEOUS DECLARATION\n\n"  // Array's data type is defined once by line.
                "\t\t<array's data type> <array's declarations separated by commas> ;\n\n"
            "\tSIZED INITIALIZATION\n\n"  // Array's size is defined by declaration part.
                "\t\t<array's data type> <array's name>[<array's size>] = { <values separated by commas> } ;\n\n"
            "\tNON-SIZED INITIALIZATION\n\n"  // Array's size is defined by number of initilized elements.
                "\t\t<array's data type> <array's name>[] = { <values separated by commas> } ;\n\n"
            "\tSIMULTANEOUS INITIZALITION\n\n"  // Array's data type is defined once by line.
                "\t\t<array's data type> <array's initializations separated by commas> ;\n\n"
            "\tASSIGNATION\n\n"
                "\t\t<array's name>[<array's position>] = <value> ;\n\n"
    << endl ;


    cout << endl ;


    cout <<
        "\n\nMATRICES\n\n"
            "\tDECLARATION\n\n"
                "\t\t<matrix's data type> <matrix's name>[<rows size>][<columns size>] ;\n\n"
            "\tSIMULTANEOUS DECLARATION\n\n"  // Matrix's data type is defined once by line.
                "\t\t<matrix's data type> <matrix's declarations separated by commas> ;\n\n"
            "\tSIZED INITIALIZATION\n\n"  // Matrix's size is defined by declaration part.
                "\t\t<matrix's data type> <matrix's name>[<rows size>][<columns size>] = {\n"
                    "\t\t\t<rows values separated by commas>\n"
                "\t\t} ;\n\n"
            "\tNON-SIZED INITIALIZATION\n\n"  // Matrix's rows size is defined by number of initilized elements.
                "\t\t<matrix's data type> <matrix's name>[][<columns size>] = {\n"
                    "\t\t\t<values separated by commas>\n"
                "\t\t} ;\n\n"
            "\tSIMULTANEOUS INITIZALITION\n\n"  // Matrix's data type is defined once by line.
                "\t\t<matrix's data type> <matrix's initializations separated by commas> ;\n\n"
            "\tASSIGNATION\n\n"
                "\t\t<matrix's name>[<row position>][<column position>] = <value> ;\n\n"
    << endl ;

    cout <<
        " •  Size of DS:\n\n"
            "\tunsigned int <variable's name> = sizeof ( <DS's name> ) / sizeof ( <DS's name>[0] ) ;\n\n"
        " •  It is possible to do simultaneous declaration or initilization with variables, arrays, and matrices at the same time."
    << endl ;



    cout << "\n\n+\t+\t+\t+\t+\t+\t+\t+\t+\t+\t+\t+\t+\t+\t+\t+\t+\t+\t+\t+\t+\t+\t+\t+\t+\t+\t+\n" << endl ;



    cout <<

        "\n\nSTRUCTURES\n\n"

            "\t- VARIABLING STRUCTURES -\n\n"

                "\t\tDECLARATION\n\n"
                    "\t\t\tstruct <struct's name> {\n"
                    "\t\t\t    <statements>\n"                        // Declarations, Initializations and Assignations as fields.
                    "\t\t\t} ;\n\n"
                "\t\tDEFINITION\n\n"
                    "\t\t\t<struct's name> <variable's names> ;\n\n"  // Initialization or Assignation are optional.
                "\t\tDECLARATION AND DEFINITION\n\n"
                    "\t\t\tstruct <struct's name> {\n"
                    "\t\t\t    <statements>\n"                        // Declarations, Initializations and Assignations as fields.
                    "\t\t\t} <variable's names> ;\n\n"
                "\t\tSELECTION\n\n"
                    "\t\t\t... <variable's name>.<field> ...\n\n"     // Dot symbol works as selector, or selection operator.
            
            "\t- NO VARIABLING -\n\n"

                "\t\tDECLARATION\n\n"
                    "\t\t\tstruct {\n"
                    "\t\t\t    <statements>\n"                        // Declarations, Initializations and Assignations as fields.
                    "\t\t\t} <struct's name> ;\n\n"
                "\t\tSELECTION\n\n"
                    "\t\t\t... <struct's name>.<field> ...\n\n"       // Dot symbol works as selector, or selection operator.

            "\t* ASSIGNATION FOR BOTH TYPES *\n\n"

                "\t\t... = { <values separated by commas> } ;"        // Order matters.
    
    << endl ;



    cout << "\n\n\n\n+\t+\t+\t+\t+\t+\t+\t+\t+\t\tEND OF CISCO PROGRAMMING COURSE - C++ ESSENTIALS\t\t+\t+\t+\t+\t+\t+\t+\t+\t+\n\n\n\n" << endl ;

return 0;
}




// To rest -->      