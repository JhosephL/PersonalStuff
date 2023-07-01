
// Package


import java.util.Arrays;
import java.util.ArrayList ;



public abstract class DynamicArrays {


    public static final void body ( ) {

        AbstractClass.bodyTitle("Dynamic Arrays") ;

        content() ;

    }


    //// Other functions
    public static final void content ( ) {

        //// Declaring and assigning...

        ArrayList<Integer> dynamicArray = new ArrayList<> (Arrays.asList(0,1,2,3,4)) ;

        System.out.println("\t• The size of the array is: " + dynamicArray.size() + '\n');

        System.out.print ("\tThe content of the dynamic array is:\n\t") ;
        for ( int iterator_i : dynamicArray ) {
            System.out.print (iterator_i+" ") ;
        }
        System.out.println('\n');

        //// Adding element...

        System.out.println ("\t• Adding a new element to the array: " + dynamicArray.add(5) + "\n") ;

        System.out.println("\t• The new size of the array is: " + dynamicArray.size() + '\n');
        
        System.out.print ("\tThe new content of the dynamic array is:\n\t") ;
        for ( int counter_i=0 ; counter_i < dynamicArray.size() ; counter_i++ ) {
            System.out.print (dynamicArray.get(counter_i)+" ") ;
        }
        System.out.println('\n');

        //// Removing element...

        System.out.println ("\t• Removing a new element to the array: " + dynamicArray.remove(5) + "\n") ;

        System.out.println("\t• The new size of the array is: " + dynamicArray.size() + '\n') ;
        
        System.out.print ("\tThe new content of the dynamic array is:\n\t") ;
        for ( int counter_i=0 ; counter_i < dynamicArray.size() ; counter_i++ ) {
            System.out.print (dynamicArray.get(counter_i)+" ") ;
        }
        System.out.println('\n');

        //// Setting elements...

        System.out.print ("\tThe setting content of the dynamic array is:\n") ;
        for ( int counter_i=0 ; counter_i < dynamicArray.size() ; counter_i++ ) {
            System.out.println ("\tPrevious: " + dynamicArray.set(counter_i,dynamicArray.get(counter_i)+1) + ". New: " + dynamicArray.get(counter_i)) ;
        }

    }


}
