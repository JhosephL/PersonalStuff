
// package


import java.util.HashMap ;
import java.util.HashSet ;
import java.util.Arrays ;
import java.util.ArrayList ;
import java.util.Collections ;
import java.util.Iterator ;



public final class Module_05 extends Abstr_Verbatim {


    public static final int MODULE_NUMBER = 5 ;
    public static final String DESCRIPTION = "Final stretch." ;

    // Letting the default constructor.

    public final void abstr_mBody ( ) {
        mExceptions()           ;   abstr_mSeparation() ;
        mThreads()              ;   abstr_mSeparation() ;
        mHashMap()              ;   abstr_mSeparation() ;
        mSetCollection()        ;   abstr_mSeparation() ;
        mArraysFuncions()       ;   abstr_mSeparation() ;
        mCollectionsFuncions()  ;   abstr_mSeparation() ;
        mIterators()            ;   mAboutFiles()       ;
    }

    private static final void mExceptions ( ) throws ArithmeticException {
    
        // Initilizing some int data type variables.
        int int_00 = 0 ;
        int int_01 = 1 ;

        // Evaluating a math operation.
        try {

            System.out.println ("\tThe result of 'int_01' divided by 'int_00' is: " + int_01 / int_00 + ".") ;

        } catch ( Exception e ) {

            System.out.println ("\tMessage from CATCH EXCEPTION.\n") ;
            System.out.println ("\t\tDivision by zero.") ;
            // throw new ArithmeticException ("Division by zero.") ;

            /*

                As THROWS as THROW keywords are part of exception handling.
                The use of THROW in the previous line show the exception on console.

            */

        }

    }

    private static final void mThreads ( ) {

        // Declaring some threads.
        Module_05_aux_01 m_05_aux_01 = new Module_05_aux_01() ;
        m_05_aux_01.start() ;

        Thread m_05_aux_02 = new Thread(new Module_05_aux_02()) ;
        m_05_aux_02.start() ;

        try {
            m_05_aux_02.sleep(100) ;
        } catch ( InterruptedException ie ) {
            System.out.println ("\tCatch from M_05_AUX_02.") ;
        }

        /*

            ACCORDING TO SOLOLEARN

            Every Java thread is prioritized to help the operating system determine the order in which to schedule threads.
            The priorities range from 1 to 10, with each thread defaulting to priority 5.
            You can set the thread priority with the setPriority() method.

            The Thread.sleep() method pauses a Thread for a specified period of time.
            For example, calling Thread.sleep(1000); pauses the thread for one second.
            Keep in mind that Thread.sleep() throws an InterruptedException, so be sure to surround it with a try/catch block.

        */

    }

    private static final void mHashMap ( ) {

        // Declaring a hash map comprised by object data type as key, and by object data type as value; respectively.
        HashMap <Object,Object> hp_eg = new HashMap <> () ; // The second diamond brackets' parameters are optional.

        // Adding some fields to the hash map.
        hp_eg.put(false,0) ;
        hp_eg.put(1,'A') ;
        hp_eg.put('B',2) ;

        // top know the size of a hash map ...
        System.out.print ("\tThe hash map's size is: ") ;
        System.out.print (hp_eg.size() + "\n\n\n\n") ;
        
        // Printing hash map's keys.
        System.out.println ("\tThe hash map's keys are:\n") ;
        for ( Object o : hp_eg.keySet() ) {
            System.out.print ("\t\t") ; System.out.println (o) ;
        }


        System.out.println ("\n\n") ;


        // Printing hash map's values.
        System.out.println ("\tThe hash map's values are:\n") ;
        for ( Object o : hp_eg.values() ) {
            System.out.print ("\t\t") ; System.out.println (o) ;
        }


        System.out.println ("\n\n") ;


        System.out.println ("\tThe hash map's fields are:\n") ;
        int counter = 0 ;
        for ( Object o : hp_eg.keySet() ) {
            
            System.out.print ("\t\t" + Integer.toString(counter++) + ". " + "{\t\t\t") ;
            System.out.print (o) ; System.out.print ("\t\t\t:\t\t\t") ; System.out.print (hp_eg.get(o)) ;
            System.out.print ("\t\t\t}\n") ;

        }

        /*

            ACCORDING TO SOLOLEARN

            A HashMap cannot contain duplicate keys. Adding a new item with a key that already exists overwrites the old element.
            The HashMap class provides containsKey and containsValue methods that determine the presence of a specified key or value.
            If you try to get a value that is not present in your map, it returns the value of null.

        */

    }

    public static final void mSetCollection ( ) {

        // Declaring a set collection comprised by string data types.
        HashSet <String> set_eg = new HashSet <> () ;

        // Adding some fields to the set collection.
        set_eg.add("A") ;
        set_eg.add("B") ;
        set_eg.add("C") ;

        System.out.println ("\tThe set collection's fields are:\n\n\t\t" + set_eg) ;

    }

    public static final void mArraysFuncions ( ) {

        // Initilizing an array comprise by int data type values.
        int[] intArray_EG = new int [] {0,2,1,4,3} ;

        // Initilizing an array comprise by char data type values.
        char[] charArray_EG = new char [] {'b','a','d','e','c'} ;

        System.out.print ("\tThe content of 'intArray_EG' is:\n\n\t\t") ;

        for ( int i : intArray_EG ) {
            System.out.print (i) ; System.out.print ("\t\t") ;
        }

        System.out.println ('\n') ;

        System.out.print ("\tThe content of 'charArray_EG' is:\n\n\t\t") ;

        for ( char c : charArray_EG ) {
            System.out.print (c) ; System.out.print ("\t\t") ;
        }



        System.out.println ("\n\n\n") ;


        
        // Using an ARRAYS static function in order to sort the arrays.
        Arrays.sort (intArray_EG) ;
        Arrays.sort (charArray_EG) ;


        System.out.println ("\t\nThe resulting arrays after using ARRAYS.SORT() are:\n\n\n\n") ;


        System.out.print ("\tThe new content of 'intArray_EG' is:\n\n\t\t") ;

        for ( int i : intArray_EG ) {
            System.out.print (i) ; System.out.print ("\t\t") ;
        }

        System.out.println ('\n') ;

        System.out.print ("\tThe new content of 'charArray_EG' is:\n\n\t\t") ;

        for ( char c : charArray_EG ) {
            System.out.print (c) ; System.out.print ("\t\t") ;
        }

        System.out.println();

        // NOTE: sorting an array, it is possible to find the maximum and the minimum of its elements.

    }

    public static final void mCollectionsFuncions ( ) {

        // Initilizing an array list comprise by integer data type values.
        ArrayList <Integer> intArrayList_EG = new ArrayList <> (Arrays.asList(0,2,1,4,3)) ;

        // Initilizing an array list comprise by char data type values.
        ArrayList <Character> charArrayList_EG = new ArrayList <> (Arrays.asList('b','a','d','e','c')) ;

        System.out.print ("\tThe content of 'intArrayList_EG' is:\n\n\t\t") ;
        
        for ( int i : intArrayList_EG ) {
                System.out.print (i) ; System.out.print ("\t\t") ;
        }
        
        System.out.println ('\n') ;
        
        System.out.print ("\tThe content of 'charArrayList_EG' is:\n\n\t\t") ;

        for ( char c : charArrayList_EG ) {
            System.out.print (c) ; System.out.print ("\t\t") ;
        }



        System.out.println ("\n\n\n") ;



        System.out.println ("\t\nThe resulting arrays list after using COLLECTIONS.SORT() are:\n\n\n\n") ;
        
        // Using a COLLECTIONS static function in order to sort the arrays.
        Collections.sort (intArrayList_EG) ;
        Collections.sort (charArrayList_EG) ;

        System.out.print ("\tThe new content of 'intArrayList_EG' is:\n\n\t\t") ;
        
        for ( int i : intArrayList_EG ) {
            System.out.print (i) ; System.out.print ("\t\t") ;
        }
        
        System.out.println ('\n') ;

        System.out.print ("\tThe new content of 'charArrayList_EG' is:\n\n\t\t") ;

        for ( char c : charArrayList_EG ) {
            System.out.print (c) ; System.out.print ("\t\t") ;
        }

        
        
        System.out.println ("\n\n\n") ;



        System.out.println ("\t\nThe resulting arrays list after using COLLECTIONS.REVERSE() are:\n\n\n\n") ;
        
        // Using a COLLECTIONS static function in order to reverse the arrays.
        Collections.reverse (intArrayList_EG) ;
        Collections.reverse (charArrayList_EG) ;

        System.out.print ("\tThe new content of 'intArrayList_EG' is:\n\n\t\t") ;
        
        for ( int i : intArrayList_EG ) {
            System.out.print (i) ; System.out.print ("\t\t") ;
        }
        
        System.out.println ('\n') ;

        System.out.print ("\tThe new content of 'charArrayList_EG' is:\n\n\t\t") ;

        for ( char c : charArrayList_EG ) {
            System.out.print (c) ; System.out.print ("\t\t") ;
        }



        System.out.println ("\n\n\n") ;



        System.out.println ("\t\nThe resulting arrays list after using COLLECTIONS.SHUFFLE() are:\n\n\n\n") ;
        
        // Using a COLLECTIONS static function in order to shuffle the arrays.
        Collections.shuffle (intArrayList_EG) ;
        Collections.shuffle (charArrayList_EG) ;

        System.out.print ("\tThe new content of 'intArrayList_EG' is:\n\n\t\t") ;
        
        for ( int i : intArrayList_EG ) {
            System.out.print (i) ; System.out.print ("\t\t") ;
        }
        
        System.out.println ('\n') ;

        System.out.print ("\tThe new content of 'charArrayList_EG' is:\n\n\t\t") ;

        for ( char c : charArrayList_EG ) {
            System.out.print (c) ; System.out.print ("\t\t") ;
        }



        System.out.println ("\n\n\n") ;
        


        // Using a COLLECTIONS static function in order to find the maximum number inside the arrays.
        System.out.println ("The result of using COLLECTIONS.MAX() is: " + Collections.max (intArrayList_EG)) ;
        System.out.println ("The result of using COLLECTIONS.MAX() is: " + Collections.max (charArrayList_EG)) ;

        System.out.println();

        // Using a COLLECTIONS static function in order to find the minimum number inside the arrays.
        System.out.println ("The result of using COLLECTIONS.MIN() is: " + Collections.min (intArrayList_EG)) ;
        System.out.println ("The result of using COLLECTIONS.MIN() is: " + Collections.min (charArrayList_EG)) ;


        /*
            NOTE:
                it is possible to treat an array as a list using 'Collections.<function> (Arrays.AsList(<array's name>))' ...
        */

    }

    public static void mIterators ( ) {

        // Initilizing an array list comprise by string data type values.
        ArrayList <String> stringArrayList_EG = new ArrayList <> (Arrays.asList("AAA","BBB","CCC","DDD","EEE")) ;

        // Implementing an iterator object in order to handle the array list.
        Iterator <String> iteratorObject_EG = stringArrayList_EG.iterator() ;

        System.out.print ("\tThe content of 'stringArrayList_EG' is:\n\n\t\t") ;

        while ( iteratorObject_EG.hasNext() ) {
            System.out.print (iteratorObject_EG.next()) ; System.out.print ("\t\t") ;
        }



        System.out.println ("\n\n\n") ;



        System.out.println ("\t\nThe resulting array list after using '<ITERATOR>.REMOVE()' is:\n\n\n\n") ;

        // Removing the last element of the array list thru an iterator object function.
        iteratorObject_EG.remove() ;

        System.out.print ("\tThe new content of 'stringArrayList_EG' is:\n\n\t\t") ;

        for ( String i : stringArrayList_EG ) {
            System.out.print (i) ; System.out.print ("\t\t") ;
        }

    }

    public static void mAboutFiles ( ) {

        /*
            NOTE:
                the Scanner class inherits from the Iterator.

        */

    }


}
