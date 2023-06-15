
// Preprocessor directives
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std ;



// Global statements
const int globalConst_intArraySize = 8 ;
int* globalVariable_intArray ;


// Prototypes
void function_GenerateIntArray (void) ;
void function_PrintArray (void) ;
void function_Algorithm_Selection (void) ;
void function_Algorithm_BubbleSort (void) ;
void function_Algorithm_Insertion (void) ;
void function_Algorithm_QuickSort (void) ;


int main ( ) {

    cout << "\n\n\n\nalgalgalgalgalgalg\tBEGINNING OF ALGORITHMS FOR ORDERING ARRAYS\talgalgalgalgalgalg\n\n\n\n" << endl ;

    
    /*
    
        Plan:
            1). Assign memory and random values for the array.
            2). Print the array, with the first values.
            3). Modify the array according to an algoritm.
            4). Print the array, with the array modified.

    */
    

    cout << "Selection ALGORITHM\n" << endl ;

        function_GenerateIntArray() ;
        cout << "\tinitial values:" << endl ;
        function_PrintArray() ;
        function_Algorithm_Selection() ;
        cout << "\tfinal values:" << endl ;
        function_PrintArray() ;
    
    cout << endl ;

    cout << "Bubble Sort ALGORITHM\n" << endl ;

        function_GenerateIntArray() ;
        cout << "\tinitial values:" << endl ;
        function_PrintArray() ;
        function_Algorithm_BubbleSort() ;
        cout << "\tfinal values:" << endl ;
        function_PrintArray() ;
    
    cout << endl ;

    cout << "Insertion ALGORITHM\n" << endl ;

        function_GenerateIntArray() ;
        cout << "\tinitial values:" << endl ;
        function_PrintArray() ;
        function_Algorithm_Insertion() ;
        cout << "\tfinal values:" << endl ;
        function_PrintArray() ;
    
    cout << endl ;

    cout << "Quick Sort ALGORITHM\n" << endl ;

        function_GenerateIntArray() ;
        cout << "\tinitial values:" << endl ;
        function_PrintArray() ;
        function_Algorithm_QuickSort() ;
        cout << "\tfinal values:" << endl ;
        function_PrintArray() ;
    
    cout ;


    cout << "\n\n\nalgalgalgalgalgalg\tEND OF ALGORITHMS FOR ORDERING ARRAYS\talgalgalgalgalgalg\n\n\n\n" << endl ;

return 0;
}


void function_GenerateIntArray ( void ) {

    globalVariable_intArray = new int[globalConst_intArraySize] ;

    for ( int counter_i=0 ; counter_i < globalConst_intArraySize ; counter_i++ ) {

        globalVariable_intArray[counter_i] = rand() % 10 ;

    }

}


void function_PrintArray ( void ) {

    cout << '\t' ;

    for ( int counter_i=0 ; counter_i < globalConst_intArraySize ; counter_i++ ) {

        if ( counter_i+1 != globalConst_intArraySize ) {
            cout << "| " << globalVariable_intArray[counter_i] << " " ;
        } else {
            cout << "| " << globalVariable_intArray[counter_i] << " |" ;
        }

    }

    cout << endl << endl ;

}


void function_Algorithm_Selection ( void ) {

    int int_aux=0 , int_counter=0 ;

    for ( int i=0 ; i < globalConst_intArraySize ; i++ ) {

        int_aux = globalVariable_intArray[i] ;
        int_counter = i ;

        for ( int ii=(i+1) ; ii < globalConst_intArraySize ; ii++ ) {

            if ( globalVariable_intArray[ii] < int_aux ) {

                // Change the order from more-than to less-than.
                int_aux = globalVariable_intArray[ii] ;
                int_counter = ii ;

            }

        }

        globalVariable_intArray[int_counter] = globalVariable_intArray[i] ;
        globalVariable_intArray[i] = int_aux ;

    }

}


void function_Algorithm_BubbleSort ( void ) {

    int int_aux=0 ;

    for ( int i=0 ; i < globalConst_intArraySize ; i++ ) {

        for ( int ii=(i+1) ; ii < globalConst_intArraySize ; ii++ ) {

            // Change the order from more-than to less-than.
            if ( globalVariable_intArray[i] > globalVariable_intArray[ii] ) {

                int_aux = globalVariable_intArray[i] ;
                globalVariable_intArray[i] = globalVariable_intArray[ii] ;
                globalVariable_intArray[ii] = int_aux ;

            }
        
        }
    
    }

}


void function_Algorithm_Insertion ( void ) {

    int int_number=0 , int_position=0 , int_temporal=0 ;

    for ( int i=1 ; i < globalConst_intArraySize ; i++ ) {

        int_number = globalVariable_intArray[i] ;
        int_position = i ;

        while ( (globalVariable_intArray[int_position-1] > int_number) && (int_position-1 >= 0) ) {

            int_temporal = int_number ;
            globalVariable_intArray[int_position] = globalVariable_intArray[int_position-1] ;
            globalVariable_intArray[int_position-1] = int_temporal ;
            int_position-- ;

        }

    }

}


void function_Algorithm_QuickSort ( void ) {

    int int_firstElement = globalVariable_intArray[0] ,
        int_lastElement = globalVariable_intArray[globalConst_intArraySize-1] ,
        int_majorElement = 0 ,
        int_minorElement = 0
    ;

    // This loop finds the major element of the array, and puts it at the beginning.
    for ( int i=0 ; i < globalConst_intArraySize ; i++ ) {

        if ( globalVariable_intArray[i] > int_firstElement ) {

            int_firstElement = globalVariable_intArray[i] ;
            int_majorElement = globalVariable_intArray[globalConst_intArraySize-1] ;
            globalVariable_intArray[globalConst_intArraySize-1] = int_firstElement ;
            globalVariable_intArray[i] = int_majorElement ;

        }

    }

    // This loop finds the minor element of the array, and puts it at the end.
    for ( int i=0 ; i < globalConst_intArraySize ; i++ ) {

        if ( globalVariable_intArray[i] < int_lastElement ) {

            int_lastElement = globalVariable_intArray[i] ;
            int_minorElement = globalVariable_intArray[0] ;
            globalVariable_intArray[0] = int_lastElement ;
            globalVariable_intArray[i] = int_minorElement ;

        }

    }

    int pivot = globalVariable_intArray[globalConst_intArraySize/2] ;

    int int_counter=0 , int_auxCounter=1 ;

    for ( int i=0 ; i < (globalConst_intArraySize-1) ; i++ ) {

        if ( pivot < globalVariable_intArray[i+1] ) {

            int_counter = globalVariable_intArray[int_auxCounter] ;
            globalVariable_intArray[int_auxCounter] = pivot ;
            globalVariable_intArray[globalConst_intArraySize/2] = int_counter ;
            int_auxCounter++ ;

        }

    }

    int_counter=0 , int_auxCounter=1 ;

    for ( int i=0 ; i < (globalConst_intArraySize-1) ; i++ ) {

        if ( pivot > globalVariable_intArray[i+1] ) {

            int_counter = globalVariable_intArray[int_auxCounter] ;
            globalVariable_intArray[int_auxCounter] = pivot ;
            globalVariable_intArray[globalConst_intArraySize/2] = int_counter ;
            int_auxCounter++ ;

        }

    }

}




// To rest -->      
