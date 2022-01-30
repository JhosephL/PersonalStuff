
/*
    (Mostly) ALL FROM https://www.youtube.com/channel/UC_fFL5jgoCOrwAVoM_fBYwA
*/

package com.syntaxANDfunctions ;


import java.util.Scanner;
import java.util.Arrays;
import java.util.Date;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.LinkedList;



public class syntaxANDfunctions {

    // @param args the command line arguments


    public static void main ( String[] args ) {

        System.out.println ("\n\n\n\n\t\toooooooooooooooo\tTHIS IS THE BEGINNING OF Java_Functions\t\toooooooooooooooo\t\t\n\n\n\n\n") ;

        mForPrinting();                 System.out.println("\n\n\n");
        mEscapeSequences();             System.out.println("\n\n\n");
        mInputs();                      System.out.println("\n\n\n");
        mDataTypes();                   System.out.println("\n\n\n");
        mConditionalStatements();       System.out.println("\n\n\n");
        mLoops();                       System.out.println("\n\n\n");
        mArrays();                      System.out.println("\n\n\n");
        mMatrixes();                    System.out.println("\n\n\n");
        mConvertions();                 System.out.println("\n\n\n");
        mCurrentDate();                 System.out.println("\n\n\n");
        mMath();                        System.out.println("\n\n\n");
        mEnum();                        System.out.println("\n\n\n");

        mGets_Sets();                   System.out.println("\n\n\n");
        mInheritance();                 System.out.println("\n\n\n");
        mConstructor();                 System.out.println("\n\n\n");
        mInterface();                   System.out.println("\n\n\n");
        mAbstract();                    System.out.println("\n\n\n");
        mInnerClasses();                System.out.println("\n\n\n");

        mUseful();

        System.out.println ("\n\n\n\n\n\t\toooooooooooooooo\tTHIS IS THE END OF Java_Functions\t\toooooooooooooooo\t\t\n\n\n\n") ;

    }

    // INFO
    public static void mForPrinting () {

        System.out.println ("\tmForPrinting\t\tMETHOD\n") ;

        System.out.println (

            "System.out.print(): Syntax for printing without line jump or a new line."
            +"\n"+
            "System.out.println(): Syntax for printing with line jump or a new line."

        );

    }

    public static void mEscapeSequences () {

        System.out.println ("\tmEscapeSequences\tMETHOD\n") ;

        System.out.println (

            "\\n: to insert a newline."
            +"\n"+
            "\\t: to insert a tab."
            +"\n"+
            "\\b: to inserts a backline."
            +"\n"+
            "\\r: to carriage return."
            +"\n"+
            "\\f: to form feed."
            +"\n"+
            "\\': to inserts a single quote."
            +"\n"+
            "\\\": to insets a double quote."
            +"\n"+
            "\\\\: to inserts a backslash."

        );

    }

    public static void mInputs () {

        System.out.println ("\tmInputs\t\t\tMETHOD\n") ;

        System.out.println ("Scanner in_data = new Scanner (System.in): instanciation of a Scanner object.") ;
        // in_data is a convention for the Scanner object.

        System.out.println();

        System.out.println ("DataType nameVariable = in_data.nextByte(): calling of the Scanner object for saving BYTE values.") ;
        System.out.println ("DataType nameVariable = in_data.nextShort(): calling of the Scanner object for saving SHORT values.") ;
        System.out.println ("DataType nameVariable = in_data.nextInt(): calling of the Scanner object for saving INTERGER values.") ;
        System.out.println ("DataType nameVariable = in_data.nextLong(): calling of the Scanner object for saving LONG values.") ;
        System.out.println ("DataType nameVariable = in_data.nextFloat(): calling of the Scanner object for saving FLOAT values.") ;
        System.out.println ("DataType nameVariable = in_data.nextDouble(): calling of the Scanner object for saving DOUBLE values.") ;
        System.out.println ("DataType nameVariable = in_data.nextBoolean(): calling of the Scanner object for saving BOOLEAN values.") ;
        // I personally think it is a good programming practice to close a Scanner object when this is not being used.

    }

    public static void mDataTypes () {

        System.out.println ("\tmDataTypes\t\tMETHOD\n") ;

        String charToCompleteTableAbove = "-" ; String toCompleteTableAbove = charToCompleteTableAbove.repeat(121) ;
        System.out.println (toCompleteTableAbove) ;
        System.out.println (

            "|     byte\t|1 byte\t|\tStores whole numbers from -128 to 127\t\t\t\t\t\t\t|"
            +"\n"+
            "|     short\t|2 bytes|\tStores whole numbers from -32,768 to 32,767\t\t\t\t\t\t|"
            +"\n"+
            "|     int\t|4 bytes|\tStores whole numbers from -2,147,483,648 to 2,147,483,647\t\t\t\t|"
            +"\n"+
            "|     long\t|8 bytes|\tStores whole numbers from -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807\t|"
            +"\n"+
            "|     float\t|4 bytes|\tStores fractional numbers. Sufficient for storing 6 to 7 decimal digits\t\t\t|"
            +"\n"+
            "|     double\t|8 bytes|\tStores fractional numbers. Sufficient for storing 15 decimal digits\t\t\t|"
            +"\n"+
            "|     boolean\t|1 bit\t|\tStores true or false values\t\t\t\t\t\t\t\t|"
            +"\n"+
            "|     char\t|2 bytes|\tStores a single character/letter or ASCII values\t\t\t\t\t|"

        );
        System.out.println (toCompleteTableAbove) ; System.out.println () ;

        // long longNumber = 1234567891011121314L ; System.out.println ("long longNumber = " + longNumber) ;
        // float floatNumber = 123.456F ; System.out.println ("float floatNumber = " + floatNumber) ;

        System.out.println (
            "*** IN ORDER TO DEFINE A CONSTANT ***"
            +'\n'+
            "final dataType constantName = value ;"
        );

    }

    public static void mConditionalStatements () {

        System.out.println ("\tmConditionalStatements\tMETHOD\n") ;

        System.out.println (

            "if ( condition ) {"
            +"\n"+"\n"+
            "\tstatement"
            +"\n"+"\n"+
            "} else if ( condition ) {"
            +"\n"+"\n"+
            "\tstatement"
            +"\n"+"\n"+
            "} else {"
            +"\n"+"\n"+
            "\tstatement"
            +"\n"+"\n"+
            "}"

        );

        System.out.println();

        System.out.println (
            "*** CONDITIONAL OPERATOR ***"
            +'\n'+
            "dataType variableName = ( condition ) ? ifValue : elseValue ;"
        );

        System.out.println();

        System.out.println (

            "switch ( variableName_toEvaluate ) {"
            +"\n"+"\n"+
            "\tcase ( variableValue ) :"
            +"\n"+"\n"+
            "\t\tstatement"
            +"\n"+"\n"+
            "\tdefault :"
            +"\n"+"\n"+
            "\t\tstatement"
            +"\n"+"\n"+
            "}"

        );

        System.out.println();

        System.out.println (

            "try {"
            +"\n"+"\n"+
            "\tstatement"
            +"\n"+"\n"+
            "} catch ( exception ) {"
            +"\n"+"\n"+
            "\tstatement"
            +"\n"+"\n"+
            "} finally {"
            +"\n"+"\n"+
            "\tstatement"
            +"\n"+"\n"+
            "}"

        ); // It is possible to add more than one CATCH statement, however it is allowed only one FINALLY statement.

    }

    public static void mLoops () {

        System.out.println ("\tmLoops\t\t\tMETHOD\n") ;

        System.out.println (

            "for ( int counter = value ; condition ; counter operation ) {"
            +"\n"+"\n"+
            "\tstatement"
            +"\n"+"\n"+
            "}"

            +"\n"+"\n"+

            "while ( condition ) {"
            +"\n"+"\n"+
            "\tstatement"
            +"\n"+"\n"+
            "}"

            +"\n"+"\n"+

            "do {"
            +"\n"+"\n"+
            "\tstatement"
            +"\n"+"\n"+
            "} while ( condition ) ;"

        );

        System.out.println();

        System.out.println (
            "*** BREAK & CONTINUE ***"
            +'\n'+'\n'+
            "break;"
            +'\n'+
            "continue;"
            +'\n'+'\n'+
            "*** THERE IS NO 'PASS' STATEMENT IN JAVA LANGUAGE PROGRAMMING ***"
        );

    }

    public static void mArrays() {

        System.out.println ("\tmArrays\t\t\tMETHOD\n") ;

        int intArrayEG [] = new int[5] ;
        System.out.println ("int intArrayEG [] = " + intArrayEG) ;

        System.out.println();

        ArrayList <Integer> intArrayListEG = new ArrayList <> (Arrays.asList(0,1,2,3,4)) ;
        System.out.println ("ArrayList <Integer> intArrayListEG = " + intArrayListEG) ;

        System.out.println();

        ArrayList <Object> arrayListEG = new ArrayList <> (Arrays.asList(1,'a',"A",true,0.1));
        System.out.println ("ArrayList arrayListEG = " + arrayListEG) ;

        System.out.println();

        LinkedList <Integer> intLinkedListEG = new LinkedList <> (Arrays.asList(5,6,7,8,9)) ;
        System.out.println ("LinkedList <Integer> intLinkedListEG = " + intLinkedListEG) ;

    }

    public static void mMatrixes () {

        System.out.println ("\tmMatrixes\t\tMETHOD\n") ;

        // int [][] intMatrixEG = new int [3][3];
        int [][] intMatrixEG = { {0,1,2} , {3,4,5} , {6,7,8} };
        System.out.println ("int [][] intMatrixEG = " + intMatrixEG) ;

        for ( int[] i : intMatrixEG ) {
            System.out.print('\n');
            for (int j : i ) {
                System.out.print (" | " + j) ;
            }
            System.out.print(" |");
        }

        System.out.println();

    }

    public static void mConvertions () {

        System.out.println ("\tmConvertions\t\tMETHOD\n") ;

        String stringEG = "1" ;
        System.out.println ("String stringEG = " + stringEG) ;

        System.out.println(); // The same value which is stored in stringEG is converted into an Integer data type.

        int stringEG_toInt = Integer.parseInt(stringEG) ;
        System.out.println ("int stringEG_toInt = " + stringEG_toInt) ;

        System.out.println(); // The same value which is stored in stringEG_toInt is converted into a String data type.

        stringEG = Integer.toString(stringEG_toInt) ;
        System.out.println ("stringEG = " + stringEG) ;

        System.out.println(); // The syntax for CASTING: below

        float floatEG_toCast = (float) stringEG_toInt ;
        System.out.println ("float floatEG_toCast = " + floatEG_toCast) ;

    }

    public static void mCurrentDate () {

        System.out.println ("\tmCurrentDate\t\tMETHOD\n") ;

        Date date_objectEG = new Date() ;
        System.out.println ("Thanks to 'date_objectEG', the current date is: " + date_objectEG) ;

        System.out.println();

        SimpleDateFormat date_objectEG_formatter = new SimpleDateFormat("hh:mm:ss aa, EEEE dd/MM/yyyy.") ;
        String stringTo_date_objectEG_formatter = date_objectEG_formatter.format( date_objectEG ) ;
        System.out.println ("Formating the current date: " + stringTo_date_objectEG_formatter) ;

        // https://docs.oracle.com/javase/7/docs/api/java/text/SimpleDateFormat.html
        // The link above is to check the Date objects documentation. There are found the letters which can be used by SimpleDateFormat.

    }

    public static void mMath () {

        System.out.println ("\tmMath\t\t\tMETHOD") ;

        // The values can be stored in their respective (data type) return.

        System.out.println ("\nThe value of π number is: " + Math.PI) ;
        System.out.println ("\nThe value of e number is: " + Math.E) ;
        System.out.println ("\nThe absolute value of (-1) is: " + Math.abs(-1)) ;
        System.out.println ("\nThe sine of (1) is: " + Math.sin(1)) ;
        System.out.println ("\nThe cosine of (0) is: " + Math.acos(0)) ;
        System.out.println ("\nThe hyperbolic tangent of (-1) is: " + Math.tanh(-1)) ;
        System.out.println ("\nThe value of 6 powered by 3 is: " + Math.pow(6,3)) ;
        System.out.println ("\nThe value of 1 putting the sign of -2 is: " + Math.copySign(1,-2)) ;

    }

    public static void mEnum () {

        System.out.println ("\tmEnum\t\t\tMETHOD\n") ;

        System.out.println (

            "enum enumName {"
            +'\n'+'\n'+
            "\tVALUES_IN_CAPS ;"
            +'\n'+'\n'+
            "}"

        );

        /*
            Any ENUM list can be treated as a class, hence can be added an access modifier before 'enum'.
            If the values inside a ENUM have parameters, the ENUM list deserves its own constructor within it.
            ENUMs lists can include different methods within them.
        */

    }

    // OOP
    public static void mGets_Sets () {

        System.out.println ("\tmGets_Sets\t\tMETHOD\n") ;
        
        System.out.println (
        
            "public DataType getAttribute ( ) {"
            +'\n'+'\n'+
            "\treturn this.Attribute;"
            +'\n'+'\n'+
            "}"
        
        );

        System.out.println();

        System.out.println (
        
            "public DataType setAttribute ( localAttribute ) {"
            +'\n'+'\n'+
            "\tthis.attribute = localAttribute;"
            +'\n'+'\n'+
            "}"
        
        );

        System.out.println();

        System.out.println (
        
            "public DataType setAttribute ( attribute ) {"
            +'\n'+'\n'+
            "\tthis.attribute = attribute;"
            +'\n'+
            "\treturn this;"
            +'\n'+'\n'+
            "}"

        ); // In this way, it is possible to turn a normal SET in a SET method chaining.

        System.out.println();

        System.out.println (
            "*** THESE KIND OF METHODS ARE CALLED METHODS CHAINING, ***"
            +'\n'+
            "*** BECAUSE THEY CAN BE INVOKED IN ONE LINE, ONE FOLLOWED BY ANOTHER. ***"
        );

    }

    public static void mInheritance () {

        System.out.println ("\tmInheritance\t\tMETHOD\n") ;

        System.out.println ( // This is the syntax for a class which wants to use inheritance.

            "classState class nameClass extends superiorClass {"
            +'\n'+'\n'+
            "\tstatements"
            +'\n'+'\n'+
            "}"

        );

        /*

            It is preferable to use super() (inside the constructor) when inheritance is used.
            If this is so, inside super() are put the arguments for the superClass' constructor.

            It is also possible to call attributes and methods from the superior class thru super.<A|M> keyword.

        */

    }

    public static void mConstructor () {

        System.out.println ("\tmConstructor\t\tMETHOD\n") ;

        System.out.println (

            "className ( ) {"
            +'\n'+'\n'+
            "\tthis ( attributesValues ) ;"
            +'\n'+'\n'+
            "}"

        );

        System.out.println();

        System.out.println (

            "className ( parameters ) {"
            +'\n'+'\n'+
            "\tthis.attributes = parameters ;"
            +'\n'+'\n'+
            "}"

        );

    }

    public static void mInterface () {

        System.out.println ("\tmInterface\t\tMETHOD\n") ;

        // To define
        System.out.println (

            "accessModifier methodModifier interface interfaceName {"
            +'\n'+'\n'+
            "\tstatements"
            +'\n'+'\n'+
            "}"

        );

        /*

            a.M.: default or public.
            m.M.: only non_static. Do not use 'abstract' keyword cz is redundant, hence obsolete.

            attributes: public, static and final by default. Only those.
            methods: only default, public, private, static and strictfp are permitted. Do not use 'abstract' keyword cz is redundant, hence obsolete.

        */


        System.out.println();


        // To implement
        System.out.println (

            "accessModifier class className implements interfaceName {"
            +'\n'+'\n'+
            "\tstatements"
            +'\n'+'\n'+
            "}"

        );

        /*

            attributes: called and not overrided (, cz are final).
            methods: @Override

        */

    }

    public static void mAbstract () {

        System.out.println ("\tmAbstract\t\tMETHOD\n") ;

        // To define
        System.out.println (

            "accessModifier abstract class AbstractClassName {"
            +'\n'+'\n'+
            "\tstatements"
            +'\n'+'\n'+
            "}"

        );

        /*

            a.M.: only default and public.
            m.M.: only non_static. Do not use 'abstract' keyword cz is redundant, hence obsolete.

            attributes: all a.M., static and non-static modifiers. It is not allowed abstract nor final.
            methods: all a.M., static and non-static modifiers.
            IF THE METHOD IS ABSTRACT, THE METHOD HAS NO BODY TO SPECIFY.

        */


        System.out.println();


        // To implement
        System.out.println (

            "accessModifier class className extends AbstractClassName {"
            +'\n'+'\n'+
            "\tstatements"
            +'\n'+'\n'+
            "}"

        );

        /*

            attributes: called and reassigned (or "overrided").
            methods: called and @Override.

        */

    }

    public static void mInnerClasses () {

        System.out.println ("\tmInnerClasses\t\tMETHOD\n") ;

        // non-static context upon the inner class
        System.out.println (

            "outerClass objectName_fromOC = new outerClass() ;" +'\n'+ 
            "objectName_fromOC.innerClass objectName_fromIC = objectName_fromOC.new innerClass() ;" +'\n'

        );

        // static context upon inner class
        System.out.println (

            "outerClass.innerClass objectName_fromIC = new outerClass.innerClass ;" +'\n'

        );

        // Inner classes can also be defined and implemented inside outerClass' methods.

    }

    // Extra
    public static void mUseful () {

        System.out.println ("\tmUseful\t\t\tMETHOD\n") ;

        String stringEG_RegExTry = "user@company.com".replaceAll("@(.*)","") ;
        System.out.println ("\"user@company.com\".replaceAll(\"@(.*)\",\"\") = " + stringEG_RegExTry) ;

        System.out.println();

        System.out.println ("Does the object belong to this class?") ;
        syntaxANDfunctions sAf_EG = new syntaxANDfunctions();
        System.out.print ("R/. ") ; System.out.println (sAf_EG instanceof syntaxANDfunctions) ;
        // INSTANCEOF checks whether an Object is an instance, an object inherited, or an interface implementation.

        // FINAL keyword can be used in classes, methods, attributes and variables.

    }


}


// To rest --->-->->    