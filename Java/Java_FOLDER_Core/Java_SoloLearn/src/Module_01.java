
// package


// import java.util.Scanner;



public final class Module_01 extends Abstr_Verbatim {


    // Attributes
    public static final int MODULE_NUMBER = 1 ;
    public static final String DESCRIPTION = "Early clarifications in Java." ;

    // Letting the default constructor.

    // Methods
    public final void abstr_mBody ( ) {
        mCommentsForJava()                      ;   abstr_mSeparation() ;
        mStringConcatenation();                 ;   abstr_mSeparation() ;
        mScanner_X_DataTypes()                  ;   abstr_mSeparation() ;
        mIntsDivision()                         ;   abstr_mSeparation() ;
        mPrefix_AND_Postfix()                   ;   abstr_mSeparation() ;
        mAssigmentOperators()                   ;   abstr_mSeparation() ;
        mAssigmentOperatorsClarification()      ;   abstr_mSeparation() ;
        mBinatyOperators()                      ;
    }

    private static final void mCommentsForJava ( ) {

        System.out.println ("Simple comment:") ; System.out.println ("\n\t// ... <code> ...\n") ;

        // This is the way to do a short comment.
        // (Line-by-line).

        System.out.println ("Large comment:") ; System.out.println ("\n\t/*\n\t\t...\n\t\t<code>\n\t\t...\n\t/*\n") ;

        /*
            This is the common way to do a large comment. This just works in the current java file, and not in the JavaDoc.
        */

        System.out.println ("JavaDoc comment:") ; System.out.println ("\n\t/**\n\t\t...\n\t\t<code>\n\t\t...\n\t/*") ;

        /**
        This is a documentation comment.
        */

        /**
        This is also a documentation comment.*/

        /***
        In order to create a box in the doc, there are put more than 2 asterisks at the beginning of the comment
        */

    }

    private static final void mStringConcatenation ( ) {

        System.out.println ("The fact of adding a plus sign between two strings is called 'String Concatenation'.") ;

        // Java sometimes cast values into a String data type in order to make itself works.
        // Basically, a String data type is a collection of Char data type variables.

    }

    private static final void mScanner_X_DataTypes ( ) {

        // There is a specific kind of Scanner (object) for each data type in Java.

        // Scanner instanciation
        System.out.println ("\tScanner <scanner name> = new Scanner(System.in) ;\n") ;

        // Scanner types
        // (They depend on what kind of data type it is read.)
        System.out.println (    "\t<scanner name>.nextByte() ;"     ) ;
        System.out.println (    "\t<scanner name>.nextShort() ;"    ) ;
        System.out.println (    "\t<scanner name>.nextInt() ;"      ) ;
        System.out.println (    "\t<scanner name>.nextLong() ;"     ) ;
        System.out.println (    "\t<scanner name>.nextFloat() ;"    ) ;
        System.out.println (    "\t<scanner name>.nextDouble() ;"   ) ;
        System.out.println (    "\t<scanner name>.nextBoolean() ;"  ) ;
        System.out.println (    "\t<scanner name>.nextLine() ;"     ) ;
        System.out.println (    "\t<scanner name>.next() ;"         ) ;

        /*
            These statements can be used as a:

                variable initialization (behind them);
                attribute initialization (behind them);

                variable assignation (behind them);
                attribute assignation (behind them); or,

                print statement (outside them).

        */

    }

    private static final void mIntsDivision ( ) {

        // Initializing an int data type variable.
        int num_dividend = 21   ;System.out.println("\tThe int value stored in 'num_dividend' is = " + num_dividend + '.');

        // Initializing another int variable.
        int num_divisor = 4     ;System.out.println("\tThe int value stored in 'num_divisor' is = " + num_divisor + ".\n");

        // Dividing both (just initialized) numbers.
        System.out.println ( "\tThe float quotient (result) of the division is equal to " + num_dividend / num_divisor + ".\n" ) ;

        // Storing the division inside a float variable
        float num_quotient = num_dividend / num_divisor ;

        System.out.print (" \t ") ; System.out.println ( num_dividend ) ;
        System.out.println ("\t---- = " + num_quotient + "\t(Clearly, omitting the division's remainder.)");
        System.out.print (" \t\s ") ; System.out.println ( num_divisor ) ;

        /*
            The reason why the division's result does not print any representative decimal number is because
            the numbers, being worked on, are ints (data type).
        */

    }

    private static final void mPrefix_AND_Postfix ( ) {

        // Initializing an int data type variable.
        int i = 0   ;System.out.println("\tThe int value stored in 'i' is = " + i + '.');

        // Initializing another int variable.
        int j = 0   ;System.out.println("\tThe int value stored in 'j' is = " + j + '.');

        System.out.println();

        // PREFIX
        i = (++j) ;
        System.out.println("\t'i' variable after evaluating 'i = (++j)' = " + i + '.');
        System.out.println("\t'j' variable after evaluating 'i = (++j)' = " + j + '.');

        System.out.println();

        // RESET
        i = 0   ;System.out.println("\tThe int value stored in 'i' is = " + i + '.');
        j = 0   ;System.out.println("\tThe int value stored in 'j' is = " + j + '.');

        System.out.println();

        // POSTFIX
        i = (j++) ;
        System.out.println("\t'i' variable after evaluating 'i = (j++)' = " + i + '.');
        System.out.println("\t'j' variable after evaluating 'i = (j++)' = " + j + '.');

        System.out.println('\n');
        System.out.print("another evaluation:");
        System.out.println('\n');

        // Initializing another int variable.
        int k = 0   ;System.out.println("\tThe  int  value  stored  in  'k'  is  =  " + k + '.');

        System.out.println();

        // Printing some operations.
        System.out.print ("\tPrinting the result of 'k'      ...     ")  ;   System.out.println(k)   ;   System.out.println() ;
        System.out.print ("\tPrinting the result of '++k'    ...     ")  ;   System.out.println(++k) ;   System.out.println() ;
        System.out.print ("\tPrinting the result of 'k'      ...     ")  ;   System.out.println(k)   ;   System.out.println() ;
        System.out.print ("\tPrinting the result of 'k++'    ...     ")  ;   System.out.println(k++) ;   System.out.println() ;
        System.out.print ("\tPrinting the result of 'k'      ...     ")  ;   System.out.println(k)   ;   System.out.println() ;
        System.out.print ("\tPrinting the result of '--k'    ...     ")  ;   System.out.println(--k) ;   System.out.println() ;
        System.out.print ("\tPrinting the result of 'k'      ...     ")  ;   System.out.println(k)   ;   System.out.println() ;
        System.out.print ("\tPrinting the result of 'k--'    ...     ")  ;   System.out.println(k--) ;   System.out.println() ;
        System.out.print ("\tPrinting the result of 'k'      ...     ")  ;   System.out.println(k)   ;

    }

    private static final void mAssigmentOperators ( ) {

        // Initializing an int data type variable.
        int int_number = 10 ;
        System.out.println("\tThe int value stored in 'int_number' is = " + int_number + ".\n");

        // Using Assigment operators

        int_number += 1     ;   // int_number = int_number + 1 ;
        System.out.println("\tThe result of '+=' operation is = " + int_number + ".\n");

        int_number -= 2     ;   // int_number = int_number - 2 ;
        System.out.println("\tThe result of '-=' operation is = " + int_number + ".\n");
        
        int_number *= 3     ;   // int_number = int_number * 3 ;
        System.out.println("\tThe result of '*=' operation is = " + int_number + ".\n");
        
        int_number /= 2     ;   // int_number = int_number / 4 ;
        System.out.println("\tThe result of '/=' operation is = " + int_number + ".\n");
        
        int_number %= 2     ;   // int_number = int_number % 5 ;
        System.out.println("\tThe result of '%=' operation is = " + int_number + '.');

        // Assigment operators are a way to make short these operations without repeating some values.

    }

    private static final void mAssigmentOperatorsClarification ( ) {
    
        // Initializing two int data type variables.
        int int_number_EG1 = 2 ;
        System.out.println("\tThe int value stored in 'int_number_EG1' is = " + int_number_EG1 + '.');
        int int_number_EG2 = 5 ;
        System.out.println("\tThe int value stored in 'int_number_EG2' is = " + int_number_EG2 + '.');

        // Initializing another two int data type variables.
        int int_number_EG3 = 20 ;
        System.out.println("\tThe int value stored in 'int_number_EG3' is = " + int_number_EG3 + '.');
        int int_number_EG4 = 20 ;
        System.out.println("\tThe int value stored in 'int_number_EG4' is = " + int_number_EG4 + '.');

        System.out.println();

        // Operating variables.

        int_number_EG3 *= int_number_EG1 + int_number_EG2 ;
        System.out.println("\tThe new of 'int_number_EG3' is = " + int_number_EG3 + '.');

        System.out.println();

        int_number_EG4 *= (int_number_EG1 + int_number_EG2) ;
        System.out.println("\tThe new of 'int_number_EG4' is = " + int_number_EG4 + '.');
    
    }

    private static final void mBinatyOperators ( ) {

        System.out.println ("\t ___________________ ") ;
        System.out.println ("\t|                   |") ;
        System.out.println ("\t|        NOT        |") ;
        System.out.println ("\t|___________________|") ;
        System.out.println ("\t|         |         |") ;
        System.out.println ("\t|    2    |    10   |") ;
        System.out.println ("\t|   ---   |   ---   |") ;
        System.out.println ("\t|   "+(~2)+"    |    01   |") ; // Integer.toBinaryString(~2) ;
        System.out.println ("\t|_________|_________|") ;

        System.out.println();
        
        System.out.println ("\t ___________________ ") ;
        System.out.println ("\t|                   |") ;
        System.out.println ("\t|        AND        |") ;
        System.out.println ("\t|___________________|") ;
        System.out.println ("\t|         |         |") ;
        System.out.println ("\t|    1    |    01   |") ;
        System.out.println ("\t|    2    |    10   |") ;
        System.out.println ("\t|   ---   |   ---   |") ;
        System.out.println ("\t|    "+(1&2)+"    |     "+Integer.toBinaryString(1&2)+"   |") ;
        System.out.println ("\t|_________|_________|") ;

        System.out.println();
        
        System.out.println ("\t ___________________ ") ;
        System.out.println ("\t|                   |") ;
        System.out.println ("\t|         OR        |") ;
        System.out.println ("\t|___________________|") ;
        System.out.println ("\t|         |         |") ;
        System.out.println ("\t|    1    |    01   |") ;
        System.out.println ("\t|    2    |    10   |") ;
        System.out.println ("\t|   ---   |   ---   |") ;
        System.out.println ("\t|    "+(1|2)+"    |    "+Integer.toBinaryString(1|2)+"   |") ;
        System.out.println ("\t|_________|_________|") ;

        System.out.println();
        
        System.out.println ("\t ___________________ ") ;
        System.out.println ("\t|                   |") ;
        System.out.println ("\t|        XOR        |") ;
        System.out.println ("\t|___________________|") ;
        System.out.println ("\t|         |         |") ;
        System.out.println ("\t|    1    |    01   |") ;
        System.out.println ("\t|    2    |    10   |") ;
        System.out.println ("\t|   ---   |   ---   |") ;
        System.out.println ("\t|    "+(1^2)+"    |    "+Integer.toBinaryString(1^2)+"   |") ;
        System.out.println ("\t|_________|_________|") ;

        System.out.println();
        
        System.out.println ("\t ___________________ ") ;
        System.out.println ("\t|                   |") ;
        System.out.println ("\t|        BRSO       |") ; // Binary Right Shift Operator
        System.out.println ("\t|___________________|") ;
        System.out.println ("\t|         |         |") ;
        System.out.println ("\t|    1    |    01   |") ;
        System.out.println ("\t|    2    |    10   |") ;
        System.out.println ("\t|   ---   |   ---   |") ;
        System.out.println ("\t|    "+(1>>2)+"    |     "+Integer.toBinaryString(1>>2)+"   |") ;
        System.out.println ("\t|_________|_________|") ;

        System.out.println();
        
        System.out.println ("\t ___________________ ") ;
        System.out.println ("\t|                   |") ;
        System.out.println ("\t|        BLSO       |") ; // Binary Left Shift Operator
        System.out.println ("\t|___________________|") ;
        System.out.println ("\t|         |         |") ;
        System.out.println ("\t|    1    |    01   |") ;
        System.out.println ("\t|    2    |    10   |") ;
        System.out.println ("\t|   ---   |   ---   |") ;
        System.out.println ("\t|    "+(1<<2)+"    |   "+Integer.toBinaryString(1<<2)+"   |") ;
        System.out.println ("\t|_________|_________|") ;

        // Assigment operation also works with Binary operations.

    }


}
