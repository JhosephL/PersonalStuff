
fun main ( ) {


    println ("\n\n\n\n\n\t\toooooooooooooooo\tTHIS IS THE BEGINNING OF Kotlin_SoloLearn\toooooooooooooooo\t\t\n\n\n\n")



    println (". . . . . . . . . . . . . . . . . . . . . . . . MODULE 1 . . . . . . . . . . . . . . . . . . . . . . . . ")
    println ("                                             Basic concepts                                              ")
    println (". . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .")
    println ("\n\n")


    println (
    
        "\t-----------------------------------------------------------------------------\n" +
        "\t|                            KOTLIN DATA TYPES                              |\n" +
        "\t-----------------------------------------------------------------------------\n" +
        "\t|    TYPE    | SIZE (bits) |           INTERVAL           | REPRESENTATION  |\n" +
        "\t-----------------------------------------------------------------------------\n" +
        "\t|   Bool     |      1      |    [     0    , (2^0)   ]    |   true | false  |\n" +
        "\t|---------------------------------------------------------------------------|\n" +
        "\t|   Byte     |      8      |    [   -(2^7) , (2^7)   )    |        1        |\n" +  // BIN: 0b1010; HEX: 0xFF;
        "\t|   Short    |      16     |    [  -(2^15) , (2^15)  )    |        1        |\n" +  // OCT: non-supported;
        "\t|   Int      |      32     |    [  -(2^31) , (2^31)  )    |        1        |\n" +  // 1234_4567_7890
        "\t|   Long     |      64     |    [  -(2^63) , (2^63)  )    |        1L       |\n" +  
        "\t|---------------------------------------------------------------------------|\n" +
        "\t|   Float    |      32     |    [  -(2^31) , (2^31)  )    |   1.0F ; 1.0f   |\n" +  // 6 or 7 decimals.
        "\t|   Double   |      64     |    [  -(2^63) , (2^63)  )    |   1.0 ; 1.0e10  |\n" +  // 15 or 16 decimals.
        "\t|---------------------------------------------------------------------------|\n" +
        "\t|   UByte    |      8      |    [     0    , (2^8)   )    |   1.0U ; 1.0u   |\n" +
        "\t|   UShort   |      16     |    [     0    , (2^16)  )    |   1.0U ; 1.0u   |\n" +
        "\t|   UInt     |      32     |    [     0    , (2^32)  )    |   1.0U ; 1.0u   |\n" +
        "\t|   ULong    |      64     |    [     0    , (2^64)  )    |  1.0UL ; 1.0uL  |\n" +
        "\t|---------------------------------------------------------------------------|\n" +
        "\t|    Char    |      16     |    [  -(2^15) , (2^15)  )    |  \"ASCII table\"  |\n" +
        "\t-----------------------------------------------------------------------------\n"
    
    )


    println()
    
    
    println (

        "\t----------------------------------------------\n" +
        "\t|              ESCAPE CHARACTERS             |\n" +
        "\t----------------------------------------------\n" +
        "\t|  CHARACTER  |            FUNCTION          |\n" +
        "\t----------------------------------------------\n" +
        "\t|     \\t      |    tab                       |\n" +
        "\t|     \\b      |    backspace                 |\n" +
        "\t|     \\n      |    new line (LF)             |\n" +
        "\t|     \\r      |    carriage return (CR)      |\n" +
        "\t|     \\'      |    single quotation mark     |\n" +
        "\t|     \\\"      |    double quotation mark     |\n" +
        "\t|     \\\\      |    backslash                 |\n" +
        "\t|     \\\$      |    dollar sign               |\n" +
        "\t----------------------------------------------\n"
    
    )

    
    println()


    println (
    
        "\t------------------------------------------\n" +
        "\t|          FORMATTING STRINGS            |\n" +
        "\t------------------------------------------\n" +
        "\t|   CHARACTER  |       DATA TYPE         |\n" +
        "\t------------------------------------------\n" +
        "\t|      %b      |    Boolean.             |\n" +
        "\t|      %d      |    Decimal.             |\n" +  // or Byte, or Short, or Integer, or Long.
        "\t|      %f      |    Float and Double.    |\n" +  // '%e', '%E', '%g', '%G' also work for float data type.
        "\t|      %o      |    Octal.               |\n" +  // representation
        "\t|      %x      |    Hexadecimal.         |\n" +  // '%X' also works for hexadecimal representation.
        "\t|      %c      |    Char                 |\n" +
        "\t|      %s      |    String.              |\n" +
        "\t|      %n      |    Prints LF.           |\n" +
        "\t------------------------------------------\n"
        
    )


    println()


    println (

        "\tPRINTING STATEMENTS:\n\n" +
        "\t\t•  print   (<statement>)\n" +
        "\t\t•  println (<statement>)\n" +
        "\t\t•  print   (\"<message> \${<type>} <message>\")\n" +
        "\t\t•  println (\"<message> \${<type>} <message>\")\n" +
        "\t\t•  println (<message with formatting strings>.format(<statements separated by commas>))\n"

    )

    println ("\t\t•  An asterisk is used to separate field width, especified just before the actual argument.")  // ("%*<character>",<# of width>,<argument>)
    println ("\t\t•  A number is used to separate field width.")  // %<# of width><character>
    println ("\t\t•  A period is used to separate field width and precision (for decimal part).")  // %<# of width>.<# of precision><character>


    println()


    println ("\n\tRAW STRINGS")

    println (

        """
        This is called "raw string".
        It is a possibility for printing line-by-line strings.
        Raw strings do not understands Escape Characters.
        They can be assigned to a type.
        """

    )


    println ("\n------------------------------------------------------------------------------------------------------------\n\n")


    println (

        "\tVARIABLES (MUTABLE)\n\n" +
        "\t\t•  Declaration:\n" +
        "\t\tvar <variable's name>:<variable's data type>\n\n" +
        "\t\t•  Initialization:\n" +
        "\t\tvar <variable's name> = <non-null variable's content>\n\n" +
        "\t\t•  Assignment:\n" +
        "\t\t<variable's name> = <non-null variable's content>\n" +
        "\t\t•  Calling:\n" +
        "\t\t<variable's name, which content is non-null>\n"
    
    )
    
    println (
        
        "\tVALUES (INMUTABLE)\n\n" +
        "\t\t•  Declaration:\n" +
        "\t\tval <values' name>:<values' data type>\n\n" +
        "\t\t•  Initialization:\n" +
        "\t\tval <values' name> = <non-null values' content>\n\n" +
        "\t\t•  Assignment:\n" +
        "\t\t<values' name> = <non-null values' content>\n" +
        "\t\t•  Calling:\n" +
        "\t\t<values' name, which content is non-null>\n"
    
    )
    
    println (
        
        "\tNULLABLE TYPES\n\n" +
        "\t\t•  Declaration:\n" +
        "\t\t<var or val> <type's name>:<type's data type>?\n\n" +
        "\t\t•  Initialization:\n" +
        "\t\t<var or val> <type's name>:<type's data type>? = <type's content>\n\n" +
        "\t\t•  Assignment:\n" +
        "\t\t<type's name> = <type's content, which can be 'null'>\n" +
        "\t\t•  Save calling:\n" +
        "\t\t<type's name or return, which content can be 'null'>?\n"
    
    )

    println (
        
        "\tNON-NULLABLE TYPES\n\n" +
        "\t\t•  Save calling:\n" +
        "\t\t<type's name or return, which content cannot be 'null'>!!\n"
    
    )

    /*
        NOTES.
        •  Every type must be initialized in order to be used.
        •  Null Assertion Operator: '?'.
        •  Naturaly, a type cannot be null. However, to do it so, '?' notation is needed.
        •  Not-null Assertion Operator: '!!'.
        •  If it is needed that a type is not null during its calling, then '!!' notation is used.
    */


    println ("\n------------------------------------------------------------------------------------------------------------\n\n")


    println (
        "\tCONVERTION FORMAT\n\n" +
        "\t\t... <content of certain data type>.to<the another data type to cast> ...\n"
    )

    // This is called implicit casting, it returns the same value with the different and specified data type.


    println ("\n------------------------------------------------------------------------------------------------------------\n\n")


    println (

        "\tOPERATORS\n\n" +
        "\t\t•  It is possible to concatenate text strings through '+' operator.\n" +
        "\t\t•  Kotlin support operation simplification, prefix and postfix.\n" +
        "\t\t•  Kotlin has the same comparison operators than other PLL.\n\n" +
        "\t\t•  Kotlin has \"Range Operator\":\n" +
        "\t\t\t(<inferior limit>..<superior limit>),\n" +
        "\t\t\t(<inferior limit> until <superior limit - 1>)\n" +
        "\t\t\t(<superior limit> downTo <inferior limit>)\n"

    )


    println()


    println ("\tRANGE OF INTEGERS EXAMPLE\n")
    // Example of Range Operator Assignment.
    val rangeInt_Example:IntRange = 0..5
    print ("\t\tThe content of IntRange is:\n\t\t")
    // Printing of IntRange.
    for ( iterator_i in rangeInt_Example ) {
        print ("${iterator_i} ")
    }


    println("\n\n")


    println ("\tRANGE OF CHAR EXAMPLE\n")
    // Another example of Range Operator Assignment.
    val rangeChar_Example:CharRange = '0'..'z'
    print ("\t\tThe content of CharRange is:\n\t\t")
    // Printing of CharRange.
    for ( iterator_i in rangeChar_Example ) {
        print ("${iterator_i} ")
    }


    println("\n")


    println ("\n------------------------------------------------------------------------------------------------------------\n\n")


    println (
    
        "\tBITWISE OPERATORS\n\n" +  // They can only operate 'Int' and 'Long' data types.

        "\t\t•  Signed Shift Left:\n\n" +
        "\t\t\t        %d\n".format(4) +
        "\t\t\t SSL    %d\n".format(1) +
        "\t\t\t----------\n" +
        "\t\t\t        %d\n\n".format(4 shl 1) +

        "\t\t•  Signed Shift Right:\n\n" +
        "\t\t\t        %d\n".format(4) +
        "\t\t\t SSR    %d\n".format(1) +
        "\t\t\t----------\n" +
        "\t\t\t        %d\n\n".format(4 shr 1) +

        "\t\t•  Unsigned Shift Right:\n\n" +
        "\t\t\t        %d\n".format(4) +
        "\t\t\t USR    %d\n".format(1) +
        "\t\t\t----------\n" +
        "\t\t\t        %d\n\n".format(4 ushr 1) +

        "\t\t•  AND:\n\n" +
        "\t\t\t        %d\n".format(4) +
        "\t\t\t AND    %d\n".format(1) +
        "\t\t\t----------\n" +
        "\t\t\t        %d\n\n".format(4 and 1) +

        "\t\t•  OR:\n\n" +
        "\t\t\t        %d\n".format(4) +
        "\t\t\t OR     %d\n".format(1) +
        "\t\t\t----------\n" +
        "\t\t\t        %d\n\n".format(4 or 1) +

        "\t\t•  XOR:\n\n" +
        "\t\t\t        %d\n".format(4) +
        "\t\t\t XOR    %d\n".format(1) +
        "\t\t\t----------\n" +
        "\t\t\t        %d\n\n".format(4 xor 1) +

        "\t\t•  Inversion:\n\n" +
        "\t\t\t INV    %d\n".format(4) +
        "\t\t\t----------\n" +
        "\t\t\t       %d\n".format(4.inv())

    )


    println ("\n------------------------------------------------------------------------------------------------------------\n\n")


    println (
        
        "\tDATA INPUT FORMAT\n\n" +
        "\t\t... = readLine()"
    
    )

    /*
        NOTES.
        •  The function only returns 'String' data type.
        •  The function's return can be assigned.
        •  The calling of the function and its casting can be done in the same line.
    */


    println ("\n\n")
    println (". . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .")
    println ("                                             Basic concepts                                              ")
    println (". . . . . . . . . . . . . . . . . . . . . . . . MODULE 1 . . . . . . . . . . . . . . . . . . . . . . . . ")



    println()  ;  println()  ;  println()  ;  println()  ;  println()  ;  println()



    println (". . . . . . . . . . . . . . . . . . . . . . . . MODULE 2 . . . . . . . . . . . . . . . . . . . . . . . . ")
    println ("                                              Control flow                                               ")
    println (". . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .")
    println ("\n\n")


    println (

        "\tIF CONFITIONAL STATEMENT FORMAT\n\n" +
        "\t\tif ( <condition> ) {\n" +
        "\t\t    <statements>\n" +
        "\t\t} else if ( <condition> ) {\n" +
        "\t\t    <statements>\n" +
        "\t\t} else {\n" +
        "\t\t    <statements>\n" +
        "\t\t}\n\n"

    )

    println (

        "\tCONDITIONAL EXPRESSION FORMAT\n\n" +
        "\t\t... = if ( <condition> ) <if statements> else <else statements>\n\n"

    )

    println (

        "\tWHEN STATEMENT FORMAT\n\n" +
        "\t\t... = when {\n" +
        "\t\t   ( <condition> ) -> <statements>\n" +
        "\t\t   else -> <statements>\n" +
        "\t\t}\n"

    )


    println ("\n------------------------------------------------------------------------------------------------------------\n\n")


    println (

        "\tWHILE STATEMENT FORMAT\n\n" +
        "\t\twhile ( <condition> ) {\n" +
        "\t\t   <statements>\n" +
        "\t\t}\n"
        
    )


    println ("\n------------------------------------------------------------------------------------------------------------\n\n")


    println ("\tARRAYS\n")

    // Initializing an array.
    var array_Example = arrayOf("123",123,123.0123)

    println ("\t\tThe content of the array is:")
    println ("\t\t${array_Example[0]}")
    println ("\t\t${array_Example[1]}")
    println ("\t\t${array_Example[2]}")


    println("\n")


    println ("\tFOR LOOPS\n")

    println ("\t\tThe complete iteration of the array is:")
    for ( iterator_i in array_Example ) {
        println ("\t\t${iterator_i}")
    }
    println()
    println ("\t\tThe complete iteration of the array is:")
    for ( iterator_i in array_Example.indices ) {
        println ("\t\t${array_Example[iterator_i]}")
    }
    println()
    println ("\t\tThe complete iteration of the array is:")
    array_Example.forEach {
        iterator_i -> println ("\t\t${iterator_i}")
    }
    println()
    println ("\t\tThe complete iteration of the array is:")
    array_Example.forEach {
        println ("\t\t${it}")  // 'it' is a Kotlin's reserved keyword.
    }
    

    println ("\n\n")
    println (". . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .")
    println ("                                              Control flow                                               ")
    println (". . . . . . . . . . . . . . . . . . . . . . . . MODULE 2 . . . . . . . . . . . . . . . . . . . . . . . . ")



    println()  ;  println()  ;  println()  ;  println()  ;  println()  ;  println()



    println (". . . . . . . . . . . . . . . . . . . . . . . . MODULE 3 . . . . . . . . . . . . . . . . . . . . . . . . ")
    println ("                                               Functions                                                 ")
    println (". . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .")
    println ("\n\n")


    println (

        "\tFUNCTIONS\n\n" +

        "\t\tDeclaration:\n\n" +
        "\t\t\tfun <function's name> ( <parameters> ) : <function's data type> {\n" +
        "\t\t\t    <tstatements>\n" +
        "\t\t\t}\n\n" +

        "\t\tCalling:\n\n" +
        "\t\t\t<function's name>(<arguments>)\n"

    )

    /*
        NOTES.
        •  Arguments passed through the function are immutable.
        •  If function does not return anything, there is no function data type to specify.
    */


    println()


    println (

        "\tANONYMOUS FUNCTIONS\n\n" +

        "\t\tDeclaration:\n\n" +
        "\t\t\tval <function's name> : (<parameters' data type>) -> <type's data type> = {\n" +
        "\t\t\t    <parameters' name> -> (\n" +
        "\t\t\t        <statements>\n" +
        "\t\t\t    )\n" +
        "\t\t\t}\n\n" +

        "\t\tShorter declaration:\n\n" +
        "\t\t\tval <function's name> = {\n" +
        "\t\t\t    <parameters' name and data types> -> (\n" +
        "\t\t\t        <statements>\n" +
        "\t\t\t    )\n" +
        "\t\t\t}\n\n" +

        "\t\tCalling:\n\n" +
        "\t\t\t... = <function's name>(<arguments>)\n"

    )

    /*
        NOTES.
        •  This are called "anonymous" because are statements directly assigned to a type; without calling.
        •  This kind of functions differences from "lambda" ones, because of data type selection.
    */


    println()


    println (
        "\tHIGHER-ORDER FUNCTIONS\n\n" +
        "\t\t•  These are normal functions which can take functions as parameters.\n"
    )

    // This is an example of anonymous function.
    val anonymousFunction_Example = {
    
        digitInText:String -> (
        
            digitInText.toInt()

        )

    }
    println ("\t\tThe calling of the anonymous function is: ${anonymousFunction_Example("12")}")

    // This is an example of high-order function.
    fun highOrderFunction_Example ( digitInText:String , auxFunction:(String)->(Int) ) : Boolean {
    
        if ( auxFunction(digitInText)%2 == 0 ) {
            return true
        } else {
            return false
        }

    }
    println ("\t\tThe calling of the high-order function is: ${highOrderFunction_Example("12",anonymousFunction_Example)}")

    // This is an anonymous function which takes another function as parameter.
    val mixedFunctions_Example = {
    
        digitInText:String , auxFunction:(String)->Int -> (
        
            if ( auxFunction(digitInText)%2 == 0 ) {
                true
            } else {
                false
            }
        
        )

    }
    println (
        "\t\tThe calling of the \"mixed\" functions is: " +
        "${mixedFunctions_Example("12",anonymousFunction_Example)}"
    )
    
    // This is an explicit high-order function declaration.
    println (
        "\t\tThe calling of the explicit declaration is: " +
        "${ mixedFunctions_Example("12",{digitInText -> digitInText.toInt()}) }"
    )


    println ("\n\n")
    println (". . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .")
    println ("                                               Functions                                                 ")
    println (". . . . . . . . . . . . . . . . . . . . . . . . MODULE 3 . . . . . . . . . . . . . . . . . . . . . . . . ")



    println()  ;  println()  ;  println()  ;  println()  ;  println()  ;  println()



    println (". . . . . . . . . . . . . . . . . . . . . . . . MODULE 4 . . . . . . . . . . . . . . . . . . . . . . . . ")
    println ("                                                  OOP                                                    ")
    println (". . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .")
    println ("\n\n")


    println (
    
        "\tCLASS FORMAT WITH DEFAULT CONSTRUCTOR\n\n" +
        "\t\tclass <class' name> {\n" +
        "\t\t    <statements>\n" +
        "\t\t}\n\n\n" +

        "\tCLASS FORMAT WITH ONE SIMPLE CONSTRUCTOR\n\n" +
        "\t\tclass <class' name> (\n" +
        "\t\t   <constructor's parameters>\n" +
        "\t\t) {\n" +
        "\t\t    <statements>\n" +
        "\t\t}\n\n\n" +

        "\tCLASS FORMAT WITH ONE OR MORE CONSTRUCTORS\n\n" +
        "\t\tclass <class' name> {\n" +
        "\t\t    <statements>\n" +
        "\t\t    constructor ( <constructor's parameters> ) {\n" +
        "\t\t        <constructor's statements>\n" +
        "\t\t    }\n" +
        "\t\t    <statements>\n" +
        "\t\t}\n\n\n" +

        "\tINSTANTIATION\n\n" +
        "\t\t<type> <object's name> = <class' name>(<constructor's arguments>)\n\n\n" +

        "\tATTRIBUTE CALLING\n\n" +
        "\t\t... <object's name>.<object's attribute> ...\n"

    )

    /*
        NOTES.
        •  It is completly necessary to use capital initial letter at declaring a class.
        •  Class' statements include attributes, constructors and methods.
    */


    println ("\n------------------------------------------------------------------------------------------------------------\n\n")


    println (

        "\tGETTER AND SETTER DEFAULT FORMAT\n\n" +

        "\t\t<type's type, name, data type, and value>\n" +

        "\t\t\tget() = field\n"+

        "\t\t\tset ( <parameters: type, name, and data type> ) {\n" +
        "\t\t\t    field = <one parameter's name>\n" +
        "\t\t\t}\n"
    
    )


    println ("\n------------------------------------------------------------------------------------------------------------\n\n")


    println (

        "\tINHERITANCE: BASED CLASS\n\n" +
        "\t\topen class <class' name> ( <constructor's parameters> ) { <statements> }\n\n\n" +

        // Note. The 'open' keyword is necessary, because all classes are "final" by default.

        "\tINHERITANCE: DERIVED CLASS WITH ONE SIMPLE CONSTRUCTOR\n\n" +
        "\t\tclass <derived class' name> ( <constructor's parameters> ) : <based class' name> ( <based class' arguments> ) { <statements> }\n\n\n" +

        "\tINHERITANCE: DERIVED CLASS WITH OTHER CONSTRUCTORS\n\n" +
        "\t\tclass <derived class' name> : <based class' name> {\n" +
        "\t\t    <statements>\n" +
        "\t\t    constructor ( <constructor's parameters> ) : super ( <based class' arguments> ) {\n" +
        "\t\t        <constructor's statements>\n" +
        "\t\t    }\n" +
        "\t\t    <statements>\n" +
        "\t\t}\n\n\n" +

        "\tINHERITANCE: BASED FUNCTION OVERRITED\n\n" +
        "\t\toverride fun <function's name> ( <parameters> ) : <function's data type> {\n" +
        "\t\t    <statements>\n" +
        "\t\t}"
     
    )

    /*
        NOTES.
        •  Visibility modifiers are put as the first keyword in types and functions.
        •  Visibility modifiers: default, public, protected, and private.
        •  There is a keyword named 'abstract' for abstract classes; those cannot be instantiated.
        •  "Abstract" classes are always "open". So, no 'open' keyword is necessary.
    */


    println ("\n\n")
    println (". . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .")
    println ("                                                  OOP                                                    ")
    println (". . . . . . . . . . . . . . . . . . . . . . . . MODULE 4 . . . . . . . . . . . . . . . . . . . . . . . . ")



    println ("\n\n\n\n\t\toooooooooooooooo\tTHIS IS THE END OF Kotlin_SoloLearn\t\toooooooooooooooo\t\t\n\n\n\n\n")


}




// To rest --->-->->        