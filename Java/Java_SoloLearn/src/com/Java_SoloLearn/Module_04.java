
package com.Java_SoloLearn ;


// Imports



public class Module_04 extends Abstr_Verbatim { // This class is not FINAL in order to making use of ANONYMOUS CLASSES.


    public static int MODULE_NUMBER = 4 ;
    public static String DESCRIPTION = "OOP section." ;
    public int id ;

    public Module_04 ( int id ) {
        setID(id);
    }

    public void setID ( int id ) {
        this.id = id ;
    }

    public final void abstr_mBody ( ) {
        mMathClass()                    ;   abstr_mSeparation()   ;
        mToKnowAboutOOP()               ;   abstr_mSeparation()   ;
        mAnonymousClassImplementation() ;   abstr_mSeparation()   ;
        equalsImplementation()          ;   abstr_mSeparation()   ;
        hashCodeImplementation()        ;   abstr_mSeparation()   ;
        mAboutJavaAPI()                 ;
    }

    private static final void mMathClass ( ) {

        System.out.println ("Beginning with the use of MATH Java library:\n") ;

        // Initilizing some int data type variables.
        int intVariable_01 = Math.abs(1) ;
        int intVariable_02 = Math.abs(-2) ;
        int intVariable_03 = Math.max(1,2) ; // This Math's function just works with 2 arguments.
        int intVariable_04 = Math.min(1,2) ; // This Math's function just works with 2 arguments.

        // Printing int variables's values.
        System.out.println ("\tThe value of 'intVariable_01' is = " + intVariable_01) ;
        System.out.println ("\tThe value of 'intVariable_02' is = " + intVariable_02) ;
        System.out.println ("\tThe value of 'intVariable_03' is = " + intVariable_03) ;
        System.out.println ("\tThe value of 'intVariable_04' is = " + intVariable_04) ;


        System.out.println();


        // Initilizing a double data type variable.
        double doubleVariable_01 = Math.ceil(1.2345) ;
        double doubleVariable_02 = Math.floor(1.2345) ;
        double doubleVariable_03 = Math.pow(2,3) ;
        double doubleVariable_04 = Math.sqrt(4) ;

        // Printing double variable's value.
        System.out.println ("\tThe value of 'doubleVariable_01' is = " + doubleVariable_01) ;
        System.out.println ("\tThe value of 'doubleVariable_02' is = " + doubleVariable_02) ;
        System.out.println ("\tThe value of 'doubleVariable_03' is = " + doubleVariable_03) ;
        System.out.println ("\tThe value of 'doubleVariable_04' is = " + doubleVariable_04) ;

    }

    public static final void mToKnowAboutOOP ( ) {

        System.out.println ("Concepts:\n") ;

        System.out.println ("\tOverridign is also known as runtime polymorphism.") ;

        System.out.println();

        System.out.println ("\tOverloading is also known as compile-time polymorphism.") ;

    }

    public void mAnonymousClassImplementation ( ) {

        System.out.println ("Messages from Anonymous classes implementation:\n") ;

        Module_04 m4_example_01 = new Module_04 (41) ;

        Module_04 m4_example_02 = new Module_04 (42) {
            
            @Override
            public void mAnonymousClass ( ) {

                System.out.println ("\tSecond message from 'mAnonymousClass'.") ;

                /*
                    In order to make ANONYMOUS CLASSES:

                        1. Create an instance or an object from the class which it is needed to override a method.
                        2. Open brackets and simulate as if a class were written.
                            - Implicitly this anonymous class has an EXTENDS keyword in it. -
                        3. Specify the method's overriding with the OVERRIDE tag.
                            - This step is optional, because this tag is used as a convention to compile and read code easier.
                        4. Build the method.
                            - Only the instance that create the anonymous class is capable to use the specified and overridden method. -
                */

            }

        };

        m4_example_01.mAnonymousClass() ;

        System.out.println();

        m4_example_02.mAnonymousClass() ;

    }

    public void mAnonymousClass ( ) {

        System.out.println ("\tFirst message from 'mAnonymousClass'.") ;

        /*
            Anonymous classes are useful to change class components on the fly.
        */

    }

    public static final void equalsImplementation ( ) {

        Module_04 m4_example_01 = new Module_04 (41) ;

        Module_04 m4_example_02 = new Module_04 (41) ;

        Module_04_aux m4AUX_example_01 = new Module_04_aux (41) ;

        Module_04_aux m4AUX_example_02 = new Module_04_aux (41) ;
        

        System.out.println ("Evaluating objects equity:\n") ;


        System.out.println ("\tIs 'm4_example_01' equal to 'm4_example_02'?") ;
        System.out.println ( "\t\tR/. " + m4_example_01.equals(m4_example_02) ) ;

        System.out.println();

        System.out.println ("\tIs 'm4AUX_example_01' equal to 'm4AUX_example_02'?") ;
        System.out.println ( "\t\tR/. " + m4AUX_example_01.equals(m4AUX_example_02) ) ;

        System.out.println();System.out.println();System.out.println();

        System.out.println ("\tIs 'm4_example_01' equal to 'm4AUX_example_01'?") ;
        System.out.println ( "\t\tR/. " + m4_example_01.equals(m4AUX_example_01) ) ;

        System.out.println();

        System.out.println ("\tIs 'm4AUX_example_02' equal to 'm4_example_02'?") ;
        System.out.println ( "\t\tR/. " + m4AUX_example_02.equals(m4_example_02) ) ;


        /*
            The difference between 'Module_04' and 'Module_04_aux'
            is that this class has the EQUALS method overridden, while the auxiliar class has not.

            The new EQUALS implementation checks the ID of the current class,
            while the default EQUALS method checks memory referencing.
        */

    }

    @Override
    public boolean equals ( Object obj ) {

        if (this == obj) {
            return true ;
        }

        if (obj == null) {
            return false ;
        }

        if ( getClass() != obj.getClass() ) {
            return false ;
        }

        Module_04 other = (Module_04) obj ;

        if ( id == 0 ) {

            if ( other.id != 0 ) {
                return false ;
            }

        } else if ( this.id != other.id ) {
            return false ;
        }

        return true;

    }

    public static final void hashCodeImplementation ( ) {

        Module_04 m4_example_01 = new Module_04 (41) ;

        Module_04 m4_example_02 = new Module_04 (41) ;

        Module_04_aux m4AUX_example_01 = new Module_04_aux (41) ;

        Module_04_aux m4AUX_example_02 = new Module_04_aux (41) ;


        System.out.println ("Evaluating objects' hashCode:\n") ;


        System.out.println ("\tThe hashCode of 'm4_example_01' is the same as 'm4_example_02' has.") ;
        System.out.println ("\t\t" + m4_example_01.hashCode() + " === " + m4_example_02.hashCode()) ;

        System.out.println();

        System.out.println ("\tThe hashCode of 'm4AUX_example_01' is NOT the same as 'm4AUX_example_02' has.") ;
        System.out.println ("\t\t" + m4AUX_example_01.hashCode() + " === " + m4AUX_example_02.hashCode()) ;


        /*
            The difference between 'Module_04' and 'Module_04_aux'
            is that this class has the HASHCODE method overridden, while the auxiliar class has not.

            The new HASHCODE implementation checks the ID of the current class,
            while the default HASHCODE method checks memory referencing.
        */

    }

    @Override
    public int hashCode ( ) {

        final int prime = 31;
        int result = 1;

        result = prime * result + ( (this.id == 0) ? 0 : id ) ;
    
    return result;
    }

    public static final void mAboutJavaAPI ( ) {

        System.out.println ("In order to use Java API Collection:\n\n\timport java.awt.*") ;
        // In this case, asterisc character is called wildcard character.

    }


}
