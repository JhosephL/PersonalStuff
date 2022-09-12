
// Header file
# include <stdio.h>


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

    printf ("\t\tThe C programming language is case-sensitive, so my_Variable and my_variable are two different identifiers.\n\n") ;

    printf (

       "\t\tIn order to initialize a constant:\n"
        "\t\tconst <constant's data type> <CONSTANT'S NAME> = <contant's value> ;"
    
    ); // const double PI = 3.1415926535 ;


    printf ("\n\n\n\n") ;


    printf ("  - - - - -  >\tFORMATTING STRINGS") ;
    printf ("\n\n\n") ;

    printf (
    
        "\t\t -------------- ------------------------\t\t\n"
        "\t\t|   CHARACTER  |       DATA TYPE        |\t\t\n"
        "\t\t -------------- ------------------------ \t\t\n"
        "\t\t|      %%c      |    Char                |\n"
        "\t\t|      %%d      |    Interger.           |\n"
        "\t\t|      %%f      |    Float.              |\n" // '%e', '%E', '%g', '%G' also work for float data type.
        "\t\t|      %%l      |    Long.               |\n"
        "\t\t|      %%lf     |    Double.             |\n"
        "\t\t|      %%s      |    String.             |\n"
        "\t\t|      %%p      |    Pointer.            |\n"
        "\t\t|      %%o      |    Octal.              |\n" // representation
        "\t\t|      %%x      |    Hexadecimal.        |\n" // '%X' also works for hexadecimal representation.
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
    printf ("\t\t•  To store string (char array).\n\t\tgets(<char array>)\n\n") ;
    printf ("\t\t•  To store next matching specified format.\n\t\tscanf(<string formating>,&<variables>)\n\n") ; // 'scanf()' function stops reading as soon as it encounters a space.


    printf ("\n\n\n\n") ;


    printf ("  - - - - -  >\tOUTPUTS") ;
    printf ("\n\n\n") ;

    printf ("\t\t•  To display a single character.\n\t\tputchar(<variable>)\n\n") ;
    printf ("\t\t•  To display a string.\n\t\tputs(<char array>)\n\n") ;
    printf ("\t\t•  To display a string with format.\n\t\tprintf(<string formatting>,<variables>)\n\n") ;


    printf ("\n\n\n\n") ;


    printf ("  - - - - -  >\tCASTING") ;
    printf ("\n\n\n") ;

    printf ("\t\t... = (<destination data type>) (<operation>)") ;


    printf ("\n\n\n\n") ;


    printf ("  - - - - -  >\tSOMETHING ABOUT OPERATORS") ;
    printf ("\n\n\n") ;

    printf ("\t\t•  Prefix increment.\n\t\t++<variable>\n\n") ;
    printf ("\t\t•  Postfix increment.\n\t\t<variable>++\n\n") ;
    printf ("\t\t•  Prefix decrement.\n\t\t--<variable>\n\n") ;
    printf ("\t\t•  Postfix decrement.\n\t\t<variable>--\n\n") ;


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
        "\n\t\t}\n"

    ) ;


    printf ("\n\n\n\n") ;


    printf ("  - - - - -  >\tDO WHILE STATEMENT") ;
    printf ("\n\n\n") ;

    printf (
    
        "\t\tdo {\n\n"
        "\t\t\t<statements>\n"
        "\n\t\t} while (<condition>) ;\n"

    ) ;


    printf ("\n\n\n\n") ;


    printf ("  - - - - -  >\tCONTINUE STATEMENT") ;
    printf ("\n\n\n") ;

    printf ("\t\t\"When you want to remain in the loop, but skip ahead to the next iteration, you use the continue statement.\"\n\t\tcontinue;") ;


    printf ("\n\n\n\n") ;


    printf ("  - - - - -  >\tTRYING  . . .") ;
    printf ("\n\n\n") ;

    printf ("\t\t// CODE") ;




    printf ("\n\n\n\n\nc c c c c c c c c c c c c c c c c c c c c c c c c\tTHIS IS SOLOLEARN'S C PROGRAMMING LANGUAGE COURSE\tc c c c c c c c c c c c c c c c c c c c c c c c c\n\n\n\n\n\n") ;




return 0;
}



// To rest -->      