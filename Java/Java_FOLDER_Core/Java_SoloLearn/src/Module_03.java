
// package


// imports



public final class Module_03 extends Abstr_Verbatim {


    public static final int MODULE_NUMBER = 3 ;
    public static final String DESCRIPTION = "Something about structures in Java." ;

    // Letting the default constructor.

    public final void abstr_mBody ( ) {
        mMoreAboutArrays()  ;   abstr_mSeparation() ;
        mAboutMatrixes()    ;
    }

    public static final void mMoreAboutArrays ( ) {

        // Declaring an int data type array.
        int[] intArray_x5 = new int [5] ;

        // Printing the length of 'intArray_x5'.
        System.out.println ("\tThe length of 'intArray_x5' is = " + intArray_x5.length) ;

        System.out.println();

        // Filling some values to 'intArray_x5'.
        for ( int i=0 ; i < intArray_x5.length ; ++i ) {
            intArray_x5[i] = i+1 ;
        }

        // Printing the array's values (inside it).
        System.out.print ("\tThe new content of 'intArray_x5' is: ") ;

        for ( int number : intArray_x5 ) {
            System.out.print (number + "\s\s") ;
        }

        /*
            Passing throutout 'intArray_x5' with a new variable, one that will just live durin the next loop.
            The first parameter of FOR EACH LOOP must be the list's data type containt.
            Implicitely, this kind of sentence understands the length of the list that is is passed in the second parameter.
        */

        System.out.println();
        
    }

    public static final void mAboutMatrixes ( ) {

        // Declaring an int data type matrix.
        int[][] intMatrix_4x3 = new int [4][3] ;

        // Printign the length of 'intMatrix_4x3'.
        System.out.println ("\tThe length of 'intMatrix_4x3' is = " + intMatrix_4x3.length + " by " + intMatrix_4x3[0].length ) ;

        System.out.println();
        
        // Filling some values to 'intMatrix_4x3'.
        for ( int i=0 ; i < intMatrix_4x3[0].length ; ++i ) {
            intMatrix_4x3[0][i] = i+1 ;
        }

        intMatrix_4x3[1][0] = 4 ;

        for ( int i=0 ; i < (intMatrix_4x3[2].length-1) ; ++i ) {
            intMatrix_4x3[2][i] = i+5 ;
        }

        for ( int i=0 ; i < intMatrix_4x3[3].length ; ++i ) {
            intMatrix_4x3[3][i] = i+7 ;
        }

        // Printing the matrix's values (inside it).
        System.out.println ("\tThe new content of 'intMatrix_4x3' is:\n") ;

        for ( int rows=0 ; rows < intMatrix_4x3.length ; ++rows ) {
            
            System.out.print('\t');
            
            for ( int columns=0 ; columns < intMatrix_4x3[rows].length ; ++columns ) {
                
                if ( intMatrix_4x3[rows][columns] == 0 ) {
                    System.out.print ("-\s\s") ;
                } else {
                    System.out.print (intMatrix_4x3[rows][columns] + "\s\s") ;
                }

            }
            
            System.out.println();

        }

    }


}
