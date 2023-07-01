
// Package


// Imports



public abstract class StaticArrays {


    public static final void body ( ) {

        AbstractClass.bodyTitle("Static Arrays") ;

        content() ;

    }


    //// Other functions
    public static final void content ( ) {

        int[] staticArray = {0,1,2,3,4} ;

        System.out.print ("\tThe content of the static array is:\n\t") ;
        for ( int counter_i=0 ; counter_i < 5 ; counter_i++ ) {
            System.out.print (staticArray[counter_i]+" ") ;
        }
        System.out.println();

    }


}
