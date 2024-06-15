
//// EVERYTHING FROM:
// https://www.youtube.com/watch?v=30LWjhZzg50&ab_channel=freeCodeCamp.org

//// CALLING.
function_main() ;


//// MAIN FUNCTION.
function function_main ( ) : void {

    console.log ( "\n\n\n" ) ;
    console.log ( "\t\t\t\t-  TYPESCRIPT  -\t\t\t\t" ) ;
    console.log ( "- - - - - - - - - - - -  Beginning of Syntax & Functions  - - - - - - - - - - - -\n\n" ) ;
    
    
    function_variables() ;
    function_constants() ;
    function_dataTypes() ;
    
    
    console.log ( "- - - - - - - - - - - -  End of Syntax & Functions  - - - - - - - - - - - -" ) ;
    console.log ( "\t\t\t\t-  TYPESCRIPT  -\t\t\t\t" ) ;
    console.log ( "\n\n\n" ) ;

}


//// OTHER FUNCTIONS.
function function_variables ( ) : void {

    console.log ( "\t-  VARIABLES  -\n\n" ) ;

    console.log (  // Implicit 'any' data type.
        "Non-Typed Declaration:\n\t" +
            "let <variable's name> ;" +
        "\n\n"
    ) ;

    console.log (  // Explicit data type.
        "Typed Declaration:\n\t" +
            "let <variable's name> : <variable's data type> ;" +
        "\n\n"
    ) ;

    console.log (  // Implicit 'any' data type.
        "Non-Typed Initialization:\n\t" +
            "let <variable's name> = <variable's value> ;" +
        "\n\n"
    ) ;

    console.log (  // Explicit data type.
        "Typed Initialization:\n\t" +
            "let <variable's name> : <variable's data type> = <variable's value> ;" +
        "\n\n"
    ) ;

    console.log (
        "Assignment:\n\t" +
            "<variable's name> = <variable's value> ;" +
        "\n\n"
    ) ;

}

function function_constants ( ) : void {

    console.log ( "\t-  CONSTANTS  -\n\n" ) ;

    console.log (
        "Initialization:\n\t" +
            "let <constant's name> : <constant's data type> = <constant's value> ;" +
        "\n\n"
    ) ;

}

function function_dataTypes ( ) : void {

    console.log ( "\t-  DATA TYPES  -\n\n" ) ;

    let variableBoolean : boolean = true    ;  console.log ( variableBoolean + '\n' ) ;

    let variableString : string = "string"  ;  console.log ( variableString + '\n' )  ;

    let variableNumber : number ;
    variableNumber = 0b10011010010  ;   console.log ( variableNumber )  ;
    variableNumber = 1234           ;   console.log ( variableNumber )  ;
    variableNumber = 1234.0         ;   console.log ( variableNumber )  ;
    variableNumber = 0o2322         ;   console.log ( variableNumber )  ;
    variableNumber = 0x4d2          ;   console.log ( variableNumber )  ;
    console.log();
    let variableBigInt : bigint = 1000n     ;   console.log ( variableBigInt + '\n\n' ) ;

    /*
        void, null, undefined, any, unknown
        They also exist as data types.
    */

}

