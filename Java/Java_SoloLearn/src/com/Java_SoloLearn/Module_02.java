
package com.Java_SoloLearn ;


// Imports



public final class Module_02 extends Abstr_Verbatim {


    public static final int MODULE_NUMBER = 2 ;
    public static final String DESCRIPTION = "Additions to statements in Java." ;

    // Letting the default constructor.

    public final void abstr_mBody ( ) {
        mSwitchingAssigment();
    }

    private static final void mSwitchingAssigment ( ) {
    
        // There is a possiblity to initilize or assign a switch to a variable like this:
        System.out.println("General structure:\n");
        System.out.println (

            "\t<data type> <variable name> = switch ( <conditional variable> ) {"
            +"\n\n"
            +"\t\tcase <conditional value> -> <variable value> ;"
            +"\n\n"
            +"\tdefault -> <default variable value> ;"
            +"\n\t};"

        ); // The '->' sign is called "SHORTHAND".
        // As '<conditional variable>' as '<variable>' can have some valid data type.


        System.out.println();

        
        System.out.println ("Example:\n") ;

        // Initilizing an int data type variable.
        int int_predefinedOption = 10 ;

        Boolean bool_numberFound = switch(int_predefinedOption) {

            case 0 -> true ;

            case 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 -> false ;

        default -> false ;
        };

        System.out.println ("\tThe result of switching assigment example is: " + bool_numberFound) ;
    
    }


}
