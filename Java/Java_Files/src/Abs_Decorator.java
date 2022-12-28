
// package


// imports



public abstract class Abs_Decorator {


    public static final String abs_mDescription ( String class_Name , String method_Name ) {

        return "THIS IS A FILE'S SECTION THAT EXECUTES IN -> " + class_Name + " <- CLASS AND -> " + method_Name + " <- METHOD" ;

    }

    public static final void abs_mMethodIdentifier_INITIAL ( String stringMessage ) {

        System.out.println ("\n\n" + " . . . . . " + stringMessage + " . . . . . ");

    }

    public static final void abs_mMethodIdentifier_FINAL ( String stringMessage ) {

        System.out.println (" . . . . . " + stringMessage + " . . . . . " + "\n\n");

    }


}
