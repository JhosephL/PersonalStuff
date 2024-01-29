
// PREPROCESSOR DIRECTIVES
#include <iostream> // For 'cout' and 'endl' functions
//// For STL containers.
#include <list>
#include <vector>
#include <deque>

using namespace std ;



// GLOBAL STATEMENTS


// PROTOTYPES
void function_vector ( void ) ;


/* MAIN FUNCTION DEFINITION */

int main ( void ) {

    cout << "\n\n\n" << endl ;

    
    function_vector() ;
    

    cout << "\n\n\n\tALL RIGHT!\n\n\n\n" << endl ;

return 0;
}


// OTHER FUNCTIONS DEFINITION

void function_vector ( void ) {

    cout << "VECTOR" ;

    // - Declarations - //
    //// Empty declaration.
    vector<int> vector_empty ;
    //// Sized declaration.
    vector<int> vector_sized(5) ;

    // - Initialization - //
    vector<int> vector_initialized = { 1,2,3,4,5 } ;

    // - Assignment - //
    vector_initialized = { 0,1,2,3,4 } ;

    // - Iterations - //
    vector<int>::iterator vectorIterator ;
    vector<int>::reverse_iterator vectorReverseIterator ;
    //// for-loop.
    cout << "\n\n\tvector_empty:" << endl ;
    for ( int counter = 0 ; counter <= vector_empty.size() ; counter++ )
        if ( ! vector_empty.empty() )
            cout << '\t' << vector_empty.at(counter) << ' ' ;
        else
            cout << "\t_" ;
    //// for-each.
    cout << "\n\n\tvector_sized:" << endl ;
    for ( const int& iterator : vector_sized )
        cout << '\t' << iterator << ' ' ;
    //// Iterator from Head to Tail.
    cout << "\n\n\tvector_initialized:" << endl ;
    for ( vectorIterator = vector_initialized.begin() ; vectorIterator != vector_initialized.end() ; vectorIterator++ )
        cout << '\t' << *vectorIterator << ' ' ;
    //// Reverse iterator from Head to Tail.
    cout << "\n\n\tvector_initialized:" << endl ;   
    for ( vectorReverseIterator = vector_initialized.rend()-1 ; vectorReverseIterator != vector_initialized.rbegin()-1  ; vectorReverseIterator-- )
        cout << '\t' << *vectorReverseIterator << ' ' ;
    //// Iterator from Tail to Head.
    cout << "\n\n\tvector_initialized:" << endl ;
    for ( vectorIterator = vector_initialized.end()-1 ; vectorIterator != vector_initialized.begin()-1 ; vectorIterator-- )
        cout << '\t' << *vectorIterator << ' ' ;
    //// Reverse iterator from Tail to Head.
    cout << "\n\n\tvector_initialized:" << endl ;
    for ( vectorReverseIterator = vector_initialized.rbegin() ; vectorReverseIterator != vector_initialized.rend() ; vectorReverseIterator++ )
        cout << '\t' << *vectorReverseIterator << ' ' ;
    
    // - Operations - //
    //// ...

}




// To rest -->      