
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

    cout << endl << endl ;

    // - Operations - //
    //// Insert: iterator, value.
    vectorIterator = vector_initialized.end() ;
    vectorIterator = vector_initialized.insert ( vectorIterator , 5 ) ;
    cout << "\tThe value returned by the operation is: " << *vectorIterator << endl ;
    //// Insert range: position, container.
    vectorIterator = next ( vector_initialized.begin() ) ;
    vectorIterator = vector_initialized.insert ( vectorIterator , vector_sized.begin() , vector_sized.end() ) ;
    cout << "\tThe value returned by the operation is: " << *vectorIterator << endl ;
    //// Push back: value.
    vector_initialized.push_back ( 6 ) ;
    vectorIterator = prev ( vector_initialized.end() ) ;
    cout << "\tThe last element of the container is: " << *vectorIterator << endl ;
    //// Pop back: none.
    vector_initialized.pop_back() ;
    vectorIterator = prev ( vector_initialized.end() ) ;
    cout << "\tThe last element of the container is: " << *vectorIterator << endl ;
    //// Erase: position.
    vectorIterator = prev ( vector_initialized.end() ) ;
    vectorIterator = vector_initialized.erase ( vectorIterator ) ;
    cout << "\tThe last element of the container is: " << *vectorIterator << endl ;
    //// Erase: range.
    vectorIterator = next ( vector_initialized.begin() ) ;
    vectorIterator = vector_initialized.erase ( vectorIterator , vectorIterator+5 ) ;
    cout << "\tThe first element of the container is: " << *vectorIterator << endl ;
    //// Clean: none.
    vector_initialized.clear() ;
    bool bool_containerEmpty = vector_initialized.empty() ;
    cout << "\tContainer empty?: " << boolalpha << bool_containerEmpty << endl ;

}




// To rest -->      